

#include <iostream>

using namespace std;

void hollow(int n)
{
    

    int i;
    for(int m=n/2,g=n; m>0; m--,g--)
    {

    for(i =m; i>0; i--)
            cout<<"*";
            
        int v=g;
            while(v<n)
            {
            cout<<"  ";
              v++;
            }

        
            for(int i =m; i>0; i--)
            cout<<"*";
        cout<<endl;    
    }
    
    
            
    for(int m=0,f=0,g=n-1; m<n/2; m++,g--,f+=2)
    {

    for(i =0; i<m; i++)
                cout<<"*";

    for(i=(n/2)-m; i>0; i--)
                cout<<" ";
     for(i=(n/2)-m; i>0; i--)
                cout<<" ";
        
        
            for(int i =m; i>0; i--)
            cout<<"*";
        cout<<endl;    
    }
        
}



int main()
{
    cout<<"Insert the number"<<endl;
    int n;
    cin>>n;
    hollow(n);
    
    return 0;
}
