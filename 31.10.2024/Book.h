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
    // ����� �����������
    explicit Book(const string& author, const string& title,
        const string& publisher, int year, int pages)
        : author(author), title(title), publisher(publisher), year(year), pages(pages) {}

    // ����������� ������� ��� ������� � ������ �����
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

    // ������� ��� ����������� ������ � �����
    void display() const {
        cout << "�����: " << author << ", ��������: " << title
            << ", ������������: " << publisher << ", ���: " << year
            << ", ��������: " << pages << std::endl;
    }
};