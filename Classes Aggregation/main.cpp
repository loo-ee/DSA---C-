#include <iostream>
#include "Phone.h"
using namespace std;

int main()
{
    Phone MyPhone = Phone("Y8", "Huawei", 8.1, "Snapdragon", 2, 16);
    MyPhone.showinfo();
    return 0;
}
