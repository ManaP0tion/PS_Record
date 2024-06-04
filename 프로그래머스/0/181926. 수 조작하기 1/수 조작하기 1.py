def solution(n, control):
    a = n
    size = len(control)
    for i in range(size):
        c = control[i]
        if c == 'w':
            a += 1
        elif c == 's':
            a -= 1
        elif c == 'd':
            a += 10
        elif c == 'a':
            a -= 10
    return a