#include<iostream>

using namespace std;

int arr[100],brr[100],p = 0;
int num,num2;
static int j = 0;
int countt = 0;
void happy();
void mode1(int);
void sum_num();

void sum_num() {

	int l;
	p = 0;


	for (l = 0; l <= j; l++)
	{
		p = arr[l] * arr[l] + p;

		//	cout<<arr[l]<<endl;
	}
	countt++;
	//cout<<j<<endl;
	if (p == 1) {

		//cout << "happy number" << endl;
		cout << num2<<" " ;
		cout << countt<< endl;
		
		
	}
	else if (countt == 10)
	{
		//cout << "not happy number"<<endl;
		countt=0;
		j=0;
		return;
	}
	else {
		j = 0;
		mode1(p);
	}
}

void mode1(int n) {
	int y, x;
	y = n % 10;
	arr[j] = y;
	x = n / 10;
	j++;
	if (x >= 10)
	{
		j = 0;
		mode1(x);
	}
	else
	{
		arr[j] = x;
		sum_num();

	}
}


int main() {

	int val1,val2;
	cout << "ENTER THE starting  NUMBER : ";
	cin >> val1;
	
	cout << "ENTER THE Last  NUMBER : ";
	cin >> val2;
	
	int a=val2-val1;
	
	for(int i=0;i<=a;i++)
	{
		brr[i]=val1;
		val1++;
	}
	
	for(int i=0;i<=a;i++)
	{
	      num=brr[i];
	      num2=brr[i];
		happy();
		num++;
				
	}
return 0;
}
void happy()
{
	countt++;
	if (num < 10)
	{
		num = num * num;
		countt++;
		mode1(num);
	}
	else
		mode1(num);
}
