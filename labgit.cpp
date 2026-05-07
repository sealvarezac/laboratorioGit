#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream archivo_git ("./input/archivoEntrada.txt");
	ofstream archivoSalida("./output/salida.txt");
	if (archivo_git.is_open() && archivoSalida.is_open()){
		string linea;
		while(getline(archivo_git, linea)){
            archivoSalida<<linea<<"\n";
        }archivoSalida<<"Salida correcta.\n";
	}
    cout<<"Se leyo el archivo de forma correcta."<<endl<<endl;
	archivo_git.close();
	cout<<endl;
	return 0;
}
