#include <iostream>
#include "Str.h"

using namespace std;

int main(int argc, char * argv[])
{
	Str a("Amandier");
	Str b("Baobab");
	Str c("Chataigner");

	cout << "==============" << endl;
	cout << " IIIIIIIIIIIIIIIIIIIIIIIIIIIIIICCCCCCCCCCCCCCCCCCCCCCCIIIIIIIIIIIIIIII" << endl;
	Str test = "COUCOU";
	cout << "==============" << endl;

	cout << "==============" << endl;
	a.concat4(c).print();
	cout << "==============" << endl;
	
	Str u(a.concat4(b));
	cout << "==============" << endl;
	u.print();
	cout << "==============" << endl;

	// CETTE CONSTRUCTION FAIT APPELLE
	// AU CONSTRUCTEUR PAR RECOPIE
	cout << "==============" << endl;
	Str z = a.concat4(c);
	z.print();
	cout << "==============" << endl;

	Str e = a + b;
	cout << "==============" << endl;
	e.print();
	cout << "a < a + b ??? " << (a < e) << endl;
	cout << "==============" << endl;

	Str y = "GULDAN " + b;
	cout << "==============" << endl;
	y.print();
	cout << "==============" << endl;

	Str d = c + " GRILLE";
	cout << "==============" << endl;
	d.print();
	cout << "==============" << endl;
	/*
	Str f = "POISSON" + " GRILLE";
	cout << "==============" << endl;
	d.print();
	cout << "==============" << endl;
	*/

	a = b = c;
	cout << "==============" << endl;
	cout << "APRES A = B = C" << endl;
	a.print();
	cout << "==============" << endl;
	/*
	a.operator=(b.operator=(c))
	*/
	cout << "==============" << endl;
	cout << "AFFICHAGE APRES REDEF DE << : " << a << endl;;
	cout << "==============" << endl;
	return 0;
}