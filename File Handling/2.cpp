#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    fstream fobj("binary.dat", ios::binary);
    fobj.write((char *)arr, sizeof(arr));
    fobj.close();
    cout<<"File written to the filesystem";
    return 0;
}