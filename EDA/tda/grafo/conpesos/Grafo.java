package tda.grafo.conpesos;

public class Grafo {

    private Vertice vertice;
    private Lista lista;
    private Grafo subGrafo;

    public Grafo(Vertice vertice, Lista lista, Grafo subGrafo) {
        this.vertice = vertice;
        this.lista = lista;
        this.subGrafo = subGrafo;
    }

    public Grafo() {
        this.vertice = null;
        this.lista = null;
        this.subGrafo = null;
    }

    public Vertice getVertice() {
        return vertice;
    }

    public void setVertice(Vertice vertice) {
        this.vertice = vertice;
    }

    public Lista getLista() {
        return lista;
    }

    public void setLista(Lista lista) {
        this.lista = lista;
    }

    public Grafo getSubGrafo() {
        return subGrafo;
    }

    public void setSubGrafo(Grafo subGrafo) {
        this.subGrafo = subGrafo;
    }

    public boolean estaVacio() {
        return this.vertice == null;
    }

    public boolean existeVertice(Vertice pVertice) {
        if (estaVacio() || pVertice == null) {
            return false;
        } else {
            if (pVertice.equals(this.vertice)) {
                return true;
            } else {
                return this.subGrafo.existeVertice(pVertice);
            }
        }
    }

    public void agregarVertice(Vertice pVertice) {
        if (pVertice != null && !existeVertice(pVertice)) {
            if (!estaVacio()) {
                if (pVertice.getNombre().compareTo(this.vertice.getNombre()) < 0) {
                    Grafo aux = new Grafo(this.vertice, this.lista, this.subGrafo);
                    this.vertice = pVertice;
                    this.subGrafo = aux;
                } else {
                    this.subGrafo.agregarVertice(pVertice);
                }
            } else {
                this.vertice = pVertice;
                this.lista = new Lista();
                this.subGrafo = new Grafo();
            }
        }
    }

    public void eliminarVertice(Vertice pVertice) {
        if (existeVertice(pVertice)) {
            Grafo gAux = this.subGrafo;
            Vertice vAux = this.vertice;
            while (gAux != null) {
                eliminar(vAux, pVertice);
                vAux = gAux.vertice;
                gAux = gAux.subGrafo;
            }
            if (this.vertice.equals(pVertice)) {
                this.vertice = this.subGrafo.vertice;
                this.lista = this.subGrafo.lista;
                this.subGrafo = this.subGrafo.getSubGrafo();
            } else {
                this.subGrafo.eliminarVertice(vertice);
            }
        }
    }

    public void agregarArco(Vertice verticeOrigen, Vertice verticeDestino, int distancia) {
        if (existeVertice(verticeOrigen) && existeVertice(verticeDestino)) {
            agregar(verticeOrigen, verticeDestino, distancia);
        } else {
            System.out.println("Error...No se agrego arco");
        }
    }

    public void agregar(Vertice verticeOrigen, Vertice verticeDestino, int distancia) {
        // Ubicarse en el vertice 
        if (existeVertice(verticeOrigen)) {
            if (this.vertice.equals(verticeOrigen)) {
                if (this.lista.ubicacion(verticeDestino) == 0) {
                    this.lista.insertar(verticeDestino, this.lista.longitud() + 1, distancia);
                }
            } else {
                if (this.subGrafo != null) {
                    this.subGrafo.agregar(verticeOrigen, verticeDestino, distancia);
                }
            }
        }
    }

    public void eliminarArco(Vertice verticeOrigen, Vertice verticeDestino) {
        if (existeVertice(verticeOrigen) && existeVertice(verticeDestino)) {
            eliminar(verticeOrigen, verticeDestino);
        } else {
            System.out.println("Error...No se elimino arco");
        }
    }

    public void eliminar(Vertice verticeOrigen, Vertice verticeDestino) {
        // Ubicarse en el vertice 
        if (existeVertice(verticeOrigen)) {
            if (this.vertice.equals(verticeOrigen)) {
                int pos = this.lista.ubicacion(verticeDestino);
                if (pos > 0) {
                    this.lista.eliminar(pos);
                }
            } else {
                if (this.subGrafo != null) {
                    this.subGrafo.eliminar(verticeOrigen, verticeDestino);
                }
            }
        }
    }

    public void mostrarGrafo() {
        if (!estaVacio()) {
            System.out.print("Vertice: " + vertice);
            System.out.print(" Arcos a: [");
            for (int i = 1; i <= this.lista.longitud(); i++) {
                System.out.print(this.lista.iesimo(i) + " Peso: (");
                System.out.print(this.lista.iesimoPeso(i) + ") " + "\t");
            }
            System.out.print("]");
            System.out.println();
            this.subGrafo.mostrarGrafo();
        }
    }

    public Vertice siguienteNoVisitado() {
        if (!vertice.isVisitado()) {
            return vertice;
        } else {
            if (subGrafo != null) {
                return subGrafo.siguienteNoVisitado();
            }
            return null;
        }
    }

    // Recorrido en profundidad
    public void DFS(Vertice v) {
        marcarDFS(v);
        Vertice w = siguienteNoVisitado();
        if (w!=null && !w.isVisitado()){
            marcarDFS(w);
        }
    }

    public void marcarDFS(Vertice v) {
        if (v != null && !estaVacio()) {
            System.out.print(v.getNombre() + "\t");
            v.setVisitado(true);
            Lista listaAdyacentes = this.adyacentes(v);
            if (listaAdyacentes != null) {
                for (int i = 1; i <= listaAdyacentes.longitud(); i++) {
                    Vertice w = listaAdyacentes.iesimo(i);
                    if (!w.isVisitado()) {
                        marcarDFS(w);
                    }
                }
            }
        }
    }

    public Lista adyacentes(Vertice v) {
        if (existeVertice(v)) {
            if (v.getNombre().equals(vertice.getNombre())) {
                return lista;
            } else {
                return subGrafo.adyacentes(v);
            }
        } else {
            return null;
        }
    }

    // Numero de vertices
    public int numVertices() {
        if (estaVacio()) {
            return 0;
        } else {
            return 1 + this.subGrafo.numVertices();
        }
    }

    public void DFSPila(Vertice v) {
        Pila pila = new Pila();
        pila.apilar(v);
        System.out.print(v.getNombre() + "\t");
        v.setVisitado(true);
        while (!pila.esVacia()) {
            Lista listaAdyacentes = adyacentes((Vertice) pila.getCima());
            for (int i = 1; i <= listaAdyacentes.longitud(); i++) {
                if (!listaAdyacentes.iesimo(i).isVisitado()) {
                    DFSPila(listaAdyacentes.iesimo(i));
                } else {
                    Vertice w = (Vertice) pila.desapilar();
                }
            }
        }
    }

    public void marcarNoVisitados() {
        if (!estaVacio()) {
            vertice.setVisitado(false);
            if (subGrafo != null) {
                subGrafo.marcarNoVisitados();
            }
        }
    }

    public void BFS(Vertice v) {
        Cola Q = new Cola();
        Q.encolar(v);
        System.out.print(v.getNombre() + "\t");
        v.setVisitado(true);
        while (!Q.esVacia()) {
            v = (Vertice) Q.desencolar();
            Lista listaAdyacentes = adyacentes(v);
            for (int i = 1; i <= listaAdyacentes.longitud(); i++) {
                Vertice w = listaAdyacentes.iesimo(i);
                if (!w.isVisitado()) {
                    System.out.print(w.getNombre() + "\t");
                    w.setVisitado(true);
                    Q.encolar(w);
                }
            }
        }
    }
}
