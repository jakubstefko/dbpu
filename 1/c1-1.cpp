#include <iostream>

using namespace std;

int main(){
	int abc[10];
	int def[10];

	for(int i=0;i<30;i++) abc[i]=i;
	abc[0]++;
	for(int i=0;i<10;i++) cout << def[i] << endl;
}