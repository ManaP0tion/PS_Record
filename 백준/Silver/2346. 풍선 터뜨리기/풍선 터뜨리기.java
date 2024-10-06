import java.util.*;
import java.io.*;
public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        Deque<Ballon> dq = new ArrayDeque<>();

        int n = Integer.parseInt(br.readLine()); // 풍선의 갯수
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        for(int i = 1; i<=n; i++){
            dq.add(new Ballon(i, Integer.parseInt(st.nextToken())));
        }


        while(!dq.isEmpty()){
            sb.append(dq.getFirst().idx + " ");
            int next = dq.remove().num;

            if(dq.isEmpty())
                break;


            if(next>0){
                for(int i=0; i<next-1; i++){
                    dq.addLast(dq.removeFirst());
                }
            }
            else{
                for(int i=0;i< Math.abs(next); i++){
                    dq.addFirst(dq.removeLast());
                }
            }
        }
        System.out.println(sb);
    }
}

class Ballon{
    int idx;
    int num;

    public Ballon(int idx, int num){
        this.idx = idx;
        this.num = num;
    }
}
