#pragma once
#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string author;
    string title;
    string publisher;
    int year;
    int pages;

public:
    // Явный конструктор
    explicit Book(const string& author, const string& title,
        const string& publisher, int year, int pages)
        : author(author), title(title), publisher(publisher), year(year), pages(pages) {}

    // Константные функции для доступа к данным книги
    const string& getAuthor() const {
        return author;
    }

    const string& getTitle() const {
        return title;
    }

    const string& getPublisher() const {
        return publisher;
    }

    int getYear() const {
        return year;
    }

    int getPages() const {
        return pages;
    }

    // Функция для отображения данных о книге
    void display() const {
        cout << "Автор: " << author << ", Название: " << title
            << ", Издательство: " << publisher << ", Год: " << year
            << ", Страницы: " << pages << std::endl;
    }
};