/*Nombre: Jesica Valdez
TP Intregrador
Comentarios:
*/

#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    setlocale(LC_CTYPE, "Spanish");
    char opcion, salir;
    int aux=0;

    do
    {
        cout << "CAR-JITSU ++" << endl;
        cout << "----------------------" << endl;

        cout << " 1 - JUGAR" << endl;
        cout << " 2 - ESTAD�STICA" << endl;
        cout << " 3 - CR�DITOS" << endl;
        cout << " 4 - REGLAS DEL JUEGO" << endl;
        cout << "--------------" << endl;
        cout << "0 - SALIR" << endl;

        cout << endl;
        cout << "Ingrese una opci�n: " << endl;
        cin >> opcion;
        system ("cls");


        cout << "Haz seleccionado opci�n: " << opcion << endl;
        cout << "----------------------------" << endl;

        while (!(opcion=='0'||opcion=='1'||opcion=='2'||opcion=='3'||opcion=='4'))
        {
            cout << "Opcion incorrecta, digite su opci�n nuevamente: " << endl;
            cin >> opcion;
            cout << ".............................." << endl;
        }

        switch (opcion)
        {
        case '1':
            cout << "- JUGAR -" << endl;
            system("pause");
            break;
        case '2':
            system("cls");
            cout << "- ESTAD�STICA -" << endl;
            system("pause");
            break;
        case '3':
            system("cls");
            cout << "- CR�DITOS -" << endl;
            system("pause");
            break;
        case '4':
            system("cls");
            cout << "- REGLAS DEL JUEGO -" << endl;
            system("pause");
            break;
        case '0':
            system("cls");
            cout << "Est�s seguro que deseas salir? " << endl;
            cout << "-----------------------------------------------" << endl;
            cout << endl;
            cout << "Presiona S para salir o N para volver al men�: " << endl;
            cin >> salir;
            salir=toupper(salir); //funcion para pasar a mayuscula la opcion del usuario

            while (salir != 'S' && salir!='N')
            {
                cout << "Est�s seguro que deseas salir? presiona S para salir o N para volver al men�: " << endl;
                cin >> salir;
            }
            if (salir !='S')
            {
                system ("cls");
                cout << "CAR-JITSU ++" << endl;
                cout << "----------------------" << endl;
                cout << " 1 - JUGAR" << endl;
                cout << " 2 - ESTAD�STICA" << endl;
                cout << " 3 - CR�DITOS" << endl;
                cout << " 4 - REGLAS DEL JUEGO" << endl;
                cout << "--------------" << endl;
                cout << "0 - SALIR" << endl;

                cin >> opcion;
                system ("cls");
            }
            else
            {
                exit(EXIT_SUCCESS);
            }
            break;
        }

    }
    while(aux==0);
    system("pause");
}
