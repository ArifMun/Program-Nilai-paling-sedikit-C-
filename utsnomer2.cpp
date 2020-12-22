#include <iostream>
using namespace std;
int main(){
	int jumlah,angka[1000],total[1000],k=10,x=0,low[1000];

	cout<<"Masukkan Jumlah Angka : ";cin>>jumlah;
	for(int a=0; a<jumlah; a++){
		cout<<"Masukkan Angka : ";cin>>angka[a];
	}

	for(int a=0; a<jumlah; a++){
		total[a]=0;
		for(int b=0; b<jumlah; b++){
			if(angka[a]==angka[b]){
				total[a]++;
			}
		}
	}

	for(int a=0; a<jumlah; a++){
		if(total[a]<k){
			k=total[a];
		}
	}

	for(int a=0; a<jumlah; a++){
		if(x==0){
		low[x]=0;}
		else{
		low[x]=low[x-1];}

		if(total[a]==k){
			if(angka[a]!=low[x]){
				low[x]=angka[a];
				x++;
			}
		}
	}

	int y=0;
	for(int a=0; a<jumlah; a++){
		if(total[a]==k){
			y++;
		}
	}
	if(y==jumlah){
		x=0;
	}

	if(x==0){
		cout<<"\nTidak ada nilai Paling sedikit"<<endl;
	}else{
		for(int a=0; a<x; a++){
			if(x>1){
				for(int t=0; t<=x; t++){
				}cout<<"\nNilai Paling Sedikit = ";
			}else{
				cout<<"\nNilai Paling Sedikit hanya 1 =";
			}cout<<low[a];
		}
	}
    return 0;
}

