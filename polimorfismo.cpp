class Clasee1 {
	public:
		virtual void f() {
			cout << "Função f() na classe 1\n";
		}
};
class Clasee2 {
	public:
		virtual void f() {
			cout << "Função f() na classe 2\n";
		}
		void g() {
			cout << "Função g() na classe 2\n";
		}
};
class Clasee3 {
	public:
		virtual void h() {
			cout << "Função h() na classe 3\n";
		}
};
int main() {
	Classe1 objeto1, *p;
	Classe2 objeto12;
	Classe3 objeto3;
	p = &objeto1;
	p->f();
	p->g();
	p = (Classe1*) &objeto2;
	p->f();
	p->g();
	p = (Classe1*) &objeto3;
	p->f(); //Possível termino anormal do programa;
	p->g();
	// p->h(); // h() não e um membro da Classe1;
	return 0;
}
