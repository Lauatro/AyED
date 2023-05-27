#include <iostream>
#include <iomanip>

using namespace std;

double calcular_pi() {
	
    double aprox = 0.0;
    double denominador = 1.0;
    int signo = 1;
	//******Serie de Liebniz***
    for (int i = 0; i < 1000000; ++i) {	 
        aprox += signo / denominador;		//suma al total la nueva fracción 
        signo *= -1; 						//cambio el signo de la siguiente fracción
        denominador += 2;
    }

    return aprox * 4;
}

int main() {
	
    double pi_aprox = calcular_pi();
	cout <<setprecision(7) <<"Aproximacion del valor de  pi : " << pi_aprox << endl;
	/*setprecision(int) se puede restringir el tamaño de la variables 
	en este caso se utilizo ya que se necesitaba mostral el sexto numero despues de la coma
	*/
	    return 0;
}
