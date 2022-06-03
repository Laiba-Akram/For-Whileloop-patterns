#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int row =1;
	int count=1;
	while(row<=n){
		int col=1;

		while(col<=n){	char start='A';	
			cout<<(char)(start+count++ -1);
			
			col++;
		}
		cout<<endl;
		row++;
	}
}
