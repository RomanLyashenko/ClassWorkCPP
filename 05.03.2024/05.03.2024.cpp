#include <iostream>
using namespace std;

int main()
{
    /*
    int a, b, c, d, e, f, g, h, i, j, num;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
    num = a;
    if (num < b) num = b;
    if (num < c) num = c;
    if (num < d) num = d;
    if (num < e) num = e;
    if (num < f) num = f;
    if (num < g) num = g;
    if (num < h) num = h;
    if (num < i) num = i;
    if (num < j) num = j;
    cout
    << "max number: " << num;
    */

    /*
    int array[10];
    for (int i = 0; i < 10; i++) cin >> array[i];
    for (int i = 0; i < 10; i++) cout << array[i] << "; ";
    */

    /*
    int array[10];
    for (int i = 0; i < 10; i++) cin >> array[i];
    int max = array[0];
    for (int i = 1; i < 10; i++)
        if (max < array[i]) max = array[i];
    cout << "max number: " << max;
    */

    /*
    int array[10], a = 0;
    for (int i = 0; i < 10; i++) cin >> array[i];
    int min = array[0];
    for (int i = 1; i < 10; i++) {
        if (min > array[i]) {
            min = array[i];
            a = i;
        }
    }
    cout << "min index: " << a;
    */

    /*
    int array[10], summ = 0;
    for (int i = 0; i < 10; i++) cin >> array[i];
    int min = array[0];
    for (int i = 1; i < 10; i++) {
        summ += array[i];
    }
    cout << "summ: " << summ;
    */

    /*
    int array[10], summ = 0;
    for (int i = 0; i < 10; i++) cin >> array[i];
    int min = array[0];
    for (int i = 9; i >= 0; i--) {
        cout << array[i] << "; ";
    }
    */

    // task 1

    /*
    int array[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        array[i] = 10 + rand() % 90;
        cout << array[i] << "; ";
    }
    */

    // task 2

    /*
    int array[10];
    double summ = 0;
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        array[i] = 10 + rand() % 90;
        summ += array[i];
    }
    cout << "avarge: " << summ / 10;
     */

     // task 3

     /*
     int array[10], index;
     srand(time(NULL));
     for (int i = 0; i < 10; i++) {
         array[i] = 10 + rand() % 90;
         if (array[i] % 5 == 0) {
             index = i;
             break;
         }
     }
     cout << index;
     */

     // task 4

    /* 
    int array[10], summ = 0;
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        array[i] = 10 + rand() % 90;
    }
    for (int i = 1; i < 10; i++) {
        summ += array[i];
       
    }
    if (summ % 2) {

    }
    else cout << "summ is odd";
    */
    
    // task 5
    
    /* 
    int array[10], index;
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        array[i] = 10 + rand() % 90;
    }
    for (int i = 0; i < 10; i++) {
        index = i;
        if ((array[i] + array[i++]) % 10) {

        }
        else cout << index << "; ";
    }
    */

    // task 6

    /* 
    int array1[10]{2,4,6,2,3,4,5,8,9,9};
    int array2[10]{12,4,6,2,0,23,6,4,8};
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
       //array1[i] = 10 + rand() % 90;
       cout << array1[i] << "; ";
    }
    cout << endl;
    for (int j = 0; j < 10; j++) {
        //array2[j] = 10 + rand() % 90;
        cout << array2[j] << "; ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (array1[i] == array2[j]) cout << array1[i] << "; ";
        }
    }
    */
}
