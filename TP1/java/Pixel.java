public class Pixel {
    private int r, g, b;

    public Pixel() {
        this.r = 0;
        this.g = 0;
        this.b = 0;
        // System.out.println("classe pixel declaree!");
    }

    public int getR() {
        return this.r;
    }

    public int getG() {
        return this.g;
    }

    public int getB() {
        return this.b;
    }

    public void set(int r, int g, int b) {
        this.r = r;
        this.g = g;
        this.b = b;
    }
}