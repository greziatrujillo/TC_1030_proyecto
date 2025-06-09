/*
 *
 * Proyecto Tipo de video
 * Define objeto de tipo Video que contiene las clases heredadas
 * Pelicula y Serie con sus atributos respectivos
 * Grezia Trujillo
 * A01713876
 * 12/06/2025
 * 
 */

#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>
#include <string>
#include "episodio.h"
using namespace std;

//clase video que es abstracta. creamos la clase base para que las clases que heredan de video puedan usar sus metodos y variables
class Video {
    //variables de instancia para usar en clases hija
    protected:
        int ID;
        int duracion;
        string nombre;
        string genero;
        float calificacion;

    //metodos de objetos instanciados
    public:
        //constructor para crear objeto video directo
        Video(int id, int dur, string name, string gen, float calif);

        //crear pure virtual function para que las clases que heredan de video puedan sobreescribirlo
        virtual string getTipo()=0;
        
        //getters instanciados
        string getNombre();
        string getGenero();
        float getCalificacion();
        int getID();
        int getDuracion();

        //setters instanciados
        void setNombre(string name);

        void setGenero(string gen);

        void setCalificacion(float calif);

        void setID(int id);

        void setDuracion(int dur);

        //mostrar informacion pedida al usuario con formato 
        virtual void mostrarTituloYCalificacion();

};

//clase pelicula que hereda de video. creamos objetos tipo pelicula.
 class Pelicula : public Video {
    //metodos de variables instanciadas de la clase video
     public:
         //constructor 
         Pelicula(int id, int dur, string name, string gen, float calif);

         //override
            string getTipo();
};

 //clase serie que que hereda de video. creamos objetos tipo serie que tienen episodios
 class Serie : public Video {
    //variables de instancia
     private:
         int numEpisodios;
         Episodio* episodios[20]; //max 20 episodios por serie

         //metodos de objetos instanciados previamente y de clase video
     public:
         //constructor
         Serie(int id, int dur, string name, string gen, float calif);

         //override
         string getTipo();

         //agregamos episodios con la creacion de un objeto episodio mientras la serie tenga menos de 20 episodios
         void agregarEpisodio(Episodio* ep);

        //sobrecarga(overload)
        //agregar episodios directamente usando new para poder usar apuntadores mientras la serie tenga menos de 20 episodios
        void agregarEpisodio(string titulo, int temporada, int episodeNumber, float calif);

        //mostrar episodios con su informacion mientras se recorre el arreglo de episodios
        void mostrarEpisodios();
 };

#endif
