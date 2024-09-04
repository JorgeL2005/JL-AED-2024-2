#include <iostream>
using namespace std;

template <typename T>
struct Node {
    T data;
    Node<T>* next;
};

template <typename T>
class List {
private:
    Node<T>* head;
public:
    List() : head(nullptr) {}

    void push_front(T dato) {
        Node<T>* nuevo = new Node<T>;
        nuevo->data = dato;
        nuevo->next = head;
        head = nuevo;
    }
    void push_back(T dato){
        Node<T>* nuevo = new Node<T>;
        nuevo->data = dato;
        Node<T>* temp = head;
        while (temp->next != nullptr){
            temp = temp -> next;
        }
        temp->next = nuevo;
        nuevo->next = nullptr;
    }; // Agrega un elemento al final


    Node<T>* obtener_medio() {
        Node<T>* slow = head;
        Node<T>* fast = head;

        // Dos punteros
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        // Retornar el puntero del medio
        return slow;
    }

};

int main() {
    List<int> lista;
    lista.push_front(1);
    lista.push_back(2);
    lista.push_back(3);
    lista.push_back(4);
    lista.push_back(5);
    lista.push_back(6);

    cout << (lista.obtener_medio())->data << endl;


    return 0;
}
