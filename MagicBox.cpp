#include<iostream>

using namespace std;
int main()
{
	int rowCount,colCount;
	 int temp=0,temp2=0;
	cout<<"Enter row"<<endl;
	cin>>rowCount;
	cout<<"Enter column"<<endl;
	cin>>colCount;
	
	
	
	int** a = new int*[rowCount];
for(int i = 0; i < rowCount; ++i)
    a[i] = new int[colCount];	
    
    
    
    for(int i=0;i<rowCount;i++)
    {
    	for(int j=0;j<colCount;j++)
	    {
    	cin>>a[i][j];
    	temp+=a[i][j];
                 }
                  if(i==0)
			{
				temp2=temp;
				
				cout<<" IF 0 temp2:"<<temp2<<endl;
				cout<<" IF 00 temp"<<temp<<endl;
                   }
    }
    
    	cout<<" out of for temp2:"<<temp2<<endl;
	cout<<" out of for  temp:"<<temp<<endl;
    
    if(temp/rowCount!=temp2){
    	
    	cout<<"INSIDE IF 1:"<<endl;
    	
    //	cout<<"Not a Magic Squree!\n";   
	//    return 0; 
    	goto goOut;
    }
    temp=0;
    temp2=0;
    
    for(int i=0;i<rowCount;i++)
    {
    	for(int j=0;j<colCount;j++)
	    {
    
    	temp+=a[j][i];
                 }
                  if(i==0)
			{
				temp2=temp;
				
				cout<<" IF 0 temp2:"<<temp2<<endl;
				cout<<" IF 00 temp"<<temp<<endl;
                   }
    }
    cout<<" IF 0 temp2:"<<temp2<<endl;
    cout<<" IF 00 temp"<<temp<<endl;
    
    if(temp/colCount!=temp2){
    	cout<<"INSIDE IF 2:"<<endl;
    	cout<<"Not a Magic Squree!\n";   
	    return 0; 
    	//goto goOut;
    }
    else
    cout<<"Magic Squree!\n";  
    return 0;
    
    
    goOut:
    	cout<<"Not a Magic Squree!\n";    
    
   
}




