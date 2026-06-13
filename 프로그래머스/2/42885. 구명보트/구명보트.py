def solution(people, limit):
    left = 0
    right = len(people) - 1
    ans = 0
    
    # 일단 한번에 최대 2명씩 밖에 탈 수 없다는 점
    # 무게제한도 존재
    # 가장먼저 몸무게를 정렬해야하지 않을까?
    # 가장무거운사람과 가장 가벼운 사람을 같이 태울수있는지 체크하는게 핵심일듯
    people.sort()
    
    while left <= right:
        if people[left] + people[right] <= limit:
            left += 1
        
        right -= 1
        ans += 1
    
    return ans
    
    
    