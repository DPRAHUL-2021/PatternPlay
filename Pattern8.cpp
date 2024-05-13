/*
Print This Pattern
*****
 ***
  *
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
	for (int i = 0; i < n; i++)
    {
        // Space
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
       
        // Pattern
        for(int j=0;j< 2*n -(2*i +1);j++){
            
            cout<<"*";
        }
        
        // Space
         for (int j =0; j<i; j++)
        {
            cout <<" ";
        }

        cout << endl;
    }
}
int main()
{
    cout << "Enter The Value Of 'n' : " << endl;
    int n;
    cin>>n;
    printPattern(n);
}