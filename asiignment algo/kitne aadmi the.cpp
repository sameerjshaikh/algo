#include<iostream>
#include<string>
using namespace std;

int main() {
	string line, text;
	do {
		getline(cin,line);
		text +=line+" ";

	} while (line != "");
	int l = text.length()-2,cnt=1;
	//cout << text << endl;

	for (int i = 0; i < l; i++)
	{
		if (text[i] == ' ') {
			if (text[i + 1] == ' ')
				continue;
			cnt++;
		}

	}
	//cout <<l<<"	"<<cnt;
	cout << cnt;
}
