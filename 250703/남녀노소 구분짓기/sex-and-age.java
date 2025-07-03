import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int sex = sc.nextInt();
        int n = sc.nextInt();

        if(sex==0){
            if(n>=19)
                System.out.print("MAN");
            else
                System.out.print("BOY");
        }
        else{
            if(n>=19)
                System.out.print("WOMAN");
            else
                System.out.print("GIRL");
        }
    }
}