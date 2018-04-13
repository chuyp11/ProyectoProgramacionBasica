#include <iostream>;
#include <conio.h>

using namespace std;

void incio();
void registrarUsuario();
void registrarNombreUsuario();


void main() {
	
	incio();
	system("pause");
}

void incio() {
	
	int eleccion;
	bool repetir = true;

	do {
		system("cls");
		for (int i = 0; i < 20; i++) {
			cout << "**";
		}
		cout << "\n\tInicio\n";
		for (int i = 0; i < 20; i++) {
			cout << "**";
		}
		cout << "\n\n\t(1)Registrar Cliente";

		cout << "\n\n\tElige una opcion";
		cin >> eleccion;
		switch (eleccion) {
		case 1:
			registrarUsuario();
			repetir = false;
			break;
		default:
			break;
		}
	} while (repetir);
}

void registrarUsuario() {

	int eleccion;
	bool repetir = true;

	do {
		system("cls");
		for (int i = 0; i < 20; i++) {
			cout << "**";
		}
		cout << "\n\tRegistrtar Cliente\n";
		for (int i = 0; i < 20; i++) {
			cout << "**";
		}
		cout << "\n\n\t(1)Nombre";

		cout << "\n\n\tElige una opcion";
		cin >> eleccion;
		switch (eleccion) {
		case 1:
			registrarNombreUsuario();
			repetir = false;
			break;
		case 2:

			repetir = false;
			break;
		default:
			break;
		}
	} while (repetir);
}

void registrarNombreUsuario() {

	char nombre[10];
	char letra;
	bool repetir = true, repetir2 = true;;
	int numASCII;
	
	int j = 0;
	nombre[0] = '\0';

	do {
		system("cls");
		for (int i = 0; i < 20; i++) {
			cout << "**";
		}
		cout << "\n\tRegistrtar nombre del cliente\n";
		for (int i = 0; i < 20; i++) {
			cout << "**";
		}
		cout << "\n\n\tSolo se permiten caracteres alfabeticos y espacios en blanco: ";
		cout << "\n\n\tNombre: " << nombre;

		for (j; j < 10; j++) {
			letra = _getch();
			numASCII = letra;
			if (j > 0 && numASCII == 8) { // borrar
				nombre[j] = '\0';
				nombre[--j] = '\0';
				break;
			}
			else if ( numASCII == 13) { // enter
				cout << "\n\n\tasdasd: " << numASCII;
				nombre[j] = '\0';
				repetir = false;
				j = 10;
				break;
			}
			else if (j == 9) {
				nombre[j] = '\0';
				repetir = false;
			}
			else if (numASCII == 32 || (numASCII >= 65 && numASCII <= 90) || (numASCII >= 97 && numASCII <= 122)) {
				cout << letra;
				nombre[j] = letra;
			}
		}

		cout << "\n\n\jjjj: " << j;

		if (j == 10) {
			cout << nombre << "\n";
			for (int i = 0; i < 20; i++) {
				cout << "-";
			}
			system("pause");
		}
		
		

		/*cout << "\n\n\tNombre: ";
		for (int i = 0; i < 10; i++) {
			cout << nombre[i];
		}
		cout << "\n\n\tNombre: ";
		cout << nombre;

		for (int i = 0; i < 20; i++) {
			cout << "**";
		}*/
/*
		system("pause");*/

	} while (repetir);

	if (j == 10) {
		cout << nombre;
		system("pause");
	}

	
}