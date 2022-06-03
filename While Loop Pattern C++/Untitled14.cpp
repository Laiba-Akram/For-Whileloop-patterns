#include<iostream>
using namespace std;
int main(){
	int row=1, col=1, star=1;
	int n=5;
	int count=1;
	while(row<=n){
		col=1;
		while(col<=(n+1-row)){
			cout<<col<<"";
			col++;
					}
					star=1;
					while(star<=(2*n-(n+1-row)*2)){
						cout<<"*"<<"";
						star++;
					}
					col=--col;
					while(col>=1){
					cout<<col<<"";
					col--;
					}	cout<<endl;
						row++;

}
}
