import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner console = new Scanner(System.in);
        
        int numberOfInput = console.nextInt();
        int [] array = new int[numberOfInput];
        int numberOfTarget = 0;
        
        for(int i = 0; i<numberOfInput; i++){
            array[i] =console.nextInt();
        }
        
        int target = console.nextInt();
        for(int i = 0; i<numberOfInput; i++){
            if(array[i] == target)
                numberOfTarget++;
        }
        
        System.out.println(numberOfTarget);
    }
}
