#include <iostream>
    using namespace std;
main(){
    int jumlah=0;
cout<<"MASUKAN NILAI : "; cin>>jumlah;
for(int a=1; a<=jumlah; a++)
{
    if(a>50)break;
        cout<<a<<endl;
}
return 0;
}
