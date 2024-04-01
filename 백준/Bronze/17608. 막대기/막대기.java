import java.util.*;
public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        Stack<Integer> s = new Stack<>();
        for(int i = 0; i<n; i++){
            s.push(input.nextInt());
        }
        int ans = 0;
        int max = 0;
        for(int i=0; i<n; i++){
            if(max < s.peek()){
                ans++;
                max = s.peek();
            }
            s.pop();
        }
        System.out.println(ans);
    }
}
