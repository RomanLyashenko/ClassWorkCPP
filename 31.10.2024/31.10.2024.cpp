#include <iostream>
#include <string>
using namespace std;
// task 1
//#include "Book.h"
//
//void displayBooksByAuthor(const Book* books, int size, const string& author) {
//    cout << "Книги автора: " << author << endl;
//    for (int i = 0; i < size; ++i) {
//        if (books[i].getAuthor() == author) {
//            books[i].display();
//        }
//    }
//}
//
//void displayBooksByPublisher(const Book* books, int size, const string& publisher) {
//    std::cout << "Книги издательства: " << publisher << endl;
//    for (int i = 0; i < size; ++i) {
//        if (books[i].getPublisher() == publisher) {
//            books[i].display();
//        }
//    }
//}
//
//void displayBooksAfterYear(const Book* books, int size, int year) {
//    cout << "Книги, выпущенные после " << year << " года:" << std::endl;
//    for (int i = 0; i < size; ++i) {
//        if (books[i].getYear() > year) {
//            books[i].display();
//        }
//    }
//}
//
//int main() {
//    setlocale(LC_ALL,"Rus");
//    const int SIZE = 5; // размер массива книг
//    Book books[SIZE] = {
//        Book("Автор A", "Книга A", "Издательство A", 2020, 300),
//        Book("Автор B", "Книга B", "Издательство B", 2018, 250),
//        Book("Автор A", "Книга C", "Издательство A", 2021, 400),
//        Book("Автор C", "Книга D", "Издательство B", 2019, 350),
//        Book("Автор B", "Книга E", "Издательство C", 2022, 280)
//    };
//
//    // Примеры использования
//    displayBooksByAuthor(books, SIZE, "Автор A");
//    displayBooksByPublisher(books, SIZE, "Издательство B");
//    displayBooksAfterYear(books, SIZE, 2019);
//
//}

// task 2

//#include "Worker.h"

int main() {
	time_t mytime = time(NULL);
	struct tm* now = localtime(&mytime);
	int year = now->tm_year;
	cout << year;
}