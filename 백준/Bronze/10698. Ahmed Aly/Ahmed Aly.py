for i in range(int(input())):
    li = input().split()
    ans = "NO"

    if (li[1] == '+' and int(li[0]) + int(li[2]) == int(li[4])):
        ans = "YES"
    if (li[1] == '-' and int(li[0]) - int(li[2]) == int(li[4])):
        ans = "YES"
    print(f"Case {i+1}: {ans}")