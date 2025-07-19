import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

         int a = sc.nextInt();
         int b = sc.nextInt();
         int i = a;

        while(true){
            
            System.out.print(i+" ");
            

            if(i%2!=0)
                i *= 2;
            else if(i%2==0)
                i += 3;
            if(i>b)
                break;
        }

    }
}