#include <iostream>
#include <conio.h>
using namespace std;
main(){
    int i,total;
    cout<<"Enter_Numbers : "; cin>>total;
    for(i=1; i<=total; i++)
    {
        if((i%2)==0) continue;
        cout<<i<<endl;
    }


getch();
return 0;

}
