#include <iostream>
#include <fstream>
using namespace std;

int main(){
 string imie;
 cout<<"podaj imie"<<endl;
 cin>>imie;
 string nazwisko;
 cout<<"podaj nazwisko"<<endl;
 cin>>nazwisko;
 ofstream pliczek("pliczek.txt", ios::trunc);
	 if(!pliczek.is_open()){
	cout<<"pliczek nie otwarty";
	}
 pliczek<<imie," ";
pliczek<<nazwisko;
pliczek.close();
}
