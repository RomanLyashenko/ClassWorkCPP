#include <iostream>
using namespace std;
#define random(a,b) a+rand()%(b+1-a)

int main()
{
    srand(time(NULL));
    /* 
    int a = 8;
    //cout << &a;

    int* pa = &a;
    cout << pa << endl;
    cout << *pa;
    */

    /* task 1
    int a = 8;
    int b = 9;
    int* pa = &a;
    int* pb = &b;
    cout << ((*pa > *pb) ? *pa : *pb);
    */

    /* task 2
    int a;
    cin >> a;
    int* pa = &a;
    if (*pa < 0) cout << "-";
    else if (*pa > 0) cout << "+";
    else cout << "0";
    */

    /* task 3
    int a, b;
    cin >> a;
    cin >> b;
    int* pa = &a;
    int* pb = &b;
    swap(*pa, *pb);
    cout << *pa << " " << *pb;
    */

    /* task 4
    int a, b;
    char c;
    cin >> a;
    cin >> b;
    cin >> c;
    int* pa = &a;
    int* pb = &b;
    char* pc = &c;
    switch (*pc)
    {
    case '+': 
        cout << a << " + " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    case '*': 
        cout << a << " * " << b << " = " << a * b;
        break;
    case '/':
        do {
            if (*pb == 0)
            {
                cout << "ERROR" << endl;
                cin >> b;
            }
        } while(*pb == 0);
        cout << a << " / " << b << " = " << a / b;
        break;
    default:
        break;
    }
    */

    /* task 5
    int array[10];
    int* parray = array;
    for (int i = 0; i < 10; i++) {
        *(parray+i) = 0 + rand() % 11;
        cout << *(parray+i) << " ";
    }
    */

    /* 
    int array[10];
    int sum = 0;
    int* psum = &sum;
    int* parray = array;
    for (int i = 0; i < 10; i++) {
        *(parray + i) = 0 + rand() % 11;
        cout << *(parray + i) <<" ";
        *psum += *(parray + i);
    }
    cout << endl <<"sum: " << *psum;
    */

    /* 
    int size;
    cin >> size;
    int* array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 10;
        cout << array[i] << " ";
    }
    */
    
    /*
    int array[10]{ 1,3,4,8,5,6,0,9,10,6 };   
    int size = sizeof(array) / sizeof(array[0]);
    int size2  = 0;
     
    for (int i = 0; i < size; i++) {
       if (array[i] % 2 == 0) {
            size2++;
       }          
    }  
    int* array2 = new int[size2];  
    for (int i = 0, k = 0;i < size; i++) {
        if (array[i] % 2 == 0) {
            array2[k++] = array[i];
        }
    }
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size2; i++) {
        cout << array2[i] << " ";
    }
    */
    
    int array[] = { 1,2,4,2,5,2,5,7,3,67,2,8 };
    int size = sizeof(array) / sizeof(array[0]);
    int size2 = random(0, size - 1);
    int* array2 = new int[size2];
    for (int i = 0; i < size2; i++) {
       array2[i] = random(0, size - 1);
    }
    int size3 = 0;
    for (int i = 0, flag; i < size; i++) {
       flag = true;
       for (int j = 0; j < size2; j++) {
          if (array2[j] == i) {
             flag = false;
             break;
          }
    }
    if (flag) size3++;
    }
    int* array3 = new int[size3];

    for (int i = 0, k = 0, flag; i < size; i++) {
      flag = true;
        for (int j = 0; j < size2; j++) {
             if (array2[j] == i) {
                  flag = false;
                  break;
             }
        }
        if (flag) array3[k++] = array[i];
    }

    for (int i = 0; i < size; i++) cout << array[i] << " ";
    cout << endl;
    for (int i = 0; i < size2; i++) cout << array2[i] << " ";
    cout << endl;
    for (int i = 0; i < size3; i++) cout << array3[i] << " ";
}
