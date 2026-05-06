#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream archivo_git ("./input/archivoEntrada.txt");
	if (archivo_git.is_open()){
		string linea;
		getline(archivo_git, linea);
		while(getline(archivo_git, linea)){
            cout<<linea<<endl;
        }
	}
    cout<<"Se leyo el archivo de forma correcta."<<endl<<endl;
	archivo_git.close();
	cout<<endl;
	return 0;
}
