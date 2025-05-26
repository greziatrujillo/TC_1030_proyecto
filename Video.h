/*
 *
 * Proyecto Tipo de video
 * Greiza Trujillo
 * A01713876
 * 29/05/2025
 * 
 */

#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>

using namespace std;

//clase video que es abstracta
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

        //constructor crear objeto sin declarar parametros
        Video(){
            ID = 0;
            duracion = 0;
            nombre = "";
            genero = "";
            calificacion = 0.0;
        }

        //constructor crear objeto directo con parametros
        Video(int id, int dur, string name, string gen, float calif) {
            ID = id;
            duracion = dur;
            nombre = name;
            genero = gen;
            calificacion = calif;
        }

        //metodo virtual para que las clases que heredan de video puedan sobreescribirlo
        virtual string getTipo() {
            return "Video"; //default regresa tipo video
        }

        //getters (otras clases u otros metodos podran tener acceso a este metodo)
        string getNombre() {
            return nombre; 
        }

        string getGenero() {
            return genero;
        }

        float getCalificacion() {
            return calificacion;
        }

        int getID() {
            return ID; 
        }

        int getDuracion() {
            return duracion;
        }

        //setters (se puede modificar despues de haber creado el objeto)
        void setNombre(string name) {
            nombre = name;
        }

        void setGenero(string gen) {
            genero = gen;
        }   

        void setCalificacion(float calif) {
            calificacion = calif;
        }

        void setID(int id) {
            ID = id;
        }

        void setDuracion(int dur) {
            duracion = dur;
        }   

        //mostrar informacion pedida al usuario 
        void mostrarTituloYCalificacion(){
            cout << "Titulo: " << getNombre()
                 << " |Tipo: " << getTipo()
                 << " |Genero: " << getGenero()
                 << " |Calificacion: " << getCalificacion() << endl << endl;; 
        }

};

//clase pelicula que es abstracta que hereda de video
 class Pelicula : public Video {
    
    //metodos de variables instanciadas de la clase video
     public:
         Pelicula(){}

         Pelicula(int id, int dur, string name, string gen, float calif) : Video(id, dur, name, gen, calif) {
         }

         string getTipo() {
            return "Pelicula";
        }
 };

 //clase episodio que es abstracta
class Episodio {
    //importante tener antes de clase serie para que clase serie pueda usar la informacion inicializada aqui

    //variables de instancia
     private:
         int temporada;
         string titulo;
         float calificacion;
         int episodeNumber;

    //metodos de objetos instanciados previamente
     public:
        Episodio() {
            titulo = "";
            temporada = 0;
            episodeNumber = 0;
            calificacion = 0.0;
        }
    
        Episodio(string title, int temp, int epNum, float calif) {
            titulo = title;
            temporada = temp;
            episodeNumber = epNum;
            calificacion = calif;
        }

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

        void setEpisodeNumber(int epiNum) {
            episodeNumber = epiNum;
        }

        //aqui mostramos infomacion al usuario diferente a lo default de serie o de pelicula, ya que pide titulo, numero de episodio y temporada de cada episodio
        virtual void mostrarInfo() {
            cout << "Nombre episodio: " << getTitulo()
                 << " |Temporada: " << getTemporada()
                 << " |Episodio: " << getEpisodeNumber()
                 << " |Calificacion: " << getCalificacion() << endl<< endl;
        }
 };

 //clase serie que es abstracta que hereda de video
 class Serie : public Video {
    //variables de instancia
     private:
         int numEpisodios;
         Episodio* episodios[20]; //max 20 episodios por serie

         //metodos de objetos instanciados previamente y de clase video
     public:
         Serie(){
            numEpisodios = 0;
         }

         Serie(int id, int dur, string name, string gen, float calif) : Video(id, dur, name, gen, calif) {
            numEpisodios = 0;
         }

         //override
         string getTipo() {
            return "Serie";
         }

         //agregamos episodios con la creacion de un objeto episodio
         void agregarEpisodio(Episodio* ep){
            if (numEpisodios < 20) {
                episodios[numEpisodios] = ep;
                numEpisodios++; //menos de 20 epidodios, agregar a serie
            } 
            else {
                cout << "No se pueden agregar mas episodios" << endl;
            }
 }
        //sobrecarga(overload)
        //agregar episodios directamente usando new para poder usar apuntadores
        void agregarEpisodio(string titulo, int temporada, int episodeNumber, float calif) {
            if (numEpisodios < 20) {
                episodios[numEpisodios] = new Episodio(titulo, temporada, episodeNumber, calif);
            numEpisodios++;
        }
}

        void mostrarEpisodios() {
            for (int i = 0; i < numEpisodios; i++) {
                episodios[i]->mostrarInfo(); //llama al metodo mostrarInfo de la clase Episodio para ver info de los episodios
            }
        }
 };

#endif
