### UML creado
![image](https://github.com/user-attachments/assets/bee2aa77-4948-45c6-88bd-1ff807a004ce)

### Expliación de UML breve
Las clases de Serie y Pelicula heredan de la clase Video, una clase abstracta. Heredan todos los atritbutos y métodos, con la excepción de getTipo ya que hay sobrecarga. Serie y Episodio tienen una relación de 
composición, ya que sin serie, no hay episodios. Tenemos una clase aparte para los episodios de la serie ya que cada episodio tiene sus atributos con los que tenemos que trabajar. Las características mencionadas 
previamente son parte de los atributos protegidos, y solo imprimimos lo necesario con los métodos públicos. Por ejemplo, el método getTipo() simplemente nos da el tipo de video sin ver los cambios que 
han pasado (de video a película, por ejemplo). 

No visto en el UML para conservar tiempo y espacio, son los getters, setters y constructores que se esperan implementar. Es importante implementar el * en 
la clase Episodio para poder usar apuntadores en el main. De igual manera, al implpementar la función virtual pura getTipo() en la clase base Video, es importante implementar dicha función en las clases derivadas.
No visto serán detalles específicos como sobre escritura y sobrecarga con ciertos métodos. 

### Casos de fallo en el programa 
Ya que estaremos trabajando con series de máximo 20 episodios por simplicidad, al momento de agregar más de 20, el programa queda con error ya que el usuario queda fuera de los límites. De igual manera, estamos trabajando con calificación de 1 a 5. Al momento de ingresar una calificación menor a 1 o mayor a 5, el usuario queda fuera de los límites, quedando sin calificación válida. Obviamente hay fallos en el programa si hay errores en el sintaxis o errores al momento de inicializar objetos. Hay que tener cuidado al momento de usar apuntadores, ya que pueden causar problemas al momento de usarlos si no son implementados correctamente en el código o el main.
