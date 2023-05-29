lo priemro que tenia que tener en cuenta es como funciona la serie de Leibniz , la cual en su numerador tienen -1 elevado a la posición
en la que se encuentra y en su denominador es 2 por la posicion menos 1.
  Pensandolo de esta forma lo que tendriamos que hacer es representar eso dentro de una iteracion y como queremos 6 digitos de exactitud 
lo tendremos que iterar unas 1000000 veces para llegar a esa aproximacion.
Una cosa a tener en cuenta son las varibles a utilizar como necesitamos 6 numero despues de la coma tendriamos que usar Double en lugar de Float, ademas de esto tambien tendremos que usar serprecision(int) para agregarle un lugar mas ya que solo represanta 5 lugares despues de la coma .Este metodo es parte de la libreria <iomanip>.

  
  Editor de Texto : Dev C++
