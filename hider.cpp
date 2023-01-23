#include <iostream>
using namespace std;

int main()
{
    // system("dir > directoryFile.txt");

    system("echo > file.txt");
    system("attrib +h +s file.txt"); // satisfies the required need, but directly calling the system
    return 0;
}



// #include <Windows.h>
// int main()
// {
//     DWORD attributes = GetFileAttributes("file.txt");   // takes file attributes
//     SetFileAttributes("file.txt", attributes + FILE_ATTRIBUTE_HIDDEN);  // adds hidden attributes to it
//         // but does not satisfy the required need
// }
