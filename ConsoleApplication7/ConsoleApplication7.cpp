#include <iostream>
using namespace std;
#include "List.h"
#include "Queue.h"

int main()
{
    List<int> obj;
    for (int i = 0; i < 10; i++) {
        obj.pushBack(i);
    }

}
