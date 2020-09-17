// import package.pixel;


public class MainApp {
    public static void main(String[] args) {
        Image im = new Image(1000, 1000);
        // im.print();
        im.changeEveryPixels(10000);
        // im.print();
    }
}

/*

************** Tp1 **************

2.1 :
    Je remarque que plus on augmente les boucles,
    plus java est rapide. Exemple, pour une image
    de 1000x1000 en modifiant 10 000 fois, 36s pour
    java contre 1m6 pour c++


 */