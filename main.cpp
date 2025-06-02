/*
 *
 * Proyecto Tipo de video
 * Grezia Trujillo
 * A01713876
 * 05/06/2025
 * 
 * seguimos con las pruebas para crear un programa para capturar tipos de videos, peliculas y series,
 * con sus atributos respectivos y el usuario poder ver la informacion del objeto creado
 */

#include <iostream> 
#include "Video.h"
#include "Episodio.h"

using namespace std;

int main() {
    Pelicula p1(1, 114, "Bumblebee", "Action", 4.7);
    p1.mostrarTituloYCalificacion();
    p1.setCalificacion(5);
    p1.mostrarTituloYCalificacion();

    //pruebas con apuntadores
    Video *p2 =  new Pelicula(4, 85, "Avatar", "Animation", 2.2);
    p2->mostrarTituloYCalificacion();
    p2->setNombre("Lilo and Stitch");
    p2->mostrarTituloYCalificacion();

    Serie *s1 = new Serie(2, 25, "She-Ra and the Princesses of Power", "Action", 4.5);
    s1-> agregarEpisodio("Corridors", 5, 3, 3.4); 
    Episodio* e1 = new Episodio("Stranded", 5, 4, 4.0); 
    s1->agregarEpisodio(e1);

    s1 ->mostrarTituloYCalificacion();
    s1-> mostrarEpisodios();

    return 0;
 }
