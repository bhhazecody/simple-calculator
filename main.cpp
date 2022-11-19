#include <Windows.h>
#include <iostream>
#include "imcons.h"

using namespace std;

bool beeps = true;

void add()
{

}

void beep()
{
	if (beeps == true)
	{
		Beep(300, 300);
	}

	if (beeps == false)
	{

	}
}

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	TCHAR name[UNLEN + 1];
	DWORD size = UNLEN + 1;
	SetConsoleTitleA("codys calculator");
	system("color b");

	cout << ("h");
	Sleep(100);
	cout << ("e");
	Sleep(100);
	cout << ("l");
	Sleep(100);
	cout << ("l");
	Sleep(100);
	cout << ("o");
	Sleep(100);
	cout << (" ");
	Sleep(100);
	cout << ("t");
	Sleep(100);
	cout << ("h");
	Sleep(100);
	cout << ("e");
	Sleep(100);
	cout << ("r");
	Sleep(100);
	cout << ("e ");
	Sleep(100);

	cout << (name);

	cout << (" l");
	Sleep(100);
	cout << ("a");
	Sleep(100);
	cout << ("s");
	Sleep(100);
	cout << ("t");
	Sleep(100);
	cout << (" ");
	Sleep(100);
	cout << ("u");
	Sleep(100);
	cout << ("p");
	Sleep(100);
	cout << ("d");
	Sleep(100);
	cout << ("a");
	Sleep(100);
	cout << ("t");
	Sleep(100);
	cout << ("e");
	Sleep(100);

	std::cout << (" ") << __DATE__ << " : " << __TIME__;
	Beep(300, 300);

	cout << ("\n\n\n [1] enable beeps\n");
	Sleep(100);
	cout << " [2] disable beeps\n\n  > ";
	int choice;
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		beeps = true;
		system("cls");
		std::cout << ("beeps are on...");
		Sleep(1350);
		system("cls");
		break;

	case 2:
		beeps = false;
		system("cls");
		std::cout << ("beeps are off...");
		Sleep(1350);
		system("cls");
		break;
	}

	addor_:
	cout << ("\n [1] multiplacation\n");
	Sleep(100);
	cout << " [2] division\n";
	Sleep(100);
	cout << " [3] addition\n";
	Sleep(100);
	cout << " [4] subtraction\n";
	Sleep(100);
	cout << " [5] other options\n\n   > ";
	Sleep(100);
	int choicee;
	std::cin >> choicee;
	switch (choicee)
	{
	case 1:
		system("cls");
		int x1, y1;
		int sum1;
		cout << "\n\n [1] first number: ";
		cin >> x1;
		Sleep(100);
		cout << " [2] second number: ";
		cin >> y1;
		sum1 = x1 * y1;
		cout << "\n answer is: " << sum1 << "\n\n";
		if (beeps == true)
		{
			Beep(300, 300);
			goto addor_;
		}

		if (beeps == false)
		{

		}
		break;

	case 2:
		system("cls");
		int x2, y2;
		int sum2;
		cout << "\n\n [1] first number: ";
		cin >> x2;
		Sleep(100);
		cout << " [2] second number: ";
		cin >> y2;
		sum2 = x2 / y2;
		cout << "\n answer is: " << sum2 << "\n\n";
		if (beeps == true)
		{
			Beep(300, 300);
			goto addor_;
		}

		if (beeps == false)
		{

		}
		break;

	case 3:
		system("cls");
		int x3, y3;
		int sum3;
		cout << "\n\n [1] first number: ";
		cin >> x3;
		Sleep(100);
		cout << " [2] second number: ";
		cin >> y3;
		sum3 = x3 + y3;
		cout << "\n answer is: " << sum3 << "\n\n";
		if (beeps == true)
		{
			Beep(300, 300);
			goto addor_;
		}

		if (beeps == false)
		{

		}
		break;

	case 4:
		system("cls");
		int x4, y4;
		int sum4;
		cout << "\n\n [1] first number: ";
		cin >> x4;
		Sleep(100);
		cout << " [2] second number: ";
		cin >> y4;
		sum4 = x4 - y4;
		cout << "\n answer is: " << sum4 << "\n\n";
		beep();
		goto addor_;
		break;

	case 5:
		system("cls");
		int cleanorr;
		system("cls");
		std::cout << ("\n [1] clear consle\n");
		Sleep(150);
		cout << " [2] change consle color\n  > ";
		beep();
		cin >> cleanorr;
		switch (cleanorr)
		{
		case 1:
			system("cls");
			beep();
			goto addor_;
			break;

		case 2:
			int cleanorr;
			system("cls");
			Sleep(100);
			std::cout << ("\n [1] red\n");
			Sleep(100);
			cout << " [2] green\n";
			Sleep(100);
			cout << " [3] aqua\n";
			Sleep(100);
			cout << " [4] blue\n";
			Sleep(100);
			cout << " [5] white\n\n  > ";
			Sleep(100);
			beep();
			cin >> cleanorr;
			switch (cleanorr)
			{
			case 1:
				system("color 4");
				system("cls");
				cout << "\n\n\n  successfully set consle text color to red.";
				beep();
				goto addor_;
				Sleep(1500);
				system("cls");
				goto addor_;
				break;

			case 2:
				system("color 2");
				system("cls");
				cout << "\n\n\n  successfully set consle text color to green.";
				beep();
				goto addor_;
				Sleep(1500);
				system("cls");
				goto addor_;
				break;

			case 3:
				system("color b");
				system("cls");
				cout << "\n\n\n  successfully set consle text color to aqua.";
				beep();
				goto addor_;
				Sleep(1500);
				system("cls");
				goto addor_;
				break;

			case 4:
				system("color 1");
				system("cls");
				cout << "\n\n\n  successfully set consle text color to blue.";
				beep();
				goto addor_;
				Sleep(1500);
				system("cls");
				goto addor_;
				break;

			case 5:
				system("color 7");
				system("cls");
				cout << "\n\n\n  successfully set consle text color to white.";
				beep();
				goto addor_;
				Sleep(1500);
				system("cls");
				goto addor_;
				break;


			}


			break;
		}
		break;
	}
	
}