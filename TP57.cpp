#include <iostream>
#include<string>
using namespace std;

string CambiarPalabra (string palabra, int posicion);
int main()
{
	string palabra;
	int posicion;
	cout<<"Ingrese palabra: "<<endl;
	getline(cin,palabra);
	cout<<"Ingrese posicion a partir de 0: "<<endl;
	cin>>posicion;
	
	cout<<CambiarPalabra(palabra,posicion)<<endl;
	 
	return 0;
}

string CambiarPalabra (string palabra, int posicion)
{
    if (posicion>=0 && posicion<palabra.size())
    {
        palabra[posicion-1]='X';
    }
    return palabra;	
}

