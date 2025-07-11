#include <iostream>
using namespace std;

int main()
{
    cout << "Hello C++" << endl;

    // Wait for user input before closing (portable way)
    cout << "Press Enter to continue..." << endl;
    cin.get();

    return 0;
}