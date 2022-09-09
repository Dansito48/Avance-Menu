#include <iostream>
#include <string>

using namespace std;
int a = 0, b = 0, id= 1;
bool c = true;
string nm[3], carac[3];


void agregar();
void main() {

	while (c) {
		cout << "------------------- Men\243 Principal ---------------------" << endl;
		cout << "Bienvenido: Usuario. Selecciona una opci\242n, porfavor: " << endl;
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "\t1.- Agregar articulo " << endl;
		cout << "\t2.- Modificar articulo. " << endl;
		cout << "\t3.- Eliminar articulo. " << endl;
		cout << "\t4.- Lista de articulos vigentes. " << endl;
		cout << "\t5.- Limpiar pantalla. " << endl;
		cout << "\t6.- Salir " << endl;
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cin >> a;
		
			switch (a)
			{
			case 1:
			{
				agregar();
				cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
				break;
			}
			case 2:
			{
				cout << "Aun no se encuentra listo esta opci\242n." << endl;
				break;
			}
			case 3:
			{
				cout << "Aun no se encuentra listo esta opci\242n." << endl;
				break;
			}
			case 4: {
				cout << "Aun no se encuentra listo esta opci\242n." << endl;
				break;
			}
			case 5: {
				system("cls");
				break;
			}
			case 6: {
				system("cls");
				cout << ":::::::::::::::::SALIENDO::::::::::::::::" << endl;
				system("pause");
				c = false;
			}
			default: {
				cout << "Error, ingrese una opci\242n correcta" << endl;;
				break;
			}
			}

		}

	}



void agregar() {

	cin.ignore();
	for (int i = 0; i < 3; i++) {
		
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "Ingrese t\241tulo de videojuego : " << endl;
		getline(cin,nm[i]);
		cout << "Agrege caracter\241stica del juego:" << endl;
		getline(cin,carac[i]);
		

	}
	system("cls");
	cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << "             Juegos agregados exitosamente.             " << endl;

	for (int i = 0; i < 3; i++) {
		cout << id + i << ": " << nm[i] << endl;
		cout << "Caracteristica del videojuego: " << carac[i] << endl;
	}

}


