import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int tc = in.nextInt();
        while(tc>0){
            int a,b;
            a = in.nextInt();
            b= in.nextInt();

            int res = 1;

            for(int i = 0; i<b;i++){
                res = (res*a)%10;
            }

            if(res == 0) res = 10;

            System.out.println(res);

            tc--;
        }
    }
}
