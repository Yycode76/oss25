import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int score = sc.nextInt();

        //80점 이상인지 판단
        if(score >= 80)
            System.out.println("pass");
        //아닌 경우 80점이 되기에 더 필요한 점수를 출력
        else
            System.out.println(80-score + " more score"); 
    }
}