#include <iostream>
using namespace std;

int main(){
	int x=5;
	int y=10;
	
	cout <<"\nbook = " << (++y%x);
	cout <<"\npan =" << (y/x);
    cout <<"\ncolor = "<< x*y;
	cout <<"\nbord = "<< (y+y-x);
	cout <<"\nback = "<< (y*10);
	return 0;
}
