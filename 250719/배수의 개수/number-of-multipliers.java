import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr = new int[10];
        int total_3 =0;
        int total_5 = 0;

        for( int i =0; i<10; i++){
            arr[i] = sc.nextInt();
        }

        for(int i = 0; i<10; i++){
            if( arr[i]%3==0)
                total_3++;
            if(arr[i]%5==0)
                total_5++;
        }
        System.out.print(total_3+" "+total_5);
    }
}