import java.io.*;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc1 = new Scanner(System.in);
        Scanner sc2 = new Scanner(System.in);

        int a = sc1.nextInt();
        int b = sc1.nextInt();

        if(a > b)
            System.out.println(">");
        else if(a== b) System.out.println("==");
        else System.out.println("<");
    }
}
