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

#ifndef EPISODIO_CPP
#define EPISODIO_CPP

#include <iostream>
#include "Video.h"
#include "episodio.h"
using namespace std;

Episodio:Episodio(string title, int temp, int epNum, float calif) // constructor definition
    :titulo {title}
    , temporada {temp}
    , episodeNumber {epNum}
    , calificacion {calif}

  void Episodio::mostrarInfo() const //mostrarInfo definition
{
            cout << "Nombre episodio: " << getTitulo()
                 << " |Temporada: " << getTemporada()
                 << " |Episodio " << getEpisodeNumber()
                 << " |Calificacion: " << getCalificacion() << endl<< endl;
        }
