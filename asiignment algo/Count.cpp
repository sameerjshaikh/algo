#include<iostream>
#include<string>
#include<cstring>

using namespace std;



int main() {

    /*char *mainStr = new char[];

	cin >> mainStr;
	cout << mainStr;*/
	string mainArr;
	int count=0, flag=0;
	
	char refArr[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	
	cin >> mainArr;
	//cout << mainArr;
	int n = mainArr.length();
	char *cstr = new char[n + 1];
	strcpy(cstr,mainArr.c_str());			
	
	int m = n + 1;
	for (int i = 0;i < 10;i++) {
		flag = 0;
		count = 0;
		for (int j = 0; j < m;j++) {
			
			if ((cstr[j]) == refArr[i]) {
				count++;
				flag = 1;
			}
		}
		if (flag == 1) {
			cout << i << " " << count << endl;
		}
		
	}
	return 0;
}