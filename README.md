# TC_1030_proyecto

Para una nueva aplicación, estamos trabajando con videos que se clasifican en dos grupos: películas y series. De estos videos, todos tienen un ID distincto. Todos tienen un nombre, una duración, un género y su calificación promedio de 1 a 5 (5 siendo la calificación más alta).  Cada serie tiene episodios con su título y temporada. 

Queremos desplegar la información dada. Es decir, queremos ver el título, su calificación, su genero y que tipo de video es. También es importante poder cambiar los datos después de crearse por si hay algún error.

## Funcionalidad
El programa permite agregar tipos de videos clasificados entre series o películas. Para cada serie, se pueden agregar máximo 20 episodios, cada uno con su calificación, su título, el número de episodio y su temporada correspondiente. 

Al momento de presentar la información de los videos, el programa presenta: el título, el tipo de video, el genero y la calificación.

Adicionalmente, aunque se crean los objetos incialmente, se pueden modificar los atributos individualmente por si es necesario setters implementados. Aunque no vemos el ID o duración al momento de desplegar la información, aún son atributos que pide el problema y se implementa la manera de poder declarar o modificarlos.  

La intención es imitar una aplicación similar a Disney+, Netflix, etc...

### Casos de fallo en el programa 
Ya que estaremos trabajando con series de máximo 20 episodios por simplicidad, al momento de agregar más de 20, el programa queda con error ya que el usuario queda fuera de los límites. De igual manera, estamos trabajando con calificación de 1 a 5. Al momento de ingresar una calificación menor a 1 o mayor a 5, el usuario queda fuera de los límites, quedando sin calificación válida. Obviamente hay fallos en el programa si hay errores en el sintaxis o errores al momento de inicializar objetos. Hay que tener cuidado al momento de usar apuntadores, ya que pueden causar problemas al momento de usarlos si no son implementados correctamente en el código o el main. 
