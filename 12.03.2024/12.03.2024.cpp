#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    /* 
    const int SIZE1 = 10;
    const int SIZE2 = 8;
    int array[SIZE1][SIZE2];
    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE2; j++) {
            array[i][j] = 2 + rand() % 4;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    */
    /* 
    const int SIZE1 = 10;
    const int SIZE2 = 8;
    int sum = 0, maxindex = 0;
    float avg = 0, maxAvg = 0;
    int array[SIZE1][SIZE2];
    for (int i = 0; i < SIZE1; i++) {
        maxAvg = 0;
        for (int j = 0; j < SIZE2; j++) {
            array[i][j] = 2 + rand() % 4;
            sum += array[i][j];
            cout << array[i][j] << " ";
            avg += array[i][j];
        }
        if (maxAvg < (avg / SIZE2)) {
            maxAvg = avg / SIZE2;
            maxindex = i;
        }
        cout << endl;
    }
    cout << "sum: " << sum << endl;
    cout << "avagre: " << sum / (SIZE1 * SIZE2) << endl;
    cout << "best student: " << maxindex;
    */
    const int SIZE1 = 5;
    const int SIZE2 = 4;
    float sum = 0;
    float persSum = 0;
    float maxPersSum = 2;
    int array[SIZE1][SIZE2];

    int bestSt = 0;
    float bestAvg = 0;
    int badSt = 0;
    float badAvg = 6;

    cout << "\t| eng\t|lit\t|rus\t|math\t|avg" << endl;
    for (int i = 0; i < SIZE1; i++) {
        persSum = 0;
        cout << "st " << i + 1 << "\t";
        for (int j = 0; j < SIZE2; j++) {
            array[i][j] = 2 + rand() % 4;
            cout << "| " << array[i][j] << "\t";
            persSum += array[i][j];
        }
        cout << "|" << persSum / SIZE2;
        if (bestAvg < persSum / SIZE2) {
            bestAvg = persSum / SIZE2;
            bestSt = i;
        }
        if (badAvg > persSum / SIZE2) {
            badAvg = persSum / SIZE2;
            badSt = i;
        }
        cout << endl;
    }
    cout << "---------------------------------------------" << endl;
    for (int j = 0; j < SIZE2; j++) {
        persSum = 0;
        for (int i = 0; i < SIZE1; i++) {
            persSum += array[i][j];
            sum += array[i][j];
        }
        cout << "\t|" << persSum / SIZE1;
    }
    cout << "\t|" << sum / (SIZE1 * SIZE2) << endl;
    cout << "best st: st" << bestSt + 1 << " : " << bestAvg << endl;
    cout << "bad st:  st" << badSt + 1 << " : " << badAvg << endl;
    for (int i = 0, flag; i < SIZE1; i++) {
        flag = false;
        for (int j = 0; j < SIZE2; j++) {
            if (array[i][j] == 5) {
                cout << "[" << i << "]" << "[" << j << "]";
                flag = true;
                break;
            }
        }
        if (flag = true) break;
    }
}