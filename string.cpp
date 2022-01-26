#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string pozdrav = "Mount Everest";
	string samohlasky = "aeiouyAEIOUY";
	string spoluhlasky = "bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ";
	string cisla = "0123456789";
	string text = "Mount Everest";
	string znaky = " ";

	
	cout << "sprava: " << pozdrav << endl;
	unsigned int dlzka = pozdrav.length();
    pozdrav.length();
	int pocitadlosamohlasok = 0;
	int pocitadlospoluhlasok = 0;
	int pocitadlocisel = 0;
	int pocitadloznakov = 0;

	for (int i = 0; i < text.length(); i++) {

		//samohlasky
		if (samohlasky.find(text[i]) < samohlasky.length()) {
			pocitadlosamohlasok++;
		}

		//spoluhlasky
		if (spoluhlasky.find(text[i]) < spoluhlasky.length()) {
			pocitadlospoluhlasok++;
		}

		//cisla
		if (cisla.find(text[i]) < cisla.length()) {
			pocitadlocisel++;
		}

		//znaky
		if (znaky.find(text[i]) < znaky.length()) {
			pocitadloznakov++;
		}
	}
	cout << "pocet samohlasok: " << pocitadlosamohlasok << endl;
	cout << "pocet spoluhlasok: " << pocitadlospoluhlasok << endl;
	cout << "pocet cisel: " << pocitadlocisel << endl;
	cout << "pocet znakov: " << pocitadloznakov << endl;
	return 0;






}