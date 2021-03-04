#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float p; //Peso
	float a; //Altura
	float imc;
	
	cout<< "Digite seu peso:";
	cin>> p;
	cout<< "Digite sua altura:";
	cin>> a;
	
	imc = p / (a*a);
	
	if (imc < 20) {
		cout << "Esta abaixo do peso ideal";
	}
	else if (imc >=25) {
		cout << "Esta acima do peso ideal";
	}
	else{
		cout << "Esta com o peso ideal";
	}
	
	
	
	return 0;
}