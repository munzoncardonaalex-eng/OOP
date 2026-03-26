import java.util.ArrayList;

public class MainArrayList {
    public static void main(String[] args) {
        ArrayList<Integer> datos = new ArrayList<Integer>();

        datos.add(10);
        datos.add(20);
        datos.add(30);

        System.out.println("Tamano = " + datos.size());

        for (int i = 0; i < datos.size(); i++) {
            System.out.print(datos.get(i) + " ");
        }
    System.out.println();
    }
}