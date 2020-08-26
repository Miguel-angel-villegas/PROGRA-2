#include <iostream>

using namespace std;

int main() {
	
	float *dir_promedio;
	int numero, i = 0;
	float promedio = 0;
	int cifras = 0;
	
	cout<<"\n Por favor ingrese numeros de 3 cifras maximo:\n";
	
	while(i < 4)
		{
			
			cin>>numero;
			if(numero>=0 and numero<1000)
				{
					promedio = promedio + numero;
					if(numero>=100)
						{
							cout<<"el numero ingresado tiene 3 cifras\n";
							i++;
						}
					else if(numero>=10)
						{
							cout<<"el numero ingresado tiene 2 cifras\n";
							i++;
						}
					else
						{
							cout<<"el numero ingresado tiene 1 cifra\n";
							i++;
						}
				}
			else{
				cout<<"el numero es invalido por favor vuelva a intentarlo:\n";
			}
			
		}
		
	dir_promedio = &promedio;	
	cout<<"El promedio de los numeros que ingreso es:"<<*dir_promedio/4;
		
	return 0;
}
