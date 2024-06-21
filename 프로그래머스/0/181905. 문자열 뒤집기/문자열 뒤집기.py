def solution(my_string, s, e):
    f_str = my_string[:s]
    b_str = my_string[e+1:]
    m_str = my_string[s:e+1][::-1]
    ans = f_str+m_str+b_str
    return ans