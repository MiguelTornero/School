#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int i = 0, num;
    ofstream file;
    file.open("folder/file.txt");
    while (i <= 100)
    {
        file << i << ' ';
        i++;
    }
    file.close();
    return 0;
}
