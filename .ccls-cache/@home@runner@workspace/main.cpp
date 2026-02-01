#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

// Template-based Stack implementation
template <typename T>
class Stack {
private:
    std::vector<T> elements;
public:
    void push(T const& elem) {
        elements.push_back(elem);
    }
    void pop() {
        if (elements.empty()) {
            throw std::out_of_range("Stack<>::pop(): empty stack");
        }
        elements.pop_back();
    }
    T top() const {
        if (elements.empty()) {
            throw std::out_of_range("Stack<>::top(): empty stack");
        }
        return elements.back();
    }
    bool empty() const {
        return elements.empty();
    }
    size_t size() const {
        return elements.size();
    }
};

// Simple Node for Linked List
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Singly Linked List implementation
class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(nullptr) {}
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
    void insert(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    std::cout << "=== Data Structures and Algorithms Demo (C++) ===" << std::endl;

    // 1. Linked List Demo
    std::cout << "\n[Linked List Demo]" << std::endl;
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    std::cout << "List content: ";
    list.display();

    // 2. Stack Demo
    std::cout << "\n[Stack Demo]" << std::endl;
    Stack<std::string> stringStack;
    stringStack.push("Data");
    stringStack.push("Structures");
    stringStack.push("Project");

    std::cout << "Stack size: " << stringStack.size() << std::endl;
    std::cout << "Popping elements: ";
    while (!stringStack.empty()) {
        std::cout << stringStack.top() << " ";
        stringStack.pop();
    }
    std::cout << std::endl;

    return 0;
}
