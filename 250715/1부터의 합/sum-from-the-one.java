import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int sum = 0;

        for(int i=1; i<=100; i++){
            sum += i;
            if (sum >= n) {
                System.out.println(i);  // 이 수가 N 이상이 되게 만든 수
                break;
        }
        
    }
}
}