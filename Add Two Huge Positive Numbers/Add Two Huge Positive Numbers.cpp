#include"pch.h"
#include<iostream>
#include <sstream>
using namespace std;

int addNum(string str1, string str2);
int parseInt(string str);
string addNumber(string str1, string str2);

int main()
{
	//cout << addNum("1234", "1234");
	string n1, n2;
	cin >> n1 >> n2;


	string str = addNumber(n1, n2);
	cout << str << endl;

	/*string str = "";
	int str1 = addNum("1" ,"2");
	int sum2 = addNum("2", "5");
	cout << to_string(str1) + to_string(sum2);
*/
//cout << "Adition " << str << endl;
/*string s1 = "1";
int num = s1.at(0) - '0';
cout << "Num " << num + 1;
*/
//int n = parseInt("23");
//cout << n << endl;

}

int parseInt(string str)
{

	stringstream num(str);
	int x = 0;
	num >> x;
	//cout << "Value of x " << x << endl;
	return x;
}

int addNum(string n1, string n2)
{
	int num1 = parseInt(n1);
	int num2 = parseInt(n2);
	/*int num1 =  ch1 - '0';
	int num2 = ch2 - '0';
	*///cout << "num1 " << num1 << " num2 " << num2<< endl;
	int x = num1 + num2;
	//cout << "value of x " << x;
	return x;
}
string getString(char x) {
	string s(1, x);
	return s;
}
string addNumber(string str1, string str2)
{
	string st_res = " ";
	string larger = str1, smaller = str2;
	int len1 = str1.length();
	int len2 = str2.length();
	int len = len1;
	if (len1 > len2)
	{
		len = len1;
		larger = str1;
		smaller = str2;
	}
	else if (len2 > len1) {
		larger = str2;
		smaller = str1;
		len = len2;
	}
	int carry = 0;
	int index = smaller.length() - 1;
	int carry_int = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		char ch1 = larger.at(i);
		int n1 = parseInt(getString(ch1));
		int n2 = 0;
		if (index >= 0) {

			char ch2 = smaller.at(index);
			n2 = parseInt(getString(ch2));
			index--;
		}

		int sum = n1 + n2 + carry_int;
		if (sum > 9)
		{
			string temp = to_string(sum);
			char char_array[2];
			char_array[0] = temp.at(0);
			char_array[1] = temp.at(1);
			carry = char_array[0];
			carry_int = parseInt(getString(carry));
			int temp_int = parseInt(getString(char_array[1]));
			st_res = to_string(temp_int) + st_res;

		}
		else {
			carry_int = 0;
			//	result = sum +""+ result;
			string st = to_string(sum);
			st_res = st + st_res;

		}
		//string str = "" + 1;
	//result = sum + result;

		if (i == 0 && carry_int != 0)
			st_res = to_string(carry_int) + st_res;

	}
	return st_res;

}