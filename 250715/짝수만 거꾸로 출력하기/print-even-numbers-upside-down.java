import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr_n = new int [n];

        for(int i = 0; i<arr_n.length;i++){
            arr_n[i] = sc.nextInt();
        }
        for(int i = n-1; i>=0;i--){
            if(arr_n[i]%2==0)
            System.out.print(arr_n[i] + " ");
        }




    }
}