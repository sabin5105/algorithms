import sys

T = int(input())
s = set()
for _ in range(T):
    temp = sys.stdin.readline().strip().split()

    if len(temp) == 1:
        if temp[0] == "all":
            s = set([i for i in range(1, 21)])
        else:
            s = set()
    else:
        action = temp[0]
        n = int(temp[1])

        if action == 'add':
            s.add(int(n))
        elif action == 'remove':
            s.discard(int(n))
        elif action == 'check':
            if int(n) in s:
                print(1)
            else:
                print(0)
        elif action == 'toggle':
            if int(n) in s:
                s.discard(int(n))
            else:
                s.add(int(n))