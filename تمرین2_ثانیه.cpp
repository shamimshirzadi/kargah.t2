#include<iostream>
#include<string>

using namespace std;
int main() 
{
	
    int zaman = 0, daghighe =0 , sanie =0, saat=0;


	cout << "vared kon zamano be sanie ";
	cin >> zaman;

	saat= zaman / 3600;
	
    zaman = zaman % 3600;
	
    daghighe = zaman / 60;

	zaman= zaman % 60;
	
    sanie= zaman;
	
    cout  << "zaman:" << saat << ":"
		<< daghighe << ":" << sanie ;
	
    system("pause");

}