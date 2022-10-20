#include <iostream>
#include <string>
using namespace std;

 class computador
 {	public:
 	string nome = "IBM";
 		
 };

class novo_computador: public computador {
	string nome2 = "Mac";
	
};


int main()
{
	novo_computador meuComp;
	cout << meuComp.nome;
	
	
	return 0;
}