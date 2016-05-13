#include <iostream>
#include <cstring>



using std:: cout;
using std:: endl;
using std:: cin;

int main (int argc, char* argv[]){
	int op = 0;
	while(op != 3){
		cout << "1. Ejercicio 1" << endl;
		cout << "2. Ejercicio 2" << endl;
		cout << "3. Salir" << endl;
		cin >> op;
		if ( op == 1){
			int* arreglo = new int[256];
		}
		if ( op == 2){
			char *verbos = new char[256];
			cout << "Ingrese Un Verbo: " << endl;
			cin >> verbos;
    			cout << strlen(verbos) << endl;
			cout << verbos[strlen(verbos)-2] << endl;
			if (verbos[strlen(verbos)-2] == 'e' && verbos[strlen(verbos)-1] == 'r'){
				verbos[strlen(verbos)-2]='o';
				verbos[strlen(verbos)-1] = ' ';
				cout << "Presente: " << verbos << endl;
				

			}
			if (verbos[strlen(verbos)-2] == 'a' && verbos[strlen(verbos)-1] == 'r'){
                                verbos[strlen(verbos)-2]='e';
                                verbos[strlen(verbos)-1] = ' ';
                                cout << "Presente: " <<  verbos << endl;
                        }
			if (verbos[strlen(verbos)-2] == 'i' && verbos[strlen(verbos)-1] == 'r'){
                                verbos[strlen(verbos)-2]='e';
                                verbos[strlen(verbos)-1] = 's';
                                cout << "Presente: " <<  verbos << endl;
                        }


		}
	}
	return 0;
}


