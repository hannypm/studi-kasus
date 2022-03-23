#include<iostream>
using namespace std;
int main()
{
	int totalHarga,jumlahGrngBkr,hitung,answer;
	int jumlahPesananGrng,totalHrgGrng,ayamGoreng=17000;
	int jumlahPesananBakar,totalHrgBkr,ayamBakar=21000;
	float diskon=10,potongan;
	string pesananAyamGoreng="ayam goreng";
	string pesananAyamBakar="ayam bakar";
	cout<<" -----------------------------"<<endl;
	cout<<"| kedai ayam bakar dan goreng |"<<endl;
	cout<<"|      jl.jend sudirman       |"<<endl;
	cout<<"|         yogyakarta          |"<<endl;
	cout<<" -----------------------------"<<endl;

	cout<<"pesanan\t\t: "<<pesananAyamGoreng<<endl;
	cout<<"harga\t\t: "<<ayamGoreng<<endl;
	cout<<"jumlah pesanan\t: x";
	cin>>jumlahPesananGrng;
	totalHrgGrng=ayamGoreng*jumlahPesananGrng;
	cout<<"jumlah harga\t: "<<totalHrgGrng<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"pesanan\t\t: "<<pesananAyamBakar<<endl;
	cout<<"harga\t\t: "<<ayamBakar<<endl;
	cout<<"jumlah pesanan\t: x";
	cin>>jumlahPesananBakar;
	totalHrgBkr=ayamBakar*jumlahPesananBakar;
	cout<<"jumlah harga\t: "<<totalHrgBkr<<endl;
	cout<<"======================================================"<<endl;
	cout<<"                      struk pembelian                 "<<endl;
	cout<<"======================================================"<<endl;
	cout<<"| "<<" menu pesanan "<<"| "<<" Harga "<<" | "<<" jumlah pesanan "<<"| "<<" jumlah Harga "<<"|"<<endl;
	
	cout<<"|  "<<pesananAyamGoreng<<"  |  "<<ayamGoreng<<"  |        "<<jumlahPesananGrng<<"        |      "<<totalHrgGrng<<"    |"<<endl;
	cout<<"|  "<<pesananAyamBakar<<"   |  "<<ayamBakar<<"  |        "<<jumlahPesananBakar<<"        |      "<<totalHrgBkr<<"    |"<<endl;
	jumlahGrngBkr=totalHrgGrng+totalHrgBkr;
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<"|   "<<"jumlah"<<"\t\t\t\t    |      "<<jumlahGrngBkr<<"     |"<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	if (jumlahGrngBkr>45000)
	{	
		cout<<"|anda mendapat potongan 10% karna pembelian anda >Rp45.000  |"<<endl;
		cout<<"------------------------------------------------------------"<<endl;
		potongan = (diskon/100)*jumlahGrngBkr;
		totalHarga = jumlahGrngBkr-potongan;
		cout<<"|  TOTAL HARGA "<<"\t\t\t\t    |      "<<totalHarga<<"    |"<<endl;
			cout<<" ============================================================"<<endl;
		cout<<"|                   T E R I M A  K A S I H                   |"<<endl;
		cout<<" ============================================================"<<endl;
	}
	else
	{
		cout<<"|anda tidak dapat potongan karna pembelian <Rp 45.000        |"<<endl;
		cout<<"--------------------------------------------------------------"<<endl;
		cout<<"|  TOTAL HARGA "<<"\t\t\t\t    |      "<<jumlahGrngBkr<<"     |"<<endl;
		cout<<" ============================================================"<<endl;
		cout<<"|                   T E R I M A  K A S I H                   |"<<endl;
		cout<<" ============================================================"<<endl;
		
	}
	
	
	
	
	
	return 0;
}
