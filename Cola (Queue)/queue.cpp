#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	queue <string> fila;
	
	// front(), back(), push(), pop(), size(), empty(),
	
	fila.push("Paco");
	fila.push("Hugo");
	fila.push("Luis");
	

	fila.pop();
	fila.pop();
	
	cout << fila.empty();
	
	cout << endl;
	
	fila.pop();
	
	cout << fila.empty();
	
	/*
	cout << fila.front();
	cout << endl;
	cout << fila.back();
	*/
	
	return 0;
}