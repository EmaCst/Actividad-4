#include<iostream>
using namespace std;
main(){
/*	for(int i=1;i<=10;i++){
	cout<<i<<endl;
}
*/

/*	int contar;
for(int i=1;i<=10;i++){
	cout<<i<<endl;
	contar++;
	}
cout<<"Ciclos: "<<contar<<endl;
*/

/*int i=0;
for(i=1;i<10;i++){
	cout<<i<<endl;
	}
cout<<"i fuera: "<<i<<endl;*/

/*for(int i=0;i<10;i++){
	if(i==5){
		cout<<"if"<<endl;
		//break;
		continue;
	}
	cout<<i<<endl;
}
cout<<"fuera del for"<<endl;*/

/*for(float i=0;i<10;i+=0.1){
	cout<<i<<endl; }*/

/*int tam=0;
int datos[] = {10,40,100,250,3000};
tam=sizeof(datos) / sizeof(datos[0]);
for (int i=0;i<tam;i++){
	cout<<datos[i]<<endl;
}*/

/*int datos[] = {10,40,100,250,3000};

for (int i:datos){
	cout<<i<<endl;
}*/

int inicio = 0, fin= 0, res = 0;
cout<<"Ingrese Tabla Inicial: "<<endl;
cin>>inicio;
cout<<"Ingrese Tabla Final: "<<endl;
cin>>fin;
for(int rango=inicio; rango<=fin;rango++){
	cout<<"\ntabla del "<<rango<<endl;
	for(int i=0;i<=10;i++){
		res=rango * 1;
		cout<<rango<<" X "<<i<<" = "<<res<<endl;
}}

system ("pause");
}