n = int(input())
cnt = 0

for i in range(0, n):
    temp = input()
    temp.split(',')
    print(int(temp[0]) + int(temp[2]))