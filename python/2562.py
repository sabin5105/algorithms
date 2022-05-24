from operator import index

arr = [int(input()) for i in range(9)]

MAX = max(arr)
INDEX = arr.index(MAX)

print(MAX)
print(INDEX+1)