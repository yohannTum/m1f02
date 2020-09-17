public class Image {
    int LARGEUR;
    int HAUTEUR;
    int TAILLE;
    Pixel[] image;

    public Image(int L, int H) {
        this.LARGEUR = L;
        this.HAUTEUR = H;
        this.TAILLE = L*H;
        this.image = new Pixel [this.TAILLE];
        
        for (int i=0 ; i<this.TAILLE ; i++) {
            this.image[i] = new Pixel();
        }
    }

    public Pixel get(int x, int y) {
        return this.image[x*this.LARGEUR + y];
    }

    public void set(int x, int y, int r, int g, int b) {
        this.get(x, y).set(r, g, b);
    }

    public void print() {
        for (int i=0 ; i<this.TAILLE ; i++) {
            if (i%this.LARGEUR == 0) {
                System.out.println();
            }
            System.out.print(this.image[i].getR() + " ");
        }
        System.out.println();
    }

    public void changeEveryPixels(int nb_times) {
        for (int j=0 ; j<nb_times ; j++)
            for (int i=0 ; i<this.TAILLE ; i++) {
                this.image[i].set(i, 0, 0);
            }
    }

}