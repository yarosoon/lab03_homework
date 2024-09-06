#include "formatter.h"
#include <string>
using namespace std;
string formatter(const string& message)
{
    string res;
    res += "-------------------------\n";
    res += message + "\n";
    res += "-------------------------\n";
    return res;
}
