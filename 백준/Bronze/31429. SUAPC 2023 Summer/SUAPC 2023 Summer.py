def sol(n):
    answer = {1: [12, 1600]
              , 2: [11, 894]
              , 3: [11, 1327]
              , 4: [10, 1311]
              , 5: [9, 1004]
              , 6: [9, 1178]
              , 7: [9, 1357]
              , 8: [8, 837]
              , 9: [7, 1055]
              , 10: [6, 556]
              , 11: [6, 773]}
 
    return answer[n]
 
 
if __name__ == '__main__':
    n = int(input())
    print(*sol(n))
 