#include <iostream>
#include <conio.h>
using namespace std;
main(){
    int f,a;
    for(f=1; f<=5; f++)
    {
        for(a=1; a<=5; a++)
        {
            cout<<f<<" X "<<a<<" = ";
            cout<<f*a<<"\t";
        }
        cout<<endl;
    }



getch();
return 0;
}
