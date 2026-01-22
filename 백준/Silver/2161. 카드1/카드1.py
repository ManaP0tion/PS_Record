import sys
from collections import deque
input = sys.stdin.readline

N = int(input())
res = []
cards = deque(list(range(1, N+1)))

while cards:
    card = cards.popleft()
    res.append(card)
    if cards:
        card = cards.popleft()
        cards.append(card)

print(*res)


