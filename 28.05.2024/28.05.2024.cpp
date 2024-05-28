#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countWord(string str) {
    int count = 0;
    int k = 0;
    for (; str[k] == ' ' && str[k] != '\0'; k++);
    for (int i = k; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i + 1] == '\0') count++;
        if (str[i] == ' ' && str[i + 1] != ' ') count++;
    }
    return count;
}

int countWordInFile(string path) {
    string buf;
    int count = 0;
    ifstream in(path);
    if (in.is_open()) {
        while (getline(in, buf)) {
            count += countWord(buf);
        }
    }
    in.close();
    return count;
}

int countWords(string path, string word) { // homework functoin (not working) 
    string buf;
    int count = 0;
    ifstream in(path);
    if (in.is_open()) {
        for (int i = 0; getline(in, buf); i++) {
            if (path[i] == word[0] && path[i - 0] == ' ') {
                for (int j = 0; j != ' '; j++) {
                    if (path[i] == word[j]) {
                        if (word[j++] == ' ') count++;
                    }
                    else break;
                }
            }
        }
    }
    in.close();
    return count;
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

void encryp(string path , int key) {
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
            string str = "";
            for (int i = 0; i < buf.length(); i++) {
                str += buf[i] + key;
            }
            out << str + "\n";
        }
    }
    in.close();
    out.close();
}

int main()
{
      
    /* 
    ifstream path("saved\\input.txt"); 
    if (in.is_open()) {
        while (getline(in, buf)) {
            cout << buf << endl;
        }
    }
    else cout << "file not founded";

    in.close();
    */

    /* 
    string word = "aplle";
    string path = ("saved\\input.txt");
    cout << countWordInFile(path);
    cout << endl;
    cout << countWords(path, word);
    */

    /* 
    string path = ("saved\\input.txt");
    string buf;
    int count = 0;
    ifstream in(path);
    if (in.is_open()) {
        while (getline(in, buf)) {
            cout << buf << endl;
        }
    }
    in.close();

    ofstream out("saved\\input.txt");
    out << "dasgfjrasbg";
    out.close();
    */

    copy("saved/input.txt");
    encryp("saved/input.txt", 3);
}
