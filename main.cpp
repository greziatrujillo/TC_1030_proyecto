/*
 *
 * Proyecto Gestión de videos
 * Grezia Trujillo
 * A01713876
 * 12/06/2025
 * 
 * seguimos con las pruebas para crear un programa para capturar tipos de videos, peliculas y series,
 * con sus atributos respectivos. Se almacenan estos datos para que el usuario pueda ver todo
 * dependiendo de su seleccion en el menu.
 */

#include <iostream> 
#include <string>
#include "Video.h"
#include "episodio.h"

using namespace std;

//creamos las funciones para el menu para que el usuario pueda ver las opciones de desplegar peliculas o series, o agregar nuevos videos

 //empezamos con la funcion de poder mostrar el menu con sus opciones al usuario
 //podemos ver peliculas, series, los episodios de dicha serie, o agregar cualquiera
 void mostrarMenu() {
    cout << "Menu de Videos" << endl;
    cout << "1. Movie" << endl;
    cout << "2. Series" << endl;
    cout << "3. Series Episodes" << endl;
    cout << "4. Add movies" << endl;
    cout << "5. Add series" << endl;
    cout << "6. Exit" << endl;
    cout << "Please choose option: ";
 }

 //funcion de instrucciones para el usuario
 void instructions() {
    cout << "Instructions:" << endl;
    cout << "Type the respective number for the option." << endl;
    cout << "If needed, please type information required (4 and 5)." << endl;
 }

//proximamente tendremos pruebas
 int main() {
    //creamos un catalogo
    Catalogue catalogo;

    //pruebas con objetos directos
    Pelicula p1(1, 114, "Bumblebee", "Action", 4.7);
    p1.setCalificacion(5); //ejemplo de cambiar caracteristica despues de crear objeto
    catalogo.agregarPelicula(&p1); //agregar pelicula al catalogo

    //pruebas con apuntadores
    Pelicula *p2 =  new Pelicula(4, 85, "Avatar", "Animation", 2.2); //creamos un objeto pelicula con apuntador
    p2->setNombre("Lilo and Stitch"); //modificar despues de crear objeto usando apuntador
    catalogo.agregarPelicula(p2);

    Serie *s1 = new Serie(2, 25, "She-Ra and the Princesses of Power", "Action", 4.5); // creamos un objeto serie con apuntador
    s1->agregarEpisodio("Corridors", 5, 3, 3.4); //agrega episodio directamente
    Episodio* e1 = new Episodio("Stranded", 5, 4, 4.0); //agrega con un objeto episodio
    s1->agregarEpisodio(e1); //agrega objeto episodio a serie
    catalogo.agregarSerie(s1); //agrega serie al catalogo

    //creamos mas datos para cada categoria de video
    Pelicula *p3 = new Pelicula(55, 104, "Transformers One", "Action", 4.8);
    Pelicula *p4 = new Pelicula(24, 104, "The Lion King", "Animation", 4.9);
    Serie *s2 = new Serie(13, 10, "Over the Garden Wall", "Animation", 4.6);
    s2->agregarEpisodio("The Old Grist Mill", 1, 1, 4.5);
    s2->agregarEpisodio("Hard time at the Huskin Bee", 1, 2, 4.8);    
    s2->agregarEpisodio("Schooltown Follies", 1, 3, 2.3); 
    s2->agregarEpisodio("Songs of the Dark Lantern", 1, 4, 3.9);
    s2->agregarEpisodio("Mad Love", 1, 5, 1.0); 
    s2->agregarEpisodio("Lullaby in Frogland", 1, 6, 4.1);
    s2->agregarEpisodio("The Ringing of the Bell", 1, 7, 4.2);
    s2->agregarEpisodio("Babes in the Wood", 1, 8, 4.3);
    s2->agregarEpisodio("Into the Unknown", 1, 9, 4.4);
    s2->agregarEpisodio("The Unknown", 1, 10, 4.5);

    catalogo.agregarPelicula(p3); 
    catalogo.agregarPelicula(p4);
    catalogo.agregarSerie(s2); 

    //imprime instrucciones al usuario
    instructions(); 

    //creamos el ciclo para el menu mientras el usuario no salga
    int option;
    bool exit = false;

    while (!exit){

        mostrarMenu(); //imprimir menu
        cin >> option; //guardar opcion seleccionada

        //dependiendo de la opcion, diferentes operaciones se realizan
        //opcion 1 despliega peliculas
        if (option == 1) {
            cout << "Movies:" << endl;
            catalogo.mostrarPeliculas(); 
        }

        //opcion 2 despliega series
        else if (option == 2) {
            cout << "Series:" << endl;
            catalogo.mostrarSeries();
        }

        //opcion 3 despliega episodios de una serie 
        else if (option == 3) {
            cout << "Series episodes '" << s1->getNombre() << "':" << endl << endl;
            s1->mostrarEpisodios();
            cout << "Series episodes '" << s2->getNombre() << "':" << endl;
            s2->mostrarEpisodios();
        }

        //opcion 4 para agregar peliculas
        else if (option == 4){
            //inicializamos las variables que vamos a usar
            int id, duracion;
            string nombre, genero;
            float calificacion;

            //usuario da entrada de datos
            cout << "Enter ID:" << endl;
            cin >> id;
            cout << "Enter duration:" << endl;
            cin >> duracion;
            cout << "Enter name:" << endl;
            cin >> nombre;
            cout << "Enter genre:" << endl;
            cin >> genero;
            cout << "Enter grade:" << endl;
            cin >> calificacion;

            //nueva pelicula se crea y se almacena en el catalogo
            Pelicula *newMovie = new Pelicula (id, duracion, nombre, genero, calificacion);
            catalogo.agregarPelicula(newMovie);
        }

        //opcion 5 para agregar series
        else if (option == 5){
            //inicializamos las variables que vamos a usar
            int id, duracion;
            string nombre, genero;
            float calificacion;

            //usuario da entrada de datos
            cout << "Enter ID:" << endl;
            cin >> id;
            cout << "Enter duration:" << endl;
            cin >> duracion;
            cout << "Enter name:" << endl;
            cin >> nombre;
            cout << "Enter genre:" << endl;
            cin >> genero;
            cout << "Enter grade:" << endl;
            cin >> calificacion;

            //nueva pelicula se crea y se almacena en el catalogo
            Serie *newSeries = new Serie (id, duracion, nombre, genero, calificacion);
            catalogo.agregarSerie(newSeries);
        }

        //opcion 6 para salir del menu
        else if (option == 6) {
            cout << "Goodbye and thank you." << endl;
            exit = true; //cambia el valor de exit a true para salir del ciclo
        }
  }

  return 0;

};
