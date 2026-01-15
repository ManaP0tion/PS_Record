n = int(input())
mod = 1000000
p = mod // 10*15
fibo = [0, 1]

for i in range(2, p):
    fibo.append(fibo[i-2]+fibo[i-1])
    fibo[i] %= mod
print(fibo[n%p])

# 파사노 주기를 이용해서 O(N)으로 풀이
# 주기의 길이가 P 일 때, N번째 피보나치 수를 M으로 나눈 나머지는 N%P번째 피보나치 수를 M을 나눈 나머지와 같음