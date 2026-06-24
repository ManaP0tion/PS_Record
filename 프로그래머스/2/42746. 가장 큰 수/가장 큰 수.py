def solution(numbers):
    answer = ''
    numbers = list(map(str, numbers))
    
    def sort_key(x):
        return x*3
    
    numbers.sort(key = sort_key, reverse=True )
    
    for i in numbers:
        answer += i
        
    if answer[0] == '0':
        return '0'
        
    return answer