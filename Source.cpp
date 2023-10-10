#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int b, k;;
	int broj = 1;


	cout << "Vnesi ja vrednosta na b : ";

	cin >> b;


	while (broj <= b)
	{
	    
		cout << "\n" << setw(3) << broj << " " << b - broj + 1;
		broj++;
	
	}

		


	cin.get(); cin.get();

	return 0;



}