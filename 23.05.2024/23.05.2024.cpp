#include <iostream>
/* 
#define min(a,b) cout<<((a<b)? a : b)
//#define max(a,b) cout<<((a>b)? a : b)
#define square(a) cout << a*a
#define degree(a,b) for(int i = 1, k = a; i < b;i++, a*=k) 
#define even(a) cout<<((a%2)? false:true)
#define odd(a) cout<<((a%2)? true:false)
#define rand(min,max) min + rand() % (max - min + 1) 
#define max(a,b,c) if(a > b && a > c) \
							cout<<a; \
							else if(b > c) cout << b; \
							else cout << c;
*/
using namespace std;

void swa(char str[]) {
	int size = 0;
	for (; str[size] != '\0'; size++);
	for (int i = 0; i < size/2; i++) {
		swap(str[i], str[size -1  - i]);
	}
}

void count(char str[]) {
	int count = 0;
	for (int i = 0; i < str[i]!='\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') count++;
	}
	cout << count;
}
void count2(char str[]) {
	int count = 0;
	for (int i = 0; i < str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122) count++;
	}
	cout << count;
}

int countWord(char str[]) {
	int count = 0;
	int k = 0;
	for (; str[k] == ' ' && str[k] != '\0'; k++);
	for (int i = k; str[i] != '\0'; i++) {
		if (str[i] != ' ' && str[i + 1] == '\0') count++;
		if (str[i] == ' ' && str[i + 1] != ' ') count++;
	}
	return count;
}

int main()
{
	srand(time(NULL));
	/* 
	min(9, 3);
	cout << endl;
	max(4, 18);
	cout << endl;
	square(5);
	cout << endl;
	int a = 2;
	degree(a, 5);
	cout << a;
	cout << endl;
	even(3);
	cout << endl;
	odd(3);
	*/
	/* 
	cout << rand(0, 9);
	cout << endl;
	max(1, 4, 2);
	*/
	/* 
	int array[4]{ 4,3,2,5 };
	for (int i = 0; i < 4; i++) {
		cout << array[i];
	}
	cout << endl;
	*/

	char str[] = "dz ngjkn. sdngjsdn  sngjg  dgd   g egdsg sgsg sgsrg";
	cout << str;
	swa(str);
	cout << endl;
	cout << str; 
	cout << endl;
	count(str);
	cout << endl;
	count2(str);
	cout << endl;
	cout << countWord(str);
}

