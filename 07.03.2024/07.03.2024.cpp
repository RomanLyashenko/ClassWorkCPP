#include <iostream>
using namespace std;

int main()
{
    /*
    srand(time(NULL));
    const int SIZE = 10;
    int array1[SIZE];
    int array2[SIZE];
    int max = 99, min = 10;
    for (int i = 0; i < SIZE; i++) {
        array1[i] = 10 + rand() % (max + 1 - min);
        array2[i] = array1[i];
        cout << array1[i] << "; ";
    }
    */

    /*
    int array1[10];
    int array2[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        array1[i] = 10 + rand() % 90;
        cout << array1[i] << "; ";
    }
    cout << endl;
    for (int j = 0; j < 10; j++) {
        array2[j] = 10 + rand() % 90;
        cout << array2[j] << "; ";
    }
    cout << endl;
    for (int i = 0, flag; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (array1[i] == array2[j]) {
                flag = true;
                for (int k = 0; k < i; k++) {
                    if (array1[i] == array1[k]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    cout << array1[i] << "; ";
                    break;
                }
                else break;
            }
        }
    }
    */

    /*
    srand(time(NULL));
    const int SIZE = 10;
    int array[SIZE];
    int array2[SIZE];
    int max = 9;
    int min = 0;
    for (int i = 0; i < SIZE; i++) {
        array[i] = min + rand() % (max + 1 - min);
        array2[i] = min + rand() % (max + 1 - min);
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;

    //for (int i = 0, flag; i < SIZE; i++) {
    //    for (int j = 0; j < SIZE; j++) {
    //        if (array[i] == array2[j]) {
    //            flag = true;
    //            for(int k = 0; k < i; k++) {
    //                if (array[i] == array[k]) {
    //                    flag = false;
    //                    break;
    //                }
    //            }
    //            if (flag) {
    //                cout << array[i] << " ";
    //                break;
    //            }
    //            else break;
    //        }
    //    }
    //}


    for (int i = 0, flag; i < SIZE; i++) {
        flag = true;
        for (int j = 0; j < SIZE; j++) {
            if (array[i] == array2[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            for (int k = 0; k < i; k++) {
                if (array[k] == array[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int k = i + 1; k < SIZE; k++) {
                    if (array[k] == array[i]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) cout << array[i] << " ";
            }
        }
    }

    for (int i = 0, flag; i < SIZE; i++) {
        flag = true;
        for (int j = 0; j < SIZE; j++) {
            if (array2[i] == array[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            for (int k = 0; k < i; k++) {
                if (array2[k] == array2[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int k = i + 1; k < SIZE; k++) {
                    if (array2[k] == array2[i]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) cout << array2[i] << " ";
            }
        }
    }
    */

    /*
    srand(time(NULL));
    const int SIZE1 = 7, SIZE2 = 3;
    int array1[SIZE1];
    int array2[SIZE2];
    int array3[SIZE1 + SIZE2];
    int max = 99, min = 10, index, k = 0;
    for (int i = 0; i < SIZE1; i++) {
        array1[i] = 10 + rand() % (max + 1 - min);
        cout << array1[i] << "; ";
    }
    cout << endl;
    for (int i = 0; i < SIZE2; i++) {
        array2[i] = 10 + rand() % (max + 1 - min);
        cout << array2[i] << "; ";
    }
    cout << endl;
    do {
        cout << "input an index: ";
        cin >> index;
        if (index < 0 || index > 7) cout << "an uncorrect index" << endl;
    } while (index < 0 || index > 7);
    for (int i = 0; i < index; i++) {
        array3[k++] = array1[i];
    }
    for (int i = 0; i < SIZE2; i++) {
        array3[k++] = array2[i];
    }
    for (int i = 0; i < SIZE1; i++) {
        array3[k++] = array1[i];
    }
    for (int i = 0; i < (SIZE1 + SIZE2); i++) {
        cout << array3[i] << "; ";
    }
    */

int index = 3;
int n = 2;
int k = 0;
for (int i = 0; i < index; i++) {
    array3[k++] = array[i];
}

for (int i = index + n; i < SIZE; i++) {
    array3[k++] = array[i];
}

for (int i = 0; i < SIZE; i++) {
    cout << array3[i] << " ";
}
}