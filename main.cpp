#include <iostream>
#include <stdio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	int a[5];
//	n = 9;
//	p = new int[n];
//	
//	struct Node {
//		char *nome;
//		int idade;
//		Node (char *n = "", int a = 0 {
//			nome = strdup (n);
//			idade = a;
//			
//		})
//	};
//	Node node1("Roger", 20), node2(node1);
//	strcpy(node2.nome, "Wendy");
//	node2.idade = 30;
	struct Node {
		char *nome;
		int idade;
		Node (char *n = 0, int a = 0) {
			nome = strdup(n);
			idade = a;
		}
		Node (const Node& n) {//construtor de copia
			nome = strdup (n.nome);
			idade = n.idade;
		}
	};
	Node node1("Roger", 20), node2(node1);
	strcpy(node2.nome, "Wendy");
	node2.idade = 30;
	
	
	//Realizando sobrecarga
//	Node& operator = (const Node& n ){
//		if(this != &n) { // Sem atribuição para ele proprio
//			if(nome != 0)
//				free(nome);
//			nome = strdup (n.nome);
//			idade = n.idade;
//		}
//		return *this;
//	}
	//DESTRUTOR 
//	~Node () {
//		if(nome != 0)
//			free(nome);
//	}
	return 0;
}
