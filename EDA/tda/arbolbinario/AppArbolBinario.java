package tda.arbolbinario;

public class AppArbolBinario {

    public static void main(String[] args) {
        ArbolBinario arbol = new ArbolBinario();
        arbol.agregar("r");
        arbol.agregar("a");
        arbol.agregar("c");
        arbol.agregar("s");
        arbol.agregar("h");
        arbol.agregar("e");
        arbol.agregar("l");
        System.out.println();
        arbol.preOrden();
        ArbolBinario arbol1 = new ArbolBinario();
        arbol1.agregar(36);
        arbol1.agregar(81);
        arbol1.agregar(25);
        arbol1.agregar(35);
        arbol1.agregar(33);
        arbol1.agregar(74);
        arbol1.agregar(10);
        arbol1.agregar(90);
        System.out.println();
        arbol1.preOrden();
        System.out.println("Eliminar elementos...");
        arbol1.eliminar(14);
        arbol1.preOrden();

    }

}
