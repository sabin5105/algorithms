import sys

if __name__ == '__main__':
    N = int(input())
    arr = list(map(int, sys.stdin.readline().split()))
    ans = 0
    min_lists = []
    if N == 1:
        arr.sort()
        for i in range(5):
            ans += arr[i]
    else:
        min_lists.append(min(arr[0], arr[5]))
        min_lists.append(min(arr[1], arr[4]))
        min_lists.append(min(arr[2], arr[3]))
        min_lists.sort()

        min1 = min_lists[0]
        min2 = min_lists[0] + min_lists[1]
        min3 = sum(min_lists)

        n1 = 4 * (N - 2) * (N - 1) + (N - 2) ** 2
        n2 = 4 * (N - 1) + 4 * (N - 2)
        n3 = 4

        ans += min1 * n1
        ans += min2 * n2
        ans += min3 * n3
    print(ans)