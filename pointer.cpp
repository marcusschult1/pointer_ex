// pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>

using namespace std;

int main()
{
	int val = 4711;
	int* pval = &val;

	cout << "pointer addressse: " << pval << endl;
	cout << "Inhalt: " << *pval << endl;

	(*pval)++;	//Wert erhöht
	cout << "pointer addressse: " << pval << endl;
	cout << "Inhalt: " << *pval << endl;

	*pval++;	//Adresse erhöht -> hier nicht ok 
	cout << "pointer addressse: " << pval << endl;
	cout << "Inhalt: " << *pval << endl;

	pval++;//Adresse erhöht
	cout << "pointer addressse: " << pval << endl;
	cout << "Inhalt: " << *pval << endl;

	//int* ptr = nullptr;
	//cout << "Nullpointer: " << *ptr << endl;

	int i = 7;
	int* pint = nullptr;
	int** ppint = nullptr;
	// verketten

	pint = &i;
	ppint = &pint;

	//i erhöhen
	cout << "erhöhe i = " << i << endl;
	i++;
	cout << "i = " << i << endl;
	(*pint)++;
	cout << "i = " << i << endl;
	(**ppint)++;
	cout << "i = " << i << endl;

	cout << "Adresse von i: " << pint << endl;
	cout << "Adresse von i: " << *ppint << endl;

	// speicheranforderung zur laufzeit
	int* pNum = nullptr;
	pNum = new(nothrow) int; // nothrow liefert nullptr statt exception
	assert(pNum != nullptr);// Bedingungsprüfung, liefert Meldung

	if (pNum != nullptr) {		//gutfall : speicher erhalten
		*pNum = 7;				// den wert 7 in die neue Speicherzelle

		cout << *pNum << endl;

		delete pNum;			//speicher freigeben, pointer auf null
		pNum = nullptr;
	}








	return 0;
}

