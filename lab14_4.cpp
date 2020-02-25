#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b, int &c, int &d){
//Write definition of shuffle() here 
    int *g[] = {&a, &b,  &c, &d};
	for(int i = 0;i<10;i++){
		int k = rand()%4;
		int j = rand()%4;
		int x = *g[k];
		*g[k] = *g[j];
		*g[j] = x;
}
}