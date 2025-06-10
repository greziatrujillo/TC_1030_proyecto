/*
 *
 * Proyecto Gestión de videos
 * Grezia Trujillo
 * A01713876
 * 12/06/2025
 * 
 * seguimos con las pruebas para crear un programa para capturar tipos de videos, peliculas y series,
 * con sus atributos respectivos y el usuario poder ver la informacion del objeto creado
 */

#include <iostream> 
#include "Video.h"
#include "episodio.h"

using namespace std;

//proximamente tendremos pruebas
 int main() {
    //pruebas con objetos directos
    Pelicula p1(1, 114, "Bumblebee", "Action", 4.7);
    p1.mostrarTituloYCalificacion();
    p1.setCalificacion(5); //ejemplo de cambiar caracteristica despues de crear objeto
    p1.mostrarTituloYCalificacion();

    //pruebas con apuntadores
    Video *p2 =  new Pelicula(4, 85, "Avatar", "Animation", 2.2); //creamos un objeto pelicula con apuntador
    p2->mostrarTituloYCalificacion();
    p2->setNombre("Lilo and Stitch"); //modificar despues de crear objeto usando apuntador
    p2->mostrarTituloYCalificacion();

    Serie *s1 = new Serie(2, 25, "She-Ra and the Princesses of Power", "Action", 4.5); // creamos un objeto serie con apuntador
    s1->agregarEpisodio("Corridors", 5, 3, 3.4); //agrega episodio directamente

    Episodio* e1 = new Episodio("Stranded", 5, 4, 4.0); //agrega con un objeto episodio
    s1->agregarEpisodio(e1); //agrega objeto episodio a serie

    s1->mostrarTituloYCalificacion();
    s1->mostrarEpisodios(); //muestra episodios de serie con su informacion

    return 0;
 }
