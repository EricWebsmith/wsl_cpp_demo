#include <iostream>
#include <filesystem>

using namespace std;

int main()
{
    cout << "who am i?" << endl;
    cout << getenv("USER") << endl;
    cout << "where am i?" << endl;
    cout << getenv("PWD") << endl;

    //set C++ Language Standard to C++17 (-std=c++17)
    cout << "Current path is " << filesystem::current_path() << endl;
    return 0;
}