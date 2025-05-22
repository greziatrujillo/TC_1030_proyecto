/*
 *
 * Proyecto Tipo de video
 * Greiza Trujillo
 * A01713876
 * 22/05/2025
 * 
 */

#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>

using namespace std;


//clase video que es abstracta
class Video {
    //variables de instancia
    private:
        int ID;
        int duracion;
        string nombre;
        string genero;
        float calificacion;

        //metodos de objetos instanciados
    public:

        Video(){
            ID = 0;
            duracion = 0;
            nombre = "";
            genero = "";
            calificacion = 0.0;
        }
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

        string getNombre() {
            return nombre; //otras clases podran tener acceso a este metodo
        }

        string getGenero() {
            return genero;
        }

        float getCalificacion() {
            return calificacion;
        }

        void mostrarTituloYCalificacion(){
            cout << "Titulo: " << nombre
                 << " |Tipo: " << getTipo()
                 << " |Genero:" << genero
                 << " |Calificacion: " << calificacion << endl; 
                 //mostrar informacion pedida al usuario en terminal
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

         //metodos de objetos instanciados previamente
     public:
        Episodio() {
            titulo = "";
            temporada = 0;
            calificacion = 0.0;
        }
    
        Episodio(string title, int temp, float calif) {
            titulo = title;
            temporada = temp;
            calificacion = calif;
        }

        float calificacionFinal() {
            return calificacion;
        }

        //aqui mostramos infomacion al usuario diferente a lo default de serie o de pelicula, ya que pide titulo y temporada de cada episodio
        void mostrarInfo() {
            cout << "Nombre episodio: " << titulo
                 << " |Temporada: " << temporada
                 << " |Calificacion: " << calificacion << endl;
        }
 };

 //clase serie que es abstracta que hereda de video
 class Serie : public Video {
    //variables de instancia
     private:
         int numEpisodios;
         Episodio episodios[20]; //max 20 episodios por serie

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
         void agregarEpisodio(Episodio ep){
            if (numEpisodios < 20) {
                episodios[numEpisodios] = ep;
                numEpisodios++; //menos de 20 epidodios, agregar a serie
            } 
            else {
                cout << "No se pueden agregar mas episodios" << endl;
            }
 }

        //sobrecarga(overload)
        //agregar episodios directamente
        void agregarEpisodio(string titulo, int temporada, float calif) {
            Episodio newEp(titulo, temporada, calif);
            agregarEpisodio(newEp);
        }
};

#endif
