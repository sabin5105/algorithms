n = int(input())
numbers = list(map(int, input().split()))

MAX = max(numbers)
new_numbers = []
for number in numbers:
    new_numbers.append(number/MAX*100)

print(sum(new_numbers)/n)

