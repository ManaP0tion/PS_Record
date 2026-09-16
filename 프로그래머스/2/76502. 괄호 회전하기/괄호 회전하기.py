from collections import deque

def solution(s):
    answer = 0
    n = len(s)
    queue = deque(s)
    
    for _ in range(n):
        
        # 괄호 체크
        stack = []
        flag = True
        
        for c in queue:
            if c in '([{':
                stack.append(c)
                
            else:
                if not stack:
                    flag = False
                    break
                    
                out = stack.pop()
                
                if c == ')' and out == '(':
                    pass
                
                elif c == ']' and out == '[':
                    pass
                
                elif c == '}' and out == '{':
                    pass
                else:
                    flag = False
                    break
                    
        if not stack and flag:
            answer += 1
                
        queue.rotate(-1)
            
    return answer