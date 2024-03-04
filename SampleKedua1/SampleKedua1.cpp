

#include <iostream>
using namespace std;

int main()
{
	
	srand(time(0));
	string status;
	int nBilA, nBilB;

	nBilA = rand() % 11;
	nBilB = rand() % 11;

	if (nBilA == nBilB) {
		status = "Bilangan A sama dengan Bilangan B";
	}

	else if (nBilA > nBilB) {
		status = "Bilangan A lebih besar dari Bilangan B";
	}
	else
	{
		status = "Bilangan A lebih kecil dari Bilangan B";
	}

	cout << "Bilangan A =" << nBilA << endl;
	cout << "Bilangan B =" << nBilB << endl;
	cout << "Status Bilangan =" << status << endl;

}


