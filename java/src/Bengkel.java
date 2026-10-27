public class Bengkel {
    private String namaBengkel;

    public Bengkel(String namaBengkel) {
        this.namaBengkel = namaBengkel;
    }

    public String getNamaBengkel() {
        return namaBengkel;
    }

    public void setNamaBengkel(String namaBengkel) {
        this.namaBengkel = namaBengkel;
    }

    public void cetakNota(Servis0037 servis0037) {
        System.out.println("=== NOTA BENGKEL: " + this.namaBengkel + "===");
        System.out.println("Jenis Servis: " + servis0037.getJenisServis());
        System.out.println("Biaya Servis:" + servis0037.getBiayaServis());
        System.out.println("Biaya Part: " + servis0037.getBiayaPart());
        System.out.println("Biaya Tagihan: " + servis0037.hitungTotalBiaya());
        System.out.println("---------------------");
    }
}
