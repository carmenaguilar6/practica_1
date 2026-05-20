#include <iostream> //libreria principal de c+++, entrada y salida de dato

using namespace std;

//comparacion de numeros

int main() { //inicio del programa
	
	int a, b, c; // declarando variables

	
	cout << "COMPARACION DE TRES NUMEROS"<<endl ; // encabezado
	cout << "ingresa el primer numero:"<<endl ;  //pidiendo dato
	cin >> a;                                     
	cout << "ingresa el segundo numero:"<<endl ; //pidiendo dato
	cin >> b;
	cout << "ingresa el tercer numero:"<<endl; //pidiendo dato
	cin >> c;
	
	if ( a >= b && a >= c ){ cout <<" el numero mayor es: "<<a;}
     else if ( b >=a && b >= c ){ cout<< "el numero mayor es: "<< b;
	 } else { cout<<"el numero mayor es "<< c;
	 }
	 	
	return 0;	
}


