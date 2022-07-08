class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        init = Node('Init')
        self.head = init
        self.tail = init

        self.current_node = None
        self.count_node = 0
    
    def __len__(self):
        return self.count_node

    def __str__(self):
        current_node = self.head.next

        output = []
        while current_node != None:
            output.append(current_node.data)
            current_node = current_node.next
        
        return f"<{'->'.join(output)}>"

    def append(self, data):
        new_node = Node(data)
        self.tail.next = new_node
        self.tail = new_node
        self.count_node += 1

    def pop(self):
        current_node = self.head.next
        previous_node = self.head

        while current_node != None:
            if current_node.next == None:
                previous_node.next = None
                self.tail = previous_node
                self.count_node -= 1
                return current_node.data
            previous_node = current_node
            current_node = current_node.next

    def find(self, data):
        current_node = self.head.next
        while current_node != None:
            if current_node.data == data:
                return current_node
            current_node = current_node.next
        return print('There is no such data')

l = LinkedList()
l.append('1')
l.append('2')
l.append('3')
l.append('4')
print(l)
l.pop()
print(l)