#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
	string name;
	string age;
	string reddit;

	cout << "What is your name?" << endl;
	getline(cin, name);
	cout << "What is your age?" << endl;
	getline(cin, age);
	cout << "What is your reddit name?" << endl;
	getline(cin, reddit);

	string output = "Your name is " + name + ", you are " + age + " years old, and your username is " + reddit;

	cout << output << endl;

	ofstream file;
	file.open("output.txt");
	file << output;
	file.close();
	return 0;
}