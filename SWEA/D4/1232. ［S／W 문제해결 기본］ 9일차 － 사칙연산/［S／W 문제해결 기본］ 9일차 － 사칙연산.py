T = 10

def postorder(node):
    if node:
        postorder(left[node])
        postorder(right[node])
        if tree[node] == '+':
            tree[node] = int(tree[left[node]]) + int(tree[right[node]])
        elif tree[node] == '-':
            tree[node] = int(tree[left[node]]) - int(tree[right[node]])
        elif tree[node] == '*':
            tree[node] = int(tree[left[node]]) * int(tree[right[node]])
        elif tree[node] == '/':
            tree[node] = int(tree[left[node]]) // int(tree[right[node]])
    return

for testcase in range(1, T+1):
    N = int(input())
    tree = [0] * (N+1)
    left = [0] * (N+1)
    right = [0] * (N+1)
    
    
    for _ in range(N):
        s = input().split()
        tree[int(s[0])] = s[1]
        
        if len(s) == 4:
            left[int(s[0])] = int(s[2])
            right[int(s[0])] = int(s[3])
            
    postorder(1)
    print(f"#{testcase} {tree[1]}")