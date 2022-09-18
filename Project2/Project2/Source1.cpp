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
		r += "�����";
		break;
	case 2:
		r += "�����";
		break;
	case 3:
		r += "������";
		break;
	}
	return r;
}
string tishi(int i) {
	string t = "";
	switch (i)
	{
	case 1:
		t += "������ ";
		break;
	case 2:
		t += "������ ";
		break;
	case 3:
		t += "����� ";
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
		chislo += "��� ";
		break;
	case 2:
		chislo += "������ ";
		break;
	case 3:
		chislo += "������ ";
		break;
	case 4:
		chislo += "��������� ";
		break;
	case 5:
		chislo += "������� ";
		break;
	case 6:
		chislo += "�������� ";
		break;
	case 7:
		chislo += "������� ";
		break;
	case 8:
		chislo += "��������� ";
		break;
	case 9:
		chislo += "��������� ";
		break;
	}
	switch ((x / 10) % 10) {
	case 0:
		chislo += "";
	case 1:
		switch (x % 100)
		{
		case 10:
			chislo += "������ ";
			break;
		case 11:
			chislo += "���������� ";
			break;
		case 12:
			chislo += "���������� ";
			break;
		case 13:
			chislo += "���������� ";
			break;
		case 14:
			chislo += "������������ ";
			break;
		case 15:
			chislo += "���������� ";
			break;
		case 16:
			chislo += "�����������";
			break;
		case 17:
			chislo += "���������� ";
			break;
		case 18:
			chislo += "������������ ";
			break;
		case 19:
			chislo += "������������ ";
			break;
		};
		break;
	case 2:
		chislo += "�������� ";
		break;
	case 3:
		chislo += "�������� ";
		break;
	case 4:
		chislo += "����� ";
		break;
	case 5:
		chislo += "��������� ";
		break;
	case 6:
		chislo += "���������� ";
		break;
	case 7:
		chislo += "��������� ";
		break;
	case 8:
		chislo += "����������� ";
		break;
	case 9:
		chislo += "��������� ";
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
				chislo += "���� ";
			}
			else {
				chislo += "���� ";
			}
			i = 1;
			break;
		case 2:
			if (y / 1000 != 0) {
				chislo += "��� ";
			}
			else {
				chislo += "��� ";
			}
			break;
		case 3:
			chislo += "��� ";
			i = 2;
			break;
		case 4:
			chislo += "������ ";
			i = 2;
			break;
		case 5:
			chislo += "���� ";
			break;
		case 6:
			chislo += "����� ";
			break;
		case 7:
			chislo += "���� ";
			break;
		case 8:
			chislo += "������ ";
			break;
		case 9:
			chislo += "������ ";
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