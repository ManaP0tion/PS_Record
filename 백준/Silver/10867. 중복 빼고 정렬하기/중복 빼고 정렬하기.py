import sys

n = sys.stdin.readline()

numbers = set(map(int, sys.stdin.readline().split()))
sorted_numbers = sorted(numbers)

print(*sorted_numbers)