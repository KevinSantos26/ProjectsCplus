#include <iostream>
#include <cstdlib>
using namespace std;

class Aluno{
	
	public:
		
	string nome;
	int matricula;
	int telefone;
	
	Aluno(string nome, int matricula, int telefone){
		this->nome=nome;
		this->matricula=matricula;
		this->telefone=telefone;
	}
	
	Aluno(){
		nome="vazio";
		matricula=0;
		telefone=0;
		
	}
	
	void imprimirDados(){
		cout<<this->nome<<endl;
		cout<<this->matricula<<endl;
		cout<<this->telefone<<endl;
	}
		
};

int main(int argc, char** argv) {
	string x;
	int y;
	int z;
	cin>>x>>y>>z;
	Aluno alunoUm(x, y, z);
	alunoUm.imprimirDados();
	Aluno alunoDois; // quando não tiver parametro, nao colocar ()
	alunoDois.imprimirDados();
	
	return 0;
}
