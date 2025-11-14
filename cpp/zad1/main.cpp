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
	}else{
	 pliczek<<imie<<" ";
	pliczek<<nazwisko;
	pliczek.close();
	}
 cout<<"czy chcesz coś dopisać?";
 string odpowiedz;
 cin>>odpowiedz;
 fstream publiczek("pliczek.txt", ios::app | ios::out);
	if(odpowiedz=="tak"){
	cout<<"wpisz co chcesz napisać\n";
	cin>>odpowiedz;
	publiczek<<odpowiedz;
	publiczek.close();
	}
}
