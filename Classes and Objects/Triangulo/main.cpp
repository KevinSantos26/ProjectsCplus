#include <cstdlib>
#include <iostream>
using namespace std;

class Triangulo{
	
	public:
		
	int a;
	int b;
	int c;
	
	bool verificaTriangulo(){
		cout<<"Digite os lados do triangulo: ";
		cin>>a>>b>>c;
		if(a<b+c && b<a+c && c<b+a){
			return 1;
		}
		else{
			return 0;
		}
	}
	
	void tipoTriangulo(){
		if(a==b && b==c){
			cout<<"Triangulo Equilatero"<<endl; // 3 lados iguais
		}
		else if(a!=b && b!=c && c!=a){
			cout<<"Triangulo Escaleno"<<endl; // 3 lados diferentes 
		}
		else{
			cout<<"Triangulo Isosceles"<<endl; // 2 lados iguais
		}
	}

};

int main(int argc, char** argv) {
	
	Triangulo obj;
	if(obj.verificaTriangulo()){
		cout<<"E um triangulo"<<endl;
		obj.tipoTriangulo();
	}
	else{
		cout<<"Nao e um triangulo"<<endl;
	}
	
return 0;
}
