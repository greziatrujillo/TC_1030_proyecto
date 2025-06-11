# TC 1030 Gestión de videos

Para una nueva aplicación, estamos trabajando con videos que se clasifican en dos grupos: películas y series. De estos videos, todos tienen un ID distincto, un nombre, una duración, un género y su calificación promedio de 1 a 5 (5 siendo la calificación más alta).  Cada serie tiene episodios con su título, calificación y temporada. Los episodios creados se pueden añadir a su serie respectiva. Igualmente, las series y películas creadas se pueden almacenar en un catálogo. 

Queremos desplegar la información dada. Es decir, queremos ver el título, su calificación, su genero y que tipo de video es. También es importante poder cambiar los datos después de crearse por si hay algún error. El usuario puede escoger si quiere ver las películas, series, episodios de una serie o añadir cualquier de estos. La intención es imitar una aplicación similar a Disney+, Netflix, etc...

## Funcionalidad
El programa permite agregar tipos de videos clasificados entre series o películas. Para cada serie, se pueden agregar máximo 20 episodios, cada uno con su calificación, su título, el número de episodio y su temporada correspondiente. Estas películas o series se pueden almacenar en un catálogo. 

Un menú le aparece al usuario, con la opción de escoger que es lo que quiere ver del catálogo o si quiere añadir. Al momento de presentar la información de los videos, el programa presenta: el título, el tipo de video, el genero y la calificación.

Adicionalmente, aunque se crean los objetos incialmente, se pueden modificar los atributos individualmente por si es necesario. Aunque no vemos el ID o duración al momento de desplegar la información, aún son atributos que pide el problema y se implementa la manera de poder declarar o modificarlos. 

## Consideraciones
El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos.

Compilar con: g++ main.cpp Video.cpp episodio.cpp
