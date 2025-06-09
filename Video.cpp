#include "Video.h"

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

//setter definidos
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

//definiciones de clase hija pelicula
//definicion de constructor
Pelicula::Pelicula(int id, int dur, string name, string gen, float calif)
    : Video(id, dur, name, gen, calif) {}

//definicion de sobre escritura de getTipo
string Pelicula::getTipo() {
    return "Pelicula";
}

//definiciones de funciones de clase hija serie
Serie::Serie(int id, int dur, string name, string gen, float calif)
    : Video(id, dur, name, gen, calif) {
    numEpisodios = 0;
}

string Serie::getTipo() {
    return "Serie";
}

void Serie::agregarEpisodio(Episodio* ep) {
    if (numEpisodios < 20) {
        episodios[numEpisodios++] = ep;
    } else {
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

//definicion de funcion que muestra informacion de cada episodio
void Serie::mostrarEpisodios() {
    for (int i = 0; i < numEpisodios; i++) {
        episodios[i]->mostrarInfo();
    }
}
