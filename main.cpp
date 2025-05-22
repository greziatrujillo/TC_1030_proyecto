#include <iostream> 

#include "Video.h"

using namespace std;

//proximamente tendremos pruebas

 int main() {
    //prueba con tipo video pelicula
    Pelicula p1(1, 120, "Inception", "Sci-Fi", 4.8);
    p1.mostrarTituloYCalificacion();

    //prueba con tipo video serie
    Serie s1(2, 25, "She-Ra and the Princesses of Power", "Action", 4.5);
    s1.mostrarTituloYCalificacion();

    //puedes seguir agregando episodios a la serie 1 (s1) hasta llegar a 20
    Episodio e1("Stranded", 5, 3.5); 
    s1.agregarEpisodio(e1);
    e1.mostrarInfo(); 

    Pelicula p2(3, 114, "Bumblebee", "Action", 4.7);
    p2.mostrarTituloYCalificacion();

    return 0;
 }
