#include <iostream>
#include <windows.h>
using namespace std;

void Point(int x, int y)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD point;
	point.X = x;
	point.Y = y;
	SetConsoleCursorPosition(h, point);
}

void CursorInfo()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = false;
	cursor.dwSize = 1;
	SetConsoleCursorInfo(h, &cursor);
}
void Card(int suit, int value)
{
	CursorInfo();
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	int width = 11;
	int height = 11;

	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			SetConsoleTextAttribute(h, 14);
			cout << (char)178;
		}
		cout << "\n";
	}

	int color = 0;
	if (suit == 1 || suit == 2)
		color = 4;
	else if (suit == 3 || suit == 4)
		color = 0;

	char lear = (char)(2 + suit);

	SetConsoleTextAttribute(h, (14 << 4 | color));

	if (value >= 2 && value < 10)
	{
		Point(1, 1);
		cout << value << lear;
		Point(8, 9);
		cout << value << lear;
	}

	if (value == 3 || value == 5 || value == 7 || value == 9 || value == 11 || value == 12 || value == 13 || value == 14)
	{
		Point(5, 5);
		cout << lear;
	}


	if (value == 2 || value == 3)
	{
		Point(5, 2);
		cout << lear;
		Point(5, 8);
		cout << lear;
		Sleep(100000);
	}
	else if (value == 4 || value == 5)
	{
		Point(3, 3);
		cout << lear;
		Point(7, 3);
		cout << lear;
		Point(3, 7);
		cout << lear;
		Point(7, 7);
		cout << lear;
		Sleep(100000);
	}
	else if (value == 6 || value == 7)
	{
		Point(3, 3);
		cout << lear;
		Point(7, 3);
		cout << lear;
		Point(3, 5);
		cout << lear;
		Point(7, 5);
		cout << lear;
		Point(3, 7);
		cout << lear;
		Point(7, 7);
		cout << lear;
		Sleep(100000);
	}
	else if (value == 8)
	{
		Point(3, 3);
		cout << lear;
		Point(7, 3);
		cout << lear;
		Point(3, 5);
		cout << lear;
		Point(5, 4);
		cout << lear;
		Point(5, 6);
		cout << lear;
		Point(7, 5);
		cout << lear;
		Point(3, 7);
		cout << lear;
		Point(7, 7);
		cout << lear;
		Sleep(100000);
	}
	else if (value == 9)
	{
		Point(3, 3);
		cout << lear;
		Point(7, 3);
		cout << lear;
		Point(3, 5);
		cout << lear;
		Point(5, 3);
		cout << lear;
		Point(5, 7);
		cout << lear;
		Point(7, 5);
		cout << lear;
		Point(3, 7);
		cout << lear;
		Point(7, 7);
		cout << lear;
		Sleep(100000);
	}
	else if (value == 10)
	{
		Point(0, 1);
		cout << 10 << lear;
		Point(3, 2);
		cout << lear;
		Point(3, 4);
		cout << lear;
		Point(7, 2);
		cout << lear;
		Point(7, 4);
		cout << lear;
		Point(3, 6);
		cout << lear;
		Point(5, 3);
		cout << lear;
		Point(5, 7);
		cout << lear;
		Point(7, 6);
		cout << lear;
		Point(3, 8);
		cout << lear;
		Point(7, 8);
		cout << lear;
		Point(8, 9);
		cout << 10 << lear;
		Sleep(100000);
	}
	else if (value == 11)
	{
		Point(1, 1);
		cout << "J" << lear;
		Point(8, 9);
		cout << "J" << lear;
		Sleep(100000);
	}
	else if (value == 12)
	{
		Point(1, 1);
		cout << "Q" << lear;
		Point(8, 9);
		cout << "Q" << lear;
		Sleep(100000);
	}
	else if (value == 13)
	{
		Point(1, 1);
		cout << "K" << lear;
		Point(8, 9);
		cout << "K" << lear;
		Sleep(100000);
	}
	else if (value == 14)
	{
		Point(1, 1);
		cout << "A" << lear;
		Point(8, 9);
		cout << "A" << lear;
		Sleep(100000);
	}
}

int main()
{
	Card(4, 14);
}