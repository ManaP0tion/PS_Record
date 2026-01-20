n, m = map(int, input().split())
board = []
result = []

for _ in range(n):
    board.append(input())
    
for i in range(n-7):
    for j in range(m-7):
        c1 = 0
        c2 = 0
        
        for a in range(i, i+8):
            for b in range(j, j+8):
                if (a+b) % 2 == 0:
                    if board[a][b] != 'B':
                        c1 += 1
                    if board[a][b] != 'W':
                        c2 += 1
                else:
                    if board[a][b] != 'W':
                        c1 += 1
                    if board[a][b] != 'B':
                        c2 += 1
        result.append(c1)
        result.append(c2)
        
print(min(result))