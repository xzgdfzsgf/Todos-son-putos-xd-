#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


using namespace std;

int main()
{
    ofstream archivo_nombre,archivo_password;
	string nombre,password,texto1,texto2,password2,nombre2;
	char op;
	do
    {

        cout<<"Ingrese el nombre se usuario, seguido de un .txt: ";
        cin>>nombre;
        archivo_nombre.open(nombre.c_str(), ios:: out);
        if (archivo_nombre.fail())
        {
            cout<<"No se puede utilizar ese nombre";
            exit(1);
        }
        else
        {

                system("cls");
                fflush(stdin);
                cout <<"Ingrese el nombre de usiario, sin el .txt: "<<endl;
                getline (cin,texto1);
                archivo_nombre<<texto1<<endl;
        }
        system ("cls");
        cout<<"Ingrese la contraseña, seguido de un .txt: ";
        cin>>password;
        archivo_password.open(password.c_str(), ios:: out);
        if (archivo_password.fail())
        {
            cout<<"No se puede utilizar esa contraseña";
            exit(1);
        }
        else
        {

                system("cls");
                fflush(stdin);
                cout <<"Ingrese la contraseña, sin el .txt: "<<endl;
                getline (cin,texto2);
                archivo_password<<texto2<<endl;
                cout<<"Usuario creado, con exito"<<endl;
                system ("cls");
                cout<<"Desea seguir creando usuarios"<<endl;
                cout<<"Escriba [S/s] para continuar creando usuarios"<<endl;
                cin>>op;

        }
    }
    while (op == 's' || op == 'S');
        cout<<"Gracias"<<endl;
        archivo_nombre.close();
        archivo_password.close();

	system ("cls");
    cout<<"*/*/*/*/*/*/*/*Iniciando el login*/*/*/*/*/*/*/*"<< endl;Sleep (3000);
    system ("cls");
    cout<<"Usuario:";
    cin>>nombre2;
    system ("cls");
    cout<<"Contrasenia:";
    cout<<"*";
    cin>>password2;
    if(texto1!=nombre2)
    {
        cout<<"Usuario incorrecto"<<endl;
    }
    if (texto2!=password2)
    {
        cout<<"Contrasenia incorrecta"<<endl;
    }





    getch();
    return 0;
}
