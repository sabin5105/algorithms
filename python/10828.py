import sys

loop = int(input())
stack = []
length = len(stack)

if loop <0 or loop > 10000:
    sys.exit()
    
for i in range(loop):
    value = input().split()
    if value[0] == "push":
        stack.append(int(value[1]))
        length += 1
    elif value[0] =="pop":
        if length == 0:
            print(-1)
        else:
            print(stack[-1])
            stack.pop()
            length -= 1
    elif value[0] == "size":
        print(length)
    elif value[0] == "empty":
        if length == 0:
            print(1)
        else:
            print(0)
    elif value[0] == "top":
        if length == 0:
            print(-1)
        else:
            print(stack[-1])