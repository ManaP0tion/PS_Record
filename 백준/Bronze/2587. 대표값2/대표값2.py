n_list =[]
for i in range (5):
    n_list.append(int(input()))
n_list.sort()

print(int(sum(n_list) / 5))
print(n_list[2])