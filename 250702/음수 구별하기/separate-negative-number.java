import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        //입력
        int n = sc.nextInt();

        //출력
        System.out.println(n);
        //음수인지 판단
        if ( n < 0){
            System.out.println("minus");
        }

    }
}