#include <iostream>

using namespace std;

int main(){
	cout<<"podaj wiek"<<endl;
	int x;
	cin>>x;
	cout<<"podaj wiek nastepnej osoby"<<endl;
	int y;
	cin>>y;
	if(x>y){
		cout<<"pierwsza osoba jest starsza"<<endl;
		}else{
			if(y>x){
				cout<<"druga osoba jest starsza"<<endl;
				}else{
				cout<<"rowno"<<endl;
				}
	return 0;
}
