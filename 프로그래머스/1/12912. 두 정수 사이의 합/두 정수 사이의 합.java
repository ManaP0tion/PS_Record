class Solution {
    public long solution(int a, int b) {
        long answer = 0;
        long end = Math.max(a,b);
        long start = Math.min(a,b);
        
        if(start == end)    return start;
        for(long i = start; i<=end; i++){
            answer += i;
        }
        return answer;
    }
}