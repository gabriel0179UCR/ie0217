#include <iostream>
using namespace std;

#define MI_PRIMER_DEFINE 925
enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32 };

int main() {
    seasons s;

    s = summer;
    cout << "Summer = " << s << endl;
    cout << "Define: " << MI_PRIMER_DEFINE << endl;

    return 0;
}