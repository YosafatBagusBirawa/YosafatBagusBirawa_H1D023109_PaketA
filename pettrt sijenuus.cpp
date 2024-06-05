#include <iostream>
using namespace std;
int ubah[2]={1, 6};
int array[6]={1, 6, 13, 16, 25, 26};

int main(){
    
    cout<<"daftar halaman sebelum perubahan\n";
    for (int i = 0; i <= 5; i++)
    {
        cout<<array[i];
    }

    
    cout<<"daftar halaman setelah peruhaban\n";
    for (int i = 0; i < 2; i++)
    {
        cout<<ubah[i];
    }
    cout<<"[ CENCORED ]";
    return 0;
}
