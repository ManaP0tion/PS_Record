import java.util.*;
public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner((System.in));
        int n = input.nextInt();
        int a, b;
        for(int i=0; i<n; i++){
            a = input.nextInt();
            b= input.nextInt();
            System.out.println(getLCM(a,b) + " " + getGCD(a, b));
        }
    }

    public static int getGCD(int a, int b){
        if(a % b == 0){
            return b;
        }
        return getGCD(b, a%b);
    }

    public static int getLCM(int a, int b){
        return a*b/getGCD(a, b);
    }
}
