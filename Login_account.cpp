#include<iostream>
#include<fstream>
#include<string>	
using namespace std;
int main() {
	string username, password;
	fstream myfile;
	myfile.open("user.txt", ios::in);
	if (myfile.is_open())
	{
		cout << "Username = ";
		cin >> username;
		string line;
		while (getline(myfile, line))
		{
			if (username == line)
			{
				cout << "password = ";
				cin >> password;
				while (getline(myfile, line))
				{
					if (password == line)
					{
						system("CLS");
						cout << "Welcome To console Based Twitter";
					}
				}
			}
			else
			{
				cout << "Username is not found " << endl;
			}
		}
	}

}