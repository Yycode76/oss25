import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char[] arr_10 = new char [10];

        for(int i = 0; i<10; i++){
                arr_10[i] = sc.next().charAt(0);
        }
        for(int i = 9; i>=0; i--){
            System.out.print(arr_10[i]);
        }
    }
}