#include <iostream> 

#include "Video.h"

using namespace std;

//proximamente tendremos pruebas 

 int main() {
    Pelicula p1(1, 114, "Bumblebee", "Action", 4.7);
    p1.mostrarTituloYCalificacion();

    p1.setCalificacion(5);
    p1.mostrarTituloYCalificacion();

    //prueba con apuntadores
    Video *p2 =  new Pelicula(4, 85, "Avatar", "Animation", 2.2);
    p2->mostrarTituloYCalificacion();
    p2->setNombre("Lilo and Stitch");
    p2->mostrarTituloYCalificacion();

    //puedes seguir agregando episodios a la serie 1 (s1) hasta llegar a 20
    Serie *s1 = new Serie(2, 25, "She-Ra and the Princesses of Power", "Action", 4.5);

    s1-> agregarEpisodio("Corridors", 5, 3, 3.4); //agrega directamente

    Episodio* e1 = new Episodio("Stranded", 5, 4, 4.0); //agrega con un objeto episodio
    s1->agregarEpisodio(e1); //agrega el objeto episodio a la serie

    s1 ->mostrarTituloYCalificacion();
    s1-> mostrarEpisodios(); //muestra los episodios de la serie

    //puedes crear un objeto sin entrada de datos
    //aqui tenes el espacio para despues agregar informacion ya sea con setters o constructor
    Video *v1 = new Video();
    v1->mostrarTituloYCalificacion();
    Pelicula *p5;
    p5->setNombre("Transformers One");
    p5->mostrarTituloYCalificacion(); 
    //nos damos cuenta que el tipo de video se llena por default ya que el metodo getTipo() esta definido dependiendo de que clase se crea el nuevo objeto


    return 0;
 }
