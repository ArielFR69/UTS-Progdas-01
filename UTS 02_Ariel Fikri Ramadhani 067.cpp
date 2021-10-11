#include <iostream>
#include <conio.h>
using namespace std;

main (){
	int cus, lmb, hrg, byr;


	//Intro
    cout<<"--------------------------------------"<<endl;
    cout<<"           Fotokopi Grafity           "<<endl;
    cout<<"--------------------------------------"<<endl;

	//Data Input
	cout<<"Apakah anda pelanggan/member Grafity Fotocopy? (0=tidak 1=iya) ="; cin>>cus;
	cout<<"Berapa lembar yang akan difotocopykan ="; cin>>lmb;
	cout<<endl<<endl;

	//Operation
	if(cus==1){
		hrg=75;
		byr=lmb*hrg;
	}
	else if(cus==0 && lmb<=100){
		hrg=150;
		byr=lmb*hrg;
	}
	else if(cus==0 && lmb<=100 && lmb==100 && lmb>=100){
		hrg=100;
		byr=lmb*hrg;
	}
	else if(cus==0 && lmb>=200){
		hrg=80;
		byr=lmb*hrg;
	}

	//Output Result
	if(cus==0){
		cout<<"Apakah anda pelanggan? = Tidak"<<endl;
	}
	else if(cus==1){
		cout<<"Apakah dia pelanggan? = Iya"<<endl;
	}


	cout<<"Banyak Fotocopy="<<lmb<<endl;
	cout<<"Harga Per Lembar="<<hrg<<endl;
	cout<<"Yang Harus Dibayarkan="<<byr<<endl;

	getch ();
	return 0;
}
