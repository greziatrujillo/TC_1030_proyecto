### UML creado
![image](https://github.com/user-attachments/assets/21692876-4b18-4999-9776-0fd588f6f54f)


### Expliación de UML breve
Las clases de Serie y Pelicula heredan de la clase Video, una clase abstracta. Heredan todos los atritbutos y métodos, con la excepción de getTipo ya que hay sobrecarga. Serie y Episodio tienen una relación de 
composición, ya que sin serie, no hay episodios. Tenemos una clase aparte para los episodios de la serie ya que cada episodio tiene sus atributos con los que tenemos que trabajar. Las características mencionadas 
previamente son parte de los atributos protegidos, y solo imprimimos lo necesario con los métodos públicos. Por ejemplo, el método getTipo() simplemente nos da el tipo de video sin ver los cambios que 
han pasado (de video a película, por ejemplo). Igualmente, Video y Catalogue tienen una relación de agregación ya que los datos de Video se van agregando a la clase Catalogue.


No visto en el UML para conservar tiempo y espacio, son los getters, setters y constructores que se esperan implementar. Es importante implementar el * en 
las clases Episodio y Catalogue para poder usar apuntadores en el main. De igual manera, al implpementar la función virtual pura getTipo() en la clase base Video, es importante implementar dicha función en las clases derivadas.
No visto serán detalles específicos como sobre escritura y sobrecarga con ciertos métodos. 

### Casos de fallo en el programa 
Ya que estaremos trabajando con series de máximo 20 episodios por simplicidad, al momento de agregar más de 20, el programa queda con error ya que el usuario queda fuera de los límites. Si el usuario intenta agregar película o serie y ya llegó al límite de 100 el catálogo, habrá un error para el usuario. Obviamente hay fallos en el programa si hay errores en el sintaxis o errores al momento de inicializar objetos. Hay que tener cuidado al momento de usar apuntadores, ya que pueden causar problemas al momento de usarlos si no son implementados correctamente en el código o el main.
