n = int(input())

for _ in range(n):
    arr = list(map(int, input().split()))
    AVR = sum(arr[1:])/arr[0]
    CNT = 0
    for j in arr[1:]:
        if j > AVR:
            CNT += 1
    print(f'{CNT/arr[0]*100:.3f}%')
