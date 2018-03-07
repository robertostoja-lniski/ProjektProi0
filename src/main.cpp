#include <iostream>
#include <string>
using namespace std;

double wczytaj(string s) {
	
	double a;
	while(true) {
		cout << s << endl;
		cin >> a;
		if(cin)
			break;		
		cin.clear();
		cin.ignore(256, '\n');
	}
	return a;
}
class dodawanie {

	private : 
		double a,b;
	public :
		dodawanie(double l1, double l2) {
			a=l1;
			b=l2;
		}
	
		double getResult() {
			return  a + b;
		}

};
int main() {
	
	double a =wczytaj("Podaj pierwsza liczbe");
	double b =wczytaj("Podaj druga liczbe");
	
	dodawanie* wynik = new dodawanie(a,b);
	cout <<  wynik -> getResult();
	
    return 0;
}
   
