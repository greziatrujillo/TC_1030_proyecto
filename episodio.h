/*
 *
 * Proyecto Gestión de videos
 * Grezia Trujillo
 * A01713876
 * 12/06/2025
 * 
 */

/* Esta clase sera usada por la clase serie para crear episodios de una serie y tener su informacion
* importante tener antes de clase serie para que clase serie pueda usar la informacion inicializada aqui 
*/

#ifndef EPISODIO_H
#define EPISODIO_H

#include <string>
using namespace std;


class Episodio {
    //variables de instancia
     private:
         int temporada;
         string titulo;
         float calificacion;
         int episodeNumber;

     public:
     //constructor para crear episodio directo
        Episodio(string title, int temp, int epNum, float calif);

        //getters instanciados
        string getTitulo();

        int getTemporada();

        int getEpisodeNumber();

        float getCalificacion();

        //setters intanciados
        void setCalificacion(float calif);

        void setTemporada(int temp);

        void setTitulo(string title);

        void setEpisodeNumber(int epiNum);

        //mostramos infomacion al usuario de episodios ya que pide titulo, numero de episodio y temporada de cada uno
        void mostrarInfo();
 };

#endif
