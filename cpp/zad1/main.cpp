#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
int suma=0;
string linia;
int liczba=0;
 ifstream pliczek("pliczek.txt");
	if(pliczek.is_open()){	
		while(getline(pliczek,linia){
		if(linia.size()>0){suma+=stoi(linia);}
		}
	}
pliczek.close();
cout<<"suma to: "<<suma<<endl;
}
