//hecho por: Jesus Steven Medrano Carballo
//carnet: MC18055
//Tarea: hacer un programa que de una cadena inversa usando puntero para saber el espacio de memoria que usa
 
#include<iostream> // lo usamos para las entradas y salidas
#include<conio.h> // lo usamos para las funciones basicas de entrada y salida

using namespace std; //para espacios de nombres

int main(){
	
 char cadena[10]={0}; //aqui el rango del char sera de 10
 char *ptrcadena; //usamos este puntero que apunte a la cadena
	
	cout<<"ingrese su cadena: "; //ingresamos los caracteres
	cin>>cadena; //recibe los caracteres
	cout<<"la direccion en memoria de su cadena es: "; //mostramos esto en pantalla indicando la posicion
	cout<<("%s\n",&cadena)<<endl; // muestra en pantalla la posicion en memoria usado
	cout<<"el inverso de la cadena es: "; // se indica que se va a mostrar lo inverso de la operacion
	
	for(int i=9; i>=0; i--){ //trabajamos en un for para realizar la operacion de la inversa
		ptrcadena = &cadena[i];//asignamos el puntero para que señale la ultima posicion
		cout<<("%c",*ptrcadena); //asigna la posicion en emmoria y los caracteres
		
	}

	getch (); //lee un solo caracter
	return 0; //no retorna ningun valor
}

