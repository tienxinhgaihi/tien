#include <iostream>

using namespace std;

int main()
{
	float sodien, sotien;
	cout << "nhap so dien: ";
	cin >> sodien;
	while(true)
	{
		if(sodien>0 and sodien<=100)
	{
		sotien = sodien * 2000;
		cout << "so tien dien la: " << sotien << endl;
		return 0;
	}
	
	if(sodien>100 and sodien<=200)
	{
		sotien = (100 * 2000) + (sodien -100) * 2500; 
		cout << "so tien dien la: " << sotien << endl;
		return 0;
	}
	
	if(sodien>200 and sodien<=300)
	{
		sotien = (100 * 2000) + (100 * 2500) * (sodien - 200) * 3000;
		cout << "so tien dien la: " << sotien << endl;
		return 0;
	}
	
	if(sodien > 300)
	{
		sotien = (100 * 2000) + (100 * 2500) + (100 * 3000) + (sodien - 300) * 5000;
		cout << "so tien dien la: " << sotien << endl;
		return 0;
	}
	if(sodien < 0)
		{
			cout << "moi nhap lai: ";
			cin >> sodien;
		}
	}
	
}