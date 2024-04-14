#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector <vector<int>> grafo;
	
	// nodos y aristas
	int n, m;
	cin >> n >> m;
	
	grafo.resize(n);
	
	for(int i = 0; i < m; i++){
		
		int a, b;
		cin >> a >> b;
		
		grafo[a-1].push_back(b);
		//grafo[b-1].push_back(a);
	}
	
	for(int i = 0; i < grafo.size(); i++){
		
		cout << i + 1 << ": ";
		
		for(int j = 0; j < grafo[i].size(); j++){
			
			cout << grafo[i][j] << " ";
		}
		
		cout << endl;
	}
	
	return 0;
}