import java.io.*;
import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int number = 666;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int cnt = 1;

        while(cnt != n) {
            number++;
            if (String.valueOf(number).contains("666")) {
                cnt++;
            }
        }
        System.out.println(number);
    }
}


