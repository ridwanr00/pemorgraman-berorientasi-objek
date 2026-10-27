public class Servis0037 {
    private String jenisServis;
    private double biayaServis;
    private double biayaPart;

    public Servis0037(String jenisServis, double biayaServis, double biayaPart) {
        this.jenisServis = jenisServis;
        setBiayaServis(biayaServis);
        setBiayaPart(biayaPart);
    }

    public String getJenisServis() {
        return jenisServis;
    }

    public void setJenisServis(String jenisServis) {
        this.jenisServis = jenisServis;
    }

    public double getBiayaServis() {
        return biayaServis;
    }

    public void setBiayaServis(double biayaServis) {
        if (biayaServis < 0) {
            System.out.println("Peringatan: Biaya servis tidak boleh negatif! nilai diset ke 0");
            this.biayaServis = 0;
        } else {
            this.biayaServis = biayaServis;
        }
    }

    public double getBiayaPart() {
        return biayaPart;
    }

    public void setBiayaPart(double biayaPart) {
        if (biayaPart < 0) {
            System.out.println("Peringatan: Biaya part tidak boleh negatif! Nilai diset ke 0");
            this.biayaPart = 0;
        } else {
            this.biayaPart = biayaPart;
        }
    }

    public double hitungTotalBiaya() {
        return this.biayaServis + this.biayaPart;
    }
}
