/*
 * Proyecto Gestión de videos
 * Grezia Trujillo
 * A01713876
 * 12/06/2025
 * 
 */

/*
 * Aquí se definen las funciones creadas en la clase padre Video y 
 * sus clases hija de Pelicula y Serie.
 * Tambien se define la clase Catalogue para almacenar
 *
 */

#include "Video.h"

//definimos las funciones de clase video
Video::Video(int id, int dur, string name, string gen, float calif)
    : ID(id), duracion(dur), nombre(name), genero(gen), calificacion(calif) {}

//getters definidos
string Video::getNombre() {
    return nombre;
}

string Video::getGenero() {
    return genero;
}

float Video::getCalificacion() {
    return calificacion;
}

int Video::getID() {
    return ID;
}

int Video::getDuracion() {
    return duracion;
}

//setters definidos
void Video::setNombre(string name) {
    nombre = name;
}

void Video::setGenero(string gen) {
    genero = gen;
}

void Video::setCalificacion(float calif) {
    calificacion = calif;
}

void Video::setID(int id) {
    ID = id;
}

void Video::setDuracion(int dur) {
    duracion = dur;
}

//definimos la funcion para poder mostrar la informacion al usuario
void Video::mostrarTituloYCalificacion() {
    cout << "Titulo: " << getNombre()
         << " |Tipo: " << getTipo()
         << " |Genero: " << getGenero()
         << " |Calificacion: " << getCalificacion() << endl << endl;
}

//definiciones de funciones de clase hija pelicula
//definicion de constructor
Pelicula::Pelicula(int id, int dur, string name, string gen, float calif)
    : Video(id, dur, name, gen, calif) {}

//definicion de sobre escritura de getTipo
//el tipo de video se asigna como pelicula
string Pelicula::getTipo() {
    return "Pelicula";
}

//definiciones de funciones de clase hija serie
//constructor de serie empezando con cero episodios
Serie::Serie(int id, int dur, string name, string gen, float calif)
    : Video(id, dur, name, gen, calif) {
    numEpisodios = 0;
}

//sobre escritura donde el tipo de video asignado es Serie
string Serie::getTipo() {
    return "Serie";
}

//se agrega un episodio nuevo a la serie creada creando un objeto Episodio
void Serie::agregarEpisodio(Episodio* ep) {
    if (numEpisodios < 20) {
        episodios[numEpisodios++] = ep;
    } else { //tener en cuenta que la serie tenga menos de 20 episodios
        cout << "No se pueden agregar más episodios" << endl;
    }
}

//sobrecarga(overload)
//agregar episodios directamente usando new para poder usar apuntadores mientras la serie tenga menos de 20 episodios
void Serie::agregarEpisodio(string titulo, int temporada, int episodeNumber, float calif) {
    if (numEpisodios < 20) {
        episodios[numEpisodios++] = new Episodio(titulo, temporada, episodeNumber, calif);
    }
}

//definicion de funcion que muestra informacion de cada episodio mientras se recorre el arreglo de episodios
void Serie::mostrarEpisodios() {
    for (int i = 0; i < numEpisodios; i++) {
        episodios[i]->mostrarInfo();
    }
}

//se definen las funciones de la clase Catalogue
    //constructor para crear un objeto catalogo
//se empiezan con 0 peliculas y series 
Catalogue::Catalogue() : numPeliculas(0), numSeries(0) {
        }

//mientras hay menos de 100 peliculas, se puede agregar una nueva pelicula al catalogo
 void Catalogue::agregarPelicula(Pelicula* peli) {
            if (numPeliculas < 100) {
                peliculas[numPeliculas] = peli;
                numPeliculas++;
            } else {
                cout << "No se pueden agregar mas peliculas" << endl;
            }
        }

 //mientras hay menos de 100 series, se puede agregar una nueva serie al catalogo
void Catalogue::agregarSerie(Serie* serie) {
    if (numSeries < 100) {
        series[numSeries] = serie;
        numSeries++;
    } else {
        cout << "No se pueden agregar mas series" << endl;
    }
}

//mostramos las peliculas almcenadas con la funcion definida previamente mientras se recorre el arreglo
void Catalogue::mostrarPeliculas() {
    cout << "Movies:" << endl;
    for (int i = 0; i < numPeliculas; i++) {
        peliculas[i]->mostrarTituloYCalificacion();
    }
}

//mostramos las series almacenadas con la funcion definida previamente mientras se recorre el arreglo
void Catalogue::mostrarSeries() {
    cout << "Series:" << endl;
    for (int i = 0; i < numSeries; i++) {
        series[i]->mostrarTituloYCalificacion();
    }
}


