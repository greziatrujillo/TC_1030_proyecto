/*
 *
 * Proyecto Tipo de video
 * clase Episodio para poder definir episodios y sus atributos
 * importante tener antes de clase serie para que clase serie pueda usar la informacion inicializada aqui
 * Grezia Trujillo
 * A01713876
 * 05/06/2025
 * 
 */

#ifndef EPISODIO_H
#define EPISODIO_H

#include <iostream>
#include "Video.h"
#include "Video.cpp"
#include "episodio.cpp"
using namespace std;

/* Esta clase sera usada por la clase serie para crear episodios de una serie y tener su informacion
* importante tener antes de clase serie para que clase serie pueda usar la informacion inicializada aqui 
*/
class Episodio {
    //variables de instancia
     private:
         int temporada;
         string titulo;
         float calificacion;
         int episodeNumber;

     public:
     //constructor
        Episodio(string title, int temp, int epNum, float calif);

        //getters
        string getTitulo() {
            return titulo;
        }   

        int getTemporada() {
            return temporada;
        }

        int getEpisodeNumber() {
            return episodeNumber;
        }

        float getCalificacion() {
            return calificacion;
        }

        //setters
        void setCalificacion(float calif) {
            calificacion = calif;
        } 

        void setTemporada(int temp) {
            temporada = temp;
        }

        void setTitulo(string title) {
            titulo = title;
        }

        void setEpisodeNumber(int epiNum){
            episodeNumber = epiNum;
        }

        //mostramos infomacion al usuario de episodios ya que pide titulo, numero de episodio y temporada de cada uno
        void mostrarInfo();
 };

#endif
