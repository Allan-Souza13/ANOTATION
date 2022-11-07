#include <iostream>
using namespace std;

//RGM: 23739070 Allan Pereira de Souza 


class Carro //Classe Carro
{
	//Criamos a velocidade e os modelos dos carros
	private:
	int velocidade; 
	string modelo;
	public:
	Carro(int vel, string mod)
	{
		velocidade = vel;
		modelo = mod;
	}
	Carro()
	{
		velocidade = 50;
		modelo = "fusca";
	}
	Carro(int vel)
	{
		velocidade = vel;
		modelo = "fusca";
		
	}
	Carro(string mod)
	{
		velocidade = 140 ;
		modelo = mod;
	}
	int getVel()
	{
		return velocidade;
	}
	string getMod()
	{
		return modelo;
	}
	
};

class Moto
{
	private:
	int velocidade; 
	string modelo;
	public:
	Moto(int vel, string mod)
	{
		velocidade = vel;
		modelo = mod;
	}
	Moto()
	{
		velocidade = 170;
		modelo = "MT03";
	}
	Moto(int vel)
	{
		velocidade = vel;
		modelo = "MT03";
		
	}
	Moto(string mod)
	{
		velocidade = 200 ;
		modelo = mod;
	}
	int getVel()
	{
		return velocidade;
	}
	string getMod()
	{
		return modelo;
	}
};




//Chamamos os modelos dos carros no campo a baixo
int main(int argc, char const *argv[]) 
{
Carro *c1 = new Carro();
Carro *c2 = new Carro(200, "BMW");
Carro *c3 = new Carro(190, "Golf");
Carro *c4 = new Carro(175, "Polo");
Carro  *c5 = new Carro(250, "Tesla");

cout << "Modelos de Carros: " <<endl;
cout << c1 -> getMod() << endl;
cout << c1 -> getVel()<< "KM" << endl;
cout << "---------------- " <<endl;
cout << c2 -> getMod() << endl;
cout << c2 -> getVel()<< "KM" << endl;
cout << "---------------- " <<endl;
cout << c3 -> getMod() << endl;
cout << c3 -> getVel()<< "KM" << endl;
cout << "---------------- " <<endl;
cout << c4 -> getMod() << endl;
cout << c4 -> getVel()<< "KM" << endl;
cout << "---------------- " <<endl;
cout << c5 -> getMod() << endl;
cout << c5 -> getVel()<< "KM" << endl;
cout << "---------------- " <<endl;



Moto *m1 = new Moto();
Moto *m2 = new Moto(180, "twister");
Moto *m3 = new Moto(190, "Fazer");


cout << "Modelos de Motos: "<< endl;
cout << m2 -> getMod() << endl;
cout << m2 -> getVel()<< "KM" << endl;
cout << "---------------- " <<endl;
cout << m3 -> getMod() << endl;
cout << m3 -> getVel()<< "KM" << endl;




	return 0;
}
