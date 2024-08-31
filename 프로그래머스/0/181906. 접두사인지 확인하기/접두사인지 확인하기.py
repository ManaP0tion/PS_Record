def solution(my_string, is_prefix):
    answer = 0
    size = len(is_prefix)
    if(my_string[:size] == is_prefix):
        answer = 1
    
    
    
    return answer