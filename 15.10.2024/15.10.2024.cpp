#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Task1(string path) {
	string path2 = "buf.txt";
	string line = "";
	ifstream in(path);
	ofstream out(path2, ios::app);

	if(in.is_open()){
		
		if (out.is_open()) {
			while(in >> line) {
				if(line.length() >= 7)  
					out << line << endl;
			}
			
		}
		else
		{
			cout << "error";
		}
		
	}
	out.close();
	in.close();
}

void copy(string path) {
	string path2 = "";
	for (int i = 0; i < path.length() - 4; i++) {
		path2 += path[i];
	}
	path2 += "(copy).txt";
	string buf;
	ifstream in(path);
	ofstream out(path2);
	if (in.is_open()) {
		while (getline(in, buf)) {
			out << buf + "\n";
		}
	}
	in.close();
	out.close();
}

void task3(string path){
	string path2 = "";
	for (int i = 0; i < path.length() - 4; i++) {
		path2 += path[i];
	}
	path2 += "(copy).txt";
	string buf;
	ifstream in(path);
	ofstream out(path2);
	if (in.is_open()) {
		while (getline(in, buf)) {
			out.seekp(0, ios::beg);
			out << buf + "\n";
		}
	}
	in.close();
	out.close();
}

int main()
{
	string path = "Test.txt";
	Task1(path);
	copy(path);
}

