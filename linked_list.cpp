#include<iostream>
#include<stdexcept>


template <typename T> struct Node;

template <typename T>
class LinkedList {
    private:
    Node<T>* head;
    Node<T>* tail;
    int size;

    public:
    LinkedList():head(nullptr), tail(nullptr),size(0){}
    ~LinkedList() {
        Node<T>* current = head;
        while (current !=nullptr){
            Node<T>* next_node = current->next;
            delete current;
            current = next_node;
        }
        head = nullptr;
        tail = nullptr;
        size=0;
        std::cout<<"\nLinked List\n";
    }
    bool isEmpty() const {
        return head==nullptr;
    }
    int getSize() const {
        return size;
    }
    void display() const{
        if (isEmpty()){
            std::cout<<"List is empty";
            return;
        }
        Node<T>* current = head;
        std::cout<<"List:::";
        while (current!=nullptr){
            std::cout<<current->data;
            if (current->next!=nullptr){
                std::cout<<"->";
            }
            current = current->next;
        }
    }
    std::cout<<"(Size:"<<size<<")\n";
}

void push_front(T val){
    Node<T>* new_node = Node<T>(val);

    if (isEmpty()){
        head = new_node;
        tail = new_node;
    } else {
        new_node->next = head;
        head = new_node;
    }
    size++;
    std::cout<<"Pushed front::"<<val<<"\n";
}

void push_back(T val){
    Node<T>* new_node = new Node<T>(val);
    if (isEmpty()){
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
    size++;
    std::cout<<"Pushed Back"<<val<<"\n";
}

bool insert_after(T key,T val_to_insert){
    if (isEmpty()){
        std::cout<<"Cannot insert after::"<<key;
        return false;
    }
    Node<T>* current = head;
    while (current !=nullptr && current->data !=key){
        current = current->next;
    }

    if (current == nullptr){
        std::cout<<"Key"<<key;
        return false;
    } else {
        Node<T>* new_node = new Node<T>(val_to_insert);
        new_node->next = current->next;
        current->next = new_node;
        if (current == tail){
            tail = new_node;
        }
        size++;
        std::cout<<"Inserted"<<val_to_insert<<key<<"\n";
        return true;
    }
}