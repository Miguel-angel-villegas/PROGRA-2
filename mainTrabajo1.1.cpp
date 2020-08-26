#include <iostream>

using namespace std;

int main() {
	
	int piezasH, *dir_aptas;
	int aptas = 0;
	float longitud;
		
	cout<<"Ingrese la cantidad de piezas a procesar:\n";
	cin>>piezasH;
	
	cout<<"Ingrese las longitudes de las piezas:\n";
	
	for(int i=0; i<piezasH; i++)
		{
			cout<<"--";
			cin>>longitud;
			if(longitud >=1.20 and longitud <=1.30)
				aptas++;
		}
	
	dir_aptas = &aptas;
	cout<<"Las cantidad de piezas aptas en el lote son:"<<*dir_aptas;
		
	return 0;
}
