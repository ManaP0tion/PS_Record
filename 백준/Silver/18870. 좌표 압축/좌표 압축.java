import java.util.Scanner;
import java.util.Arrays;
import java.util.HashMap;
public class Main {

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] origin = new int[n];
        int[] sorted = new int[n];
        for(int i = 0; i<n; i++){
            origin[i] = sorted[i] = sc.nextInt();
        }

        HashMap<Integer, Integer> rankingMap = new HashMap<>();
        Arrays.sort(sorted);
        int rank = 0;

        for(int i : sorted){
            if(!rankingMap.containsKey(i)){
                rankingMap.put(i, rank);
                rank++;
            }
        }
        StringBuilder sb = new StringBuilder();
        for(int key : origin){
            int ranking = rankingMap.get(key);
            sb.append(ranking).append(" ");
        }

        System.out.println(sb);
    }
}
