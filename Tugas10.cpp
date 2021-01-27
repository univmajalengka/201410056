//GajiBersih
#include <iostream>
#include <string>

using namespace std;

const float persentunjangan =0.2;
const float persenpajak =0.15; 

int main ()
{
	string namakaryawan;
	float gajibersih, gajipokok, pajak, tunjangan;

	cout<<"Program Take Home Pay"<<endl;

	cout<<"Masukan Nama Karyawan : ";
	getline(cin,namakaryawan);

	cout<<"Masukan Gaji Pokok : Rp. ";
	cin>>gajipokok;

	tunjangan=persentunjangan * gajipokok;
	pajak=persenpajak * gajipokok;
	gajibersih=gajipokok + tunjangan - pajak;
	cout<<"==================================="<<endl;
	cout<<"Gaji Bersih"<<endl;
	cout<<"==================================="<<endl;
	cout<<"Nama Karyawan: "<<namakaryawan<<endl;
	cout<<"Gaji Bersih: Rp. "<<gajibersih;

	return 0;
}
