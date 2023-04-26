#include <iostream>
#include <string.h>
#include <time.h>
#include <vector>
#include <stdlib.h>

using namespace std;
void esperar(double t);//sirve para esperar que ejecutable un determinado tiempo
//declación modulos individuales en este caso el struct usuario.
struct Usuario { // aqui declaramos las caractieristicas qe tendra nuestro modulo.
    char nombre[50];
    int edad;
    char genero[2];
    int celular;
    int num_hijos;
    char discapacidad[2];
    char ocupacion[50];
    int menor_edad;
};
//aqui inician las funciones que restringiran al usuario dependiendo de sus datos ingresados
int obtener_hijo_menor(int num_hijos) { //en este caso estamos viendo el numero de hijos que tiene el usuario
    int edad, menor_edad = 100;

    for (int i = 1; i <= num_hijos; i++) { //aqui usamos for que al ingresar el numero de hijos, este nos repita la pregunta dependiendo de cuantos hijos tenga
        cout << "Ingrese la edad del hijo #" << i << ": ";
        cin >> edad;

        if (edad < menor_edad) {
            menor_edad = edad;
        }
    }

    return menor_edad;
}

void mostrar_mensaje(int edad) { // aqui mostramos el mensaje del bono "Juntos" en caso de que algun parametro sea compatible con los datos ingresados del usuario
    if (edad < 7) {
        cout << "-bono juntos de s/.200 soles |y| afiliacion a vaso de leche\n";
    } else if (edad >= 7 && edad < 18) {
        cout << "-bono junto de s/.200 \n";
    } 
}


