#include <iostream>
#include <iomanip>


using namespace std;

double calcular_pi(double pi) {
	
    double aprox = 0.0;
    double denominador = 1.0;
    int signo = 1;
    int ite{0};
    double pres =0.0000001;
	//******Serie de Liebniz***
    while(1) {	 
        aprox += signo / denominador;		//suma al total la nueva fracción 
        signo *= -1; 						//cambio el signo de la siguiente fracción
        denominador += 2;
        if((aprox*4)>=(pi-pres) && (aprox*4)<=(pi+pres)){
           break;
        }
        ite++;
    }
   cout<< " La serie repitio ="<<ite <<" veces  \n"<<endl; 
 return aprox * 4; ;
    
}

int main() {
    cout <<setprecision(7);
	const double pi{3.141592};
    double pi_aprox = calcular_pi(pi);
	cout <<setprecision(7) <<"Aproximacion del valor de  pi : " << pi_aprox << endl;
	/*setprecision(int) se puede restringir el tamaño de la variables 
	en este caso se utilizo ya que se necesitaba mostral el sexto numero despues de la coma
	*/
	    return 0;
}
