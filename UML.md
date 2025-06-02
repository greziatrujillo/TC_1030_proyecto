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
