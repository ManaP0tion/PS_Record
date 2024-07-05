def is_prime(num):
    if(num == 1):
        return True
    for i in range(2, num):
        if(num % i == 0):
            return False
    return True

n = input()
sum = 0
for i in range(len(n)):
    if n[i] >= 'A' and n[i] <='Z':
        sum += ord(n[i]) - ord('A') +27
    else:
        sum+= ord(n[i]) - ord('a')+1

if is_prime(sum):
    print("It is a prime word.")
else:
    print("It is not a prime word.")


    
