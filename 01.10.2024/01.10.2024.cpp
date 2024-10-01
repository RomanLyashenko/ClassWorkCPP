#include <iostream>
#include <string>

struct Data
{
    int a;
    float b;
    double c;
    char d;
};

struct Node
{
    Data data;
    Node* next;
};

Node* create_node(int a, float b, double c, char d)
{
    Node* node = new Node;
    node->data.a = a;
    node->data.b = b;
    node->data.c = c;
    node->data.d = d;
    node->next = nullptr;
    return node;
}

Node* get_tail(Node* head)
{
    if (head == nullptr)
    {
        return nullptr;
    }

    Node* curr_node = head;
    while (curr_node->next != nullptr)
    {
        curr_node = curr_node->next;
    }
    return curr_node;
}

Node* add_node_after_tail(Node*& head, int a, float b, double c, char d)
{
    if (head == nullptr)
    {
        head = create_node(a, b, c, d);
        return head;
    }

    Node* list_tail = get_tail(head);
    list_tail->next = create_node(a, b, c, d);
    return list_tail->next;
}

int list_size(Node* head)
{
    if (head == nullptr)
    {
        return 0;
    }

    int size = 1;
    Node* curr_node = head;
    while (curr_node->next != nullptr)
    {
        ++size;
        curr_node = curr_node->next;
    }
    return size;
}

Node* add_node_before_head(Node*& head, int a, float b, double c, char d)
{
    Node* new_head = create_node(a, b, c, d);
    new_head->next = head;
    head = new_head;
    return head;
}

void clear_list(Node*& head)
{
    Node* curr_node = head;
    while (curr_node != nullptr)
    {
        Node* next = curr_node->next;
        delete curr_node;
        curr_node = next;
    }
    head = nullptr;
}

void print_node(Node* node)
{
    std::cout << "a: " << node->data.a << "    ";
    std::cout << "b: " << node->data.b << "    ";
    std::cout << "c: " << node->data.c << "    ";
    std::cout << "d: " << node->data.d << '\n';
}

void print_list(Node* head)
{
    if (head == nullptr)
    {
        std::cout << "List is empty\n";
    }

    Node* curr_node = head;
    while (curr_node != nullptr)
    {
        print_node(curr_node);
        curr_node = curr_node->next;
    }
    std::cout << '\n';
}

Node* get_node_by_index(Node* head, int index)
{
    int size = list_size(head);
    if (index < 0 || index >= size)
    {
        std::cout << "Wrong index!\n";
        return nullptr;
    }

    int curr_index = 0;
    Node* curr_node = head;
    while (curr_index != index)
    {
        curr_node = curr_node->next;
        ++curr_index;
    }

    return curr_node;
}

void delete_first_node(Node*& head)
{
    if (head == nullptr)
    {
        return;
    }

    Node* next = head->next;
    delete head;
    head = next;
}

Node* insert_node_after_index(Node*& head, int index, int a, float b, double c, char d)
{
    Node* node = get_node_by_index(head, index);
    if (node == nullptr)
    {
        std::cout << "Wrong index!\n";
        return nullptr;
    }

    Node* new_node = create_node(a, b, c, d);
    new_node->next = node->next;
    node->next = new_node;
    return new_node;
}

int get_index(Node* head, Node* search)
{

    int index = 0;
    Node* curr_node = head;
    while (curr_node != nullptr)
    {
        if (curr_node == search)
        {
            return index;
        }
        ++index;
        curr_node = curr_node->next;
    }
    return -1;
}

int main()
{
    Node* head = nullptr;
    print_list(head);

    add_node_after_tail(head, 1, 1.5f, 2.2, 'a');
    print_list(head);

    add_node_after_tail(head, 2, 1.2f, 6.7, 'b');
    print_list(head);

    add_node_after_tail(head, 3, 6.2f, 4.7, 'c');
    print_list(head);

    add_node_before_head(head, 4, 2.5f, 0.9, 'd');
    print_list(head);

    Node* test = insert_node_after_index(head, 2, 7, 2.2f, 4.4, 'e');
    print_list(head);

    // print_node(get_node_by_index(head, 2));
    // std::cout << '\n';

    std::cout << "\n\n" << get_index(head, test) << "\n\n";

    delete_first_node(head);
    print_list(head);

    delete_first_node(head);
    print_list(head);

    return 0;
}

//----------------------------------------------------------------------------------------------------------------------
// Задание и на сейчас и на ДЗ
//----------------------------------------------------------------------------------------------------------------------
// Сделать бинарное дерево, которое будет представлять телефонный справочник,
// в каждом узле содержатся номер, по которому сортируется дерево и
// данные о человеке: ФИО и возраст
//
// Реализовать:
// вставку нового узла в дерево
// удаление узла по номеру из дерева (со всеми его поддеревьями)
// вывод данных о человеке по номеру
// получение размера дерева
// балансировка дерева (чтобы на каждом уровне у нас было примерно одинаковое количество узлов)