int main() { //aqui mostramos el nombre y logo del proyecto


    int pp;
pp=6;
for (int i = 0; i < pp; i++)
{
     system("cls");
    cout <<"|***************************************************************************************************************|"<<endl
    	    <<"                 ****************          ***********          *********           ***************             "<<endl
    	    <<"               ******************       **************         ***********        *****************             "<<endl
        	<<"               ********       ***    *********      **        *****   *****       ********       **             "<<endl
    	    <<"               *******               *******                 *****     *****      ******                        "<<endl
    	    <<"               *******   **            *********            *****       *****     ******    **                  "<<endl
    	    <<"               *******   *******          ***********       *****************     ******    *******             "<<endl
    	    <<"               *******   ********            **********     *****************     ******    ********            "<<endl
    	    <<"               *******   *  *****             *********     *****       *****     ******    *  *****            "<<endl
    	    <<"               *******      *****             *********     *****       *****     ******       *****            "<<endl
    	    <<"               *******      *****     **    *********       *****       *****     ******       *****            "<<endl
    	    <<"          **   ******************     *************        ******       ******    *****************   **          "<<endl
    	    <<"          **    ***************       *********           *********************    **************     **          "<<endl
         <<"|***************************************************************************************************************|"<<endl;
    esperar(0.2 * 1000);//retrasador de la acion de mostrar
    cout << endl;
    system("cls");//limpiador de pantalla
    cout <<"|***************************************************************************************************************|"<<endl
    	    <<"                                                                                                                   "<<endl
    	    <<"                                                                                                                 "<<endl
        	<<"                                                                                                                 "<<endl
    	    <<"                                                                                                                 "<<endl
    	    <<"                                                                                                                "<<endl
    	    <<"                                                                                                                 "<<endl
    	    <<"                                                                                                                "<<endl
    	    <<"                                                                                                                "<<endl
    	    <<"        **                                                                                              **      "<<endl
    	    <<"        **                                                                                              **      "<<endl
    	    <<"                                                                                                                 "<<endl
    	    <<"                                                                                                                "<<endl
         <<"|***************************************************************************************************************|"<<endl;
    esperar(0.2 * 1000);                                                                                             
    cout << endl;
    system("cls");
    cout <<"|***************************************************************************************************************|"<<endl
    	    <<"                 ****************          ***********          *********           ***************             "<<endl
    	    <<"               ******************       **************         ***********        *****************             "<<endl
        	<<"               ********       ***    *********      **        *****   *****       ********       **             "<<endl
    	    <<"               *******               *******                 *****     *****      ******                        "<<endl
    	    <<"               *******   **            *********            *****       *****     ******    **                  "<<endl
    	    <<"               *******   *******          ***********       *****************     ******    *******             "<<endl
    	    <<"      **       *******   ********            **********     *****************     ******    ********      **    "<<endl
    	    <<"      **       *******   *  *****             *********     *****       *****     ******    *  *****      **    "<<endl
    	    <<"               *******      *****             *********     *****       *****     ******       *****            "<<endl
    	    <<"               *******      *****     **    *********       *****       *****     ******       *****            "<<endl
    	    <<"               ******************     *************        ******       ******    *****************             "<<endl
    	    <<"                ***************       *********           *********************    **************               "<<endl
         <<"|***************************************************************************************************************|"<<endl;
     esperar(0.1 * 1000);
    cout << endl;
    system("cls");
    cout <<"|***************************************************************************************************************|"<<endl
    	    <<"                                                                                                                  "<<endl
    	    <<"                                                                                                                 "<<endl
        	<<"                                                                                                                 "<<endl
    	    <<"                                                                                                                 "<<endl
    	    <<"     **                                                                                                     **  "<<endl
    	    <<"     **                                                                                                     **  "<<endl
    	    <<"                                                                                                                "<<endl
    	    <<"                                                                                                                "<<endl
    	    <<"                                                                                                                "<<endl
    	    <<"                                                                                                                "<<endl
    	    <<"                                                                                                                "<<endl
    	    <<"                                                                                                                "<<endl
         <<"|***************************************************************************************************************|"<<endl;
    esperar(0.2 * 1000);
    cout << endl;
    system("cls");
    cout <<"|***************************************************************************************************************|"<<endl
    	    <<"                 ****************          ***********          *********           ***************             "<<endl
    	    <<"               ******************       **************         ***********        *****************             "<<endl
        	<<"   **          ********       ***    *********      **        *****   *****       ********       **           ** "<<endl
    	    <<"   **          *******               *******                 *****     *****      ******                      ** "<<endl
    	    <<"               *******   **            *********            *****       *****     ******    **                  "<<endl
    	    <<"               *******   *******          ***********       *****************     ******    *******             "<<endl
    	    <<"               *******   ********            **********     *****************     ******    ********            "<<endl
    	    <<"               *******   *  *****             *********     *****       *****     ******    *  *****            "<<endl
    	    <<"               *******      *****             *********     *****       *****     ******       *****            "<<endl
    	    <<"               *******      *****     **    *********       *****       *****     ******       *****            "<<endl
    	    <<"               ******************     *************        ******       ******    *****************             "<<endl
    	    <<"                ***************       *********           *********************    **************               "<<endl
         <<"|***************************************************************************************************************|"<<endl;
     esperar(0.2 * 1000);
    cout << endl;
    system("cls");
    cout <<"|***************************************************************************************************************|"<<endl
    	    <<"  **                                                                                                           **  "<<endl
    	    <<"**  **                                                                                                       **  **"<<endl
        	<<"  **                                                                                                           **  "<<endl
    	    <<"                                                                                                                   "<<endl
    	    <<"                                                                                                                   "<<endl
    	    <<"                                                                                                                   "<<endl
    	    <<"                                                                                                                   "<<endl
    	    <<"                                                                                                                   "<<endl
    	    <<"                                                                                                                   "<<endl
    	    <<"                                                                                                                   "<<endl
    	    <<"                                                                                                                   "<<endl
    	    <<"                                                                                                                   "<<endl
         <<"|***************************************************************************************************************|"<<endl;
     esperar(0.2 * 1000);
    cout << endl;
    system("cls");
    cout <<"|***************************************************************************************************************|"<<endl
    	    <<"  **             ****************          ***********          *********           ***************            **  "<<endl
    	    <<"**  **         ******************       **************         ***********        *****************          **  **"<<endl
        	<<"  **           ********       ***    *********      **        *****   *****       ********       **            **  "<<endl
    	    <<"               *******               *******                 *****     *****      ******                           "<<endl
    	    <<"               *******   **            *********            *****       *****     ******    **                     "<<endl
    	    <<"               *******   *******          ***********       *****************     ******    *******                "<<endl
    	    <<"               *******   ********            **********     *****************     ******    ********               "<<endl
    	    <<"               *******   *  *****             *********     *****       *****     ******    *  *****               "<<endl
    	    <<"               *******      *****             *********     *****       *****     ******       *****               "<<endl
    	    <<"               *******      *****     **    *********       *****       *****     ******       *****               "<<endl
    	    <<"               ******************     *************        ******       ******    *****************                "<<endl
    	    <<"                ***************       *********           *********************    **************                  "<<endl
         <<"|***************************************************************************************************************|"<<endl;
}

    
    	cout<<" BIENVENIDOS A NUESTRA PLATAFORMA------------------------------(GESTION DE SOLICITUDES DE APOYO DEL GOBIERNO)---------------------------";
    	 
    	 // inicializa el generador de numeros aleatorios  
            srand(time(NULL));
    	 // obtener el tiempo actual
            time_t tiempo_actual = time(0); // indispensable para saber a que hora se conecto el usuario

         // convertirlo a una estructura de tiempo local
            tm* tiempo_local = localtime(&tiempo_actual); //misma funcion anterior solo que es la hora local
         // imprimir la fecha en formato dd/mm/aaaa 
             cout << "                                          ....La fecha de ingreso del usuario: " << tiempo_local->tm_mday << "/" << tiempo_local->tm_mon + 1 << "/" << tiempo_local->tm_year + 1900 << endl;


        // crea un vector de frases
            vector<string> frases = {"-La vida es 10°/° lo que te pasa y 90°/° como reaccionas a ello.",
                           "-El exito no es la clave de la felicidad. La felicidad es la clave del exito.",
                           "-La felicidad no es algo hecho. Viene de tus propias acciones.",
                           "-No te rindas, cada fracaso es una oportunidad para empezar de nuevo con mas experiencia.",
                           "-La vida es una sucesion  de lecciones que deben ser vividas para ser entendidas.",
						   "-La vida es una sucesion de lecciones que hay que vivir para entender.",
                           "-El exito es ir de fracaso en fracaso sin perder el entusiasmo.",
                           "-La felicidad no es algo hecho. Viene de tus propias acciones.",
                           "-El fracaso es simplemente la oportunidad de empezar de nuevo, esta vez con mas experiencia.",
                           "-La mente lo es todo. Lo que piensas, lo que te conviertes.",
                           "-El exito no es la clave de la felicidad. La felicidad es la clave del exito.",
                           "-No juzgues cada dia por la cosecha que recoges, sino por las semillas que plantas.",
                           "-La felicidad no es tener lo que quieres, sino querer lo que tienes.",
                           "-Se el cambio que quieras ver en el mundo.",
                           "-No te preocupes por los fracasos, preocupate por las oportunidades que pierdes al no intentarlo."};

  // elige una frase aleatoria del vector y la imprime
  int indice = rand() % frases.size();
  cout<<""<<endl;
  cout<<"[Frase del dia] :"<<endl;
  cout <<" "<<frases[indice] << endl;
  cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
  cout<<"                            [MENU] :";
	char n;
    do{
        cout<<"ingresa la letra (P):";
        cin>>n;

    }while(n != 'P');
    
    int cantidad_usuarios; //aqui se digita la cantidad de usuarios a registrar en el programa
    cout << "Ingrese la cantidad de usuarios: ";
    cin >> cantidad_usuarios; //alamcenamos en cantidad_usuarios

    // Crear arreglo de usuarios
    Usuario usuarios[cantidad_usuarios];

    // Tomar los datos de cada usuario
    for (int i = 0; i < cantidad_usuarios; i++) {
        cout << "\n::Ingrese los datos del usuario " << i+1 << ":" << endl;
        cout << "Nombre: "; //ingresamos el nombre
        cin.ignore();
        cin.getline(usuarios[i].nombre, 50);
        do{
            cout << "Edad: "; //ingresamos la edad
            cin >> usuarios[i].edad;

        }while(usuarios[i].edad<18); //aqui usamos while, pues mientras el usuario tenga 18 o se mayor se le dara acceso al programa
        
        cout << "Genero (M/F): "; // ingresa su genero
        cin >> usuarios[i].genero;
        cout << "Celular: "; //ingresa el nuemro de celular
        cin >> usuarios[i].celular;
        cout << "cantidad de hijos : "; // ingresa la cantidad de hijos
        cin >> usuarios[i].num_hijos;
        usuarios[i].menor_edad = obtener_hijo_menor(usuarios[i].num_hijos); //en caso de tener hijos seran mencionados dentro de los resultados
        cout << "Tiene alguna discapacidad? (S/N): "; //confirma o niega tener discapacidad
        cin >> usuarios[i].discapacidad;
        cout << "Ocupación: "; //ocupacion de la persona 
        cin.ignore();
        cin.getline(usuarios[i].ocupacion, 50);
    }

    // Mostrar los apoyos para cada usuario  //aqui estan las restricciones que en caso de coincidir con alguna información proporcionada por el usuario sea considerados por dicha funcion
    int i=0;
    cout << "\n *****APOYOS DEL GOBIERNO PARA CADA USUARIO******" << endl;
    while( i < cantidad_usuarios) { 
        cout << "\n" << usuarios[i].nombre << ":" << endl;

        if (usuarios[i].edad > 65) { //para pension 65
            cout << "   - bono pension 65 de S/.250" << endl;
        }
        else{
            if (usuarios[i].discapacidad[0] == 'S') {  // en caso de tener discapacidad 
                cout << "   - Bono de discapacidad de S/.300" << endl;
            }
            else{
                mostrar_mensaje(usuarios[i].menor_edad);

                if (strcmp(usuarios[i].ocupacion, "estudiante") == 0) { //en caso de ser estudiante
                    cout << "   - Apto para una beca" << endl;
                }
                if (strcmp(usuarios[i].ocupacion, "ESTUDIANTE") == 0) {
                    cout << "   - Apto para una beca" << endl;
                }
            }
        }
        cout<<"   - bono covid  S/.340";
        i++;
    }

    return 0;
}
void esperar(double t)
{
    clock_t t0 = clock();//se designa para usar el tiempo
    double e = 0;
    do
    {
        e = 1000 * double(clock() - t0) / CLOCKS_PER_SEC;
    } while (e < t);
}