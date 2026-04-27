arr = [int(input()) for _ in range(5)]
burger = min(arr[:3])
drink = min(arr[3:])
sets = burger + drink - 50
print(sets)