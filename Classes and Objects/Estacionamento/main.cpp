#include <iostream>
#include <iostream>
using namespace std;

class Estacionamento{
	
	public:
	
	int dia;
	int horaEntrada;
	int horaSaida;
	
	void solicitaDados(){
		cout<<"Digite o dia, hora de entrada e hora de saida: ";
		cin>>dia>>horaEntrada>>horaSaida;
		cout<<dia<<endl;
		cout<<horaEntrada<<endl;
		cout<<horaSaida<<endl;
	}
	
	int valorEstacionamento(){
		return 5 * (horaSaida - horaEntrada); //usando de exemplo
		 								      //a hora de saída (16) e a hora de entrada (15) 
											  // faria 16-15 que dária 1 
											  //(resultado de 1 hora de diferença) * 5 e com isso  5 reais
	}
	
};

int main(int argc, char** argv) {
	
	Estacionamento obj;
	obj.solicitaDados();
	cout<<obj.valorEstacionamento();

}
