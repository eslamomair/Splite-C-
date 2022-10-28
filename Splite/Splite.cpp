#include <iostream>
#include <vector>
#include <String>
using namespace std;
string ReadString()
{
	string S1;
	cout << "please enter a string\n ";
	getline(cin, S1);
	return S1;
}
vector <string  > Splite(string S1, string Delimr)
{
	vector < string > vstring;
	 
	short Pos = 0;
	string Sword;
	while ((Pos = S1.find(Delimr)) != std::string::npos)
	{
		Sword = S1.substr(0, Pos);
		if (Sword != "")
		{
			vstring.push_back(Sword);
			 
		}
		S1.erase(0, Pos + Delimr.length());
	}
	if (S1 != "")
	{
		vstring.push_back(S1);
		 
	}

 
	return vstring;
}
void PrintVector(vector <string> &vString, short Num)
{
	for (string& AS : vString)
	{
		cout  << AS << endl;
	}
	
	cout << "Tokens = " << Num;
}
int main()
{
 
	vector <string > Sstring  =	Splite(ReadString(), " ");
	PrintVector(Sstring,Sstring.size());
	

	return 0;
}


