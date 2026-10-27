    // NIM: 1003260037
    // Domain: Bengkel
    // Nama Class Model: Servis0037
    // Class Pengelola: Bengkel
    // Nilai Dasar: 32
    // Atribut Numerik: 32 * 1000 = 32.000

public class Main {
    public static void main(String[] args) {
        Bengkel bengkel = new Bengkel("Bengkel Ridwan Rasyid");

        Servis0037 s1 = new Servis0037("Servis Ringan", 32000, 45000);

        Servis0037 s2 = new Servis0037("Servis Berat", 32000, 75000);

        bengkel.cetakNota(s1);
        bengkel.cetakNota(s2);

        System.out.println("Uji Validasi Setter:");
        s1.setBiayaPart(-10000);
        System.out.printf("Biaya servis s1 setelah validasi: Rp%,.2f\n", s1.getBiayaServis());
    }

}
