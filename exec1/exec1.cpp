#include<iostream>
using namespace std;
void reverse(char source[], int size);
void firstday(int year, int week);
bool isLeapYear(int year);
int main()
{
	cout << "请输入需要输入的数据长度" << endl;
	int n;
	cin >> n;
	char* a = (char*)malloc(sizeof(char) * n);
	//for (int i = 0;i < n;i++)
		cin >> a;
	reverse(a, 6);
	for (int i = 0;i < 6;i++)
		cout << a[i];
	cout << endl;
	cout << "请输入一个年份及这年的第一天是星期几" << endl;
	int year, date;
	cin >> year >> date;
	firstday(year, date);
}
void reverse(char source[], int size)
{
	for (int i = 0;i < size/2;i++)
	{
		int temp = source[size-i-1];
		source[size - i - 1] = source[i];
		source[i] = temp;

	}
}

void firstday(int year, int date)
{
	
	string month[] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sept","Oct","Nov","Dec" };
	int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31 };
	string weeks[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
	if (!isLeapYear) days[2] = 29;
	int sum = date;
	for (int i = 0;i <12;i++)
	{
		sum += days[i];
		int ans = sum % 7;
		//cout <<sum << endl;
		cout << month[i] << " 1, " << year << " is " << weeks[ans] << endl;
		
	}

}
bool isLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}