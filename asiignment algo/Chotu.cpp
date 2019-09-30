#include<iostream>
#include<string>
#include<cstring>


using namespace std;

size_t found=0;
void findSeq(string *);
int main() {
    
	string *mainArray= new string;
	cin >> *mainArray;

	findSeq(mainArray);
	return 0;
}

void findSeq(string *arr) {
	int fCount=0, flag=0, sCount=999;
	cout << endl;
	char *cstr = new char[arr->length() + 1];
	strcpy(cstr,arr->c_str());
	int m = arr->length() + 1;

	for (int i = 0;i <m;i++) {
		if (cstr[i] == '0') {
			if (flag == 1) {
				if (fCount >= sCount) {
					goto jmp;
				}
				else {
					sCount = fCount;
				}
				
			}
			jmp:
				flag = 0;
				fCount = 0;
		}
		if (cstr[i] == '1') {
			fCount++;
			flag = 1;
			//break;
		}
		
	}
    if(fCount == 0){
        fCount = -1;
        cout<<fCount;
    }else{
        cout<<sCount<<endl;
    }
	
}