/*
 *
 * Proyecto Tipo de video
 * clase Episodio con sus funciones definidas
 * importante tener antes de clase serie para que clase serie pueda usar la informacion inicializada aqui
 * Grezia Trujillo
 * A01713876
 * 12/06/2025
 * 
 */

#include <iostream>
#include "episodio.h"
using namespace std;

//constructor definido
Episodio::Episodio(string title, int temp, int epNum, float calif)
    : titulo(title), temporada(temp), episodeNumber(epNum), calificacion(calif) {}

//getters definidos
string Episodio::getTitulo() {
    return titulo;
}

int Episodio::getTemporada() {
    return temporada;
}

int Episodio::getEpisodeNumber() {
    return episodeNumber;
}

float Episodio::getCalificacion() {
    return calificacion;
}

//setters definidos
void Episodio::setCalificacion(float calif) {
    calificacion = calif;
}

void Episodio::setTemporada(int temp) {
    temporada = temp;
}

void Episodio::setTitulo(string title) {
    titulo = title;
}

void Episodio::setEpisodeNumber(int epiNum) {
    episodeNumber = epiNum;
}

//funcion para demostrar informacion de episodio definida
void Episodio::mostrarInfo() {
    cout << "Nombre episodio: " << getTitulo()
         << " |Temporada: " << getTemporada()
         << " |Episodio " << getEpisodeNumber()
         << " |Calificacion: " << getCalificacion() << endl << endl;
}
