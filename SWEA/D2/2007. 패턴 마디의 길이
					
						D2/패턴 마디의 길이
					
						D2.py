T = int(input())

for testcase in range(1, T+1):
    s = input()

    for i in range(1, 30):
        if s[:i] == s[i:i*2]:
            print(f"#{testcase} {i}")
            break