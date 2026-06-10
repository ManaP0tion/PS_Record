def solution(elements):
    check = set()
    n = len(elements)
    
    for i in range(1, 1+n):
        for _ in range(n):
            target = sum(elements[:i])
            if target not in check:
                check.add(target)
                
            elements.append(elements.pop(0))
    return len(check)