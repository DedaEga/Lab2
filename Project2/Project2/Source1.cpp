#include <iostream>
using namespace std;

string rubli(int i) {
	string r = "";
	switch (i)
	{
	case 0:
		r += "";
		break;
	case 1:
		r += "рубль";
		break;
	case 2:
		r += "рубл€";
		break;
	case 3:
		r += "рублей";
		break;
	}
	return r;
}
string tishi(int i) {
	string t = "";
	switch (i)
	{
	case 1:
		t += "тыс€ча ";
		break;
	case 2:
		t += "тыс€чи ";
		break;
	case 3:
		t += "тыс€ч ";
		break;
	}
	return t;
}

string chisla(int y) {
	string chislo = "";
	int i = 3;
	int x;
	if (y / 1000 != 0) {
		x = y / 1000;
	}
	else {
		x = y;
	}
	switch (x / 100) {
	case 0:
		chislo += "";
		break;
	case 1:
		chislo += "сто ";
		break;
	case 2:
		chislo += "двести ";
		break;
	case 3:
		chislo += "триста ";
		break;
	case 4:
		chislo += "четыреста ";
		break;
	case 5:
		chislo += "п€тьсот ";
		break;
	case 6:
		chislo += "шестьсот ";
		break;
	case 7:
		chislo += "семьсот ";
		break;
	case 8:
		chislo += "восемьсот ";
		break;
	case 9:
		chislo += "дев€тьсот ";
		break;
	}
	switch ((x / 10) % 10) {
	case 0:
		chislo += "";
	case 1:
		switch (x % 100)
		{
		case 10:
			chislo += "дес€ть ";
			break;
		case 11:
			chislo += "одиннацать ";
			break;
		case 12:
			chislo += "двенадцать ";
			break;
		case 13:
			chislo += "тринадцать ";
			break;
		case 14:
			chislo += "четырнадцать ";
			break;
		case 15:
			chislo += "п€тнадцать ";
			break;
		case 16:
			chislo += "шестнадцать";
			break;
		case 17:
			chislo += "семнадцать ";
			break;
		case 18:
			chislo += "восемнадцать ";
			break;
		case 19:
			chislo += "дев€тнадцать ";
			break;
		};
		break;
	case 2:
		chislo += "двадцать ";
		break;
	case 3:
		chislo += "тридцать ";
		break;
	case 4:
		chislo += "сорок ";
		break;
	case 5:
		chislo += "п€тьдес€т ";
		break;
	case 6:
		chislo += "шестьдес€т ";
		break;
	case 7:
		chislo += "семьдес€т ";
		break;
	case 8:
		chislo += "восемьдес€т ";
		break;
	case 9:
		chislo += "дев€носто ";
		break;
	}
	if (((x / 10) % 10) == 1) {
		cout << "";
	}
	else {
		switch (x % 10) {
		case 0:
			chislo += "";
			break;
		case 1:
			if (y / 1000 != 0) {
				chislo += "одна ";
			}
			else {
				chislo += "один ";
			}
			i = 1;
			break;
		case 2:
			if (y / 1000 != 0) {
				chislo += "две ";
			}
			else {
				chislo += "два ";
			}
			break;
		case 3:
			chislo += "три ";
			i = 2;
			break;
		case 4:
			chislo += "четыре ";
			i = 2;
			break;
		case 5:
			chislo += "п€ть ";
			break;
		case 6:
			chislo += "шесть ";
			break;
		case 7:
			chislo += "семь ";
			break;
		case 8:
			chislo += "восемь ";
			break;
		case 9:
			chislo += "дев€ть ";
			break;
		}
	}
	if (y / 1000 != 0) {
		chislo += tishi(i) + chisla(y % 1000);
	}
	else {
		chislo += rubli(i);
	}
	return chislo;
}
int main() {
	setlocale(LC_ALL, "Rus");
	int a;
	string b;
	cin >> a;
	b = chisla(a);
	b[0] -= 32;
	cout << b;
}