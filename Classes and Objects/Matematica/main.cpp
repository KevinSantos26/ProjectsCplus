#include <iostream>
#include <iostream>
using namespace std;

class Matematica{
	
	public:
	
	int a;
	int b;
	
	void cadastro(){
		cout<<"Digite os numeros: ";
		cin>>a>>b;
	}
	
	int soma(){
		return a+b;
	}
	int sub(){
		return a-b;
	}
	int multi(){
		return a*b;
	}
	int div(){
		if(a>b){
			return a/b;
		}
		else if(b>a){
			return b/a;
		}
		else{
			return 0;
		}
	}	
};

int main(int argc, char** argv) {
	
	Matematica obj;
	obj.cadastro();
	cout<<"Resultado soma: "<<obj.soma()<<endl;
	cout<<"Resultado subtracao: "<<obj.sub()<<endl;
	cout<<"Resultado multiplicacao: "<<obj.multi()<<endl;
	cout<<"Resultado divisao: "<<obj.div()<<endl;
}
