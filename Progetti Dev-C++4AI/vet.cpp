#include <iostream>
#include <string>
using namespace std;

class vettore{
	int v[10];
	int n;
	public:
		void carica(int l, string s){
			n = l;
			for(int i = 0; i < n; i++){
				cout << "\n" << s << " " << i + 1 << "\t";
				cin >> v[i];
			}
		}
		
		void inserisci(int el, int pos){
			int i; 
			n++;
			for(int i = 0, i > pos; i--)
				v[i] = v[i - l];
			v[pos] = el;
		}
		
		int max_pos(){
			int i, p = 0, max = v[0];
			for(i = l; i < n; i++)
				if(v[i] > max){
					max = v[i];
					p = i;
				}
			return (p);
		}
		
		float media(){
			int i;
			float s = 0;
			
			for(i = 0; i < n; i++)
		}
};
