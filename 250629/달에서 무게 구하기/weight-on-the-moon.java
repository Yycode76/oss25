public class Main {
    public static void main(String[] args) {
        int mass_weight = 13;
        double moon_gravity_rate = 0.165,result = mass_weight*moon_gravity_rate;

        System.out.printf("%d * %.6f = %.6f\n",mass_weight,moon_gravity_rate,result );
    }
}