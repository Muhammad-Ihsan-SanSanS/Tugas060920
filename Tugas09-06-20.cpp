#include <iostream>
using namespace std;

int prima (int m, int n){ 
	if (n == 1) { 
		return 1; 
	} 
	else if (m % n == 0) { 
		return 1 + prima(m, --n); 
		} else { 
		return 0 + prima(m, --n); 
	} 
}
  
int cek(int m){ 
	if (m > 1) { 
		return (prima(m, m) == 2);
	} 
	else 
		return false; 
}

int main(){
	
	int m;
	cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout << "||| Masukkan untuk Mengetahui Bilangan Prima atau Bukan |||"<<endl;
	cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout <<endl << "Masukkan Bilangan => ";
	cin >> m;

	if (cek(m)){
		cout <<m << " Adalah Bilangan Prima" <<endl;
	} else {
		cout <<m << " Bukan Bilangan Prima" <<endl;
	}
	return 0;
} 
