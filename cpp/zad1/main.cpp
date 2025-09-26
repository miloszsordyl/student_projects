#include <iostream>

using namespace std;

int main(){
	char x='e';
	int y = 0;
	int z= 0;
	while(x!='n'){
		cout<<"podaj liczbę: "<<endl;
		cin>>z;
		if(z>=0){
			y=y+z;
			cout<<"czy dodać następną liczbę?((t)ak/(n)ie)"<<endl;
			cin>>x;
		}else{
			cout<<"nie podawaj liczb mniejszych od 0!"<<endl;
		}
	}
	cout<<"suma wynosi: "<<y<<endl;
	return 0;
}
