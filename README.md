# TC_1030_proyecto

Para una nueva aplicación, estamos trabajando con videos que se clasifican en dos grupos: películas y series. De estos videos, todos tienen un ID distincto. Todos tienen un nombre, una duración, un género y su calificación promedio de 1 a 5 (5 siendo la calificación más alta).  Cada serie tiene episodios con su título y temporada. 

Queremos desplegar la información dada. Es decir, queremos ver el título, su calificación final, su genero y que tipo de video es. 

### UML creado
![Captura de pantalla 2025-05-20 133955](https://github.com/user-attachments/assets/9611ad22-b5fc-4aa5-8d7b-69e10ca4302b)


### Expliación de UML breve
Las clases de Serie y Pelicula heredan de la clase Video. Heredan todos los atritbutos y métodos, con la excepción de getTipo ya que hay sobrecarga. Serie y Episodio tienen una relación de composición, ya que sin serie, no hay episodios. Tenemos una clase aparte para los episodios de la serie ya que cada episodio tiene sus atributos con los que tenemos que trabajar. Las características mencionadas previamente son parte de los atributos privados, y solo imprimimos lo necesario con los métodos públicos. Por ejemplo, el método que nos da la calificación final simplemente la imprime, no enseña los cálculos o las calificaciones individuales, ya que todo eso se hace internamente. 

### Casos de fallo en el programa 
Ya que estaremos trabajando con series de máximo 20 episodios por simplicidad, al momento de agregar más de 20, el programa queda con error ya que el usuario queda fuera de los límites. De igual manera, estamos trabajando con calificación de 1 a 5. Al momento de ingresar una calificación menor a 1 o mayor a 5, el usuario queda fuera de los límites, afectando el promedio y sin calificación válida. Obviamente hay fallos en el programa si hay errores en el sintaxis o errores al momento de inicializar objetos. Como se trabaja con el tipo de video al momento de imprimir la informacion de una película o serie, si no se define que tipo de video es, se imprime video por default o queda vacío.
