import java.util.Scanner;

public class input_output {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int panjang, lebar;

        System.out.print("Masukkan Nilai Panjang : ");
        panjang = input.nextInt();

        System.out.print("Masukkan Nilai Lebar : ");
        lebar = input.nextInt();

        int luas = panjang*lebar;
        int keliling = 2*(panjang+lebar);

        System.out.println("Luas Persegi Panjang : " + luas + " cm");
        System.out.println("Keliling Persegi Panjang : " + keliling + " cm");
    }
}
