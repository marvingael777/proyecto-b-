#include <iostream>
using namespace std;

string usuario,pass;


int main(){
	string user="usuario";
	string password="123fer67";
	string user2="tecnico";
	string password2="123marvin67";
	string user3="psicologo";
	string password3="305thebest";
	

		cout<<"Ingresa tu usuario"<<endl;
	getline(cin,usuario);
	cout<<"ingresa tu password"<<endl;
	getline(cin,pass);
	if(usuario == user and pass == password){
		cout<<"bienvenido:"<<usuario;
	}
		else if(usuario == user2 and pass == password2){
		cout<<"bienvenido:"<<usuario;
	}
		else if(usuario == user3 and pass == password3){
		cout<<"bienvenido:"<<usuario;
	}
	else{
		cout<<"¿Que haces aqui?";
	}
	
	
	
	return 0;
}
