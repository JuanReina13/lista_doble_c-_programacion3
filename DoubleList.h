#pragma once
#include <iostream>
#include "Node.h"

template <typename T>
class DoubleList {
private:
    Node<T>* head;
    Node<T>* tail;

public:
    DoubleList() {
        head = nullptr;
        tail = nullptr;
    }

    ~DoubleList() {
        Node<T>* current = head;
        while (current != nullptr) {
            Node<T>* temp = current;
            current = current->getNext();
            delete temp;
        }
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void insertFront(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            newNode->setNext(head);
            head->setPast(newNode);
            head = newNode;
        }
    }

    void insertBack(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            tail->setNext(newNode);
            newNode->setPast(tail);
            tail = newNode;
        }
    }

    bool remove(T val) {
        Node<T>* current = head;

        while (current != nullptr && current->getValue() != val) {
            current = current->getNext();
        }
        if (current == nullptr) {
            return false; 
        }
        if (current->getPast() != nullptr) {
            current->getPast()->setNext(current->getNext());
        } else {
            head = current->getNext();
        }
        if (current->getNext() != nullptr) {
            current->getNext()->setPast(current->getPast());
        } else {
            tail = current->getPast();
        }

        delete current;
        return true;
    }

    void showForward() {
        Node<T>* current = head;
        while (current != nullptr) {
            std::cout << current->getValue() << " ";
            current = current->getNext();
        }
        std::cout << std::endl;
    }

    void showBackward() {
        Node<T>* current = tail;
        while (current != nullptr) {
            std::cout << current->getValue() << " ";
            current = current->getPast();
        }
        std::cout << std::endl;
    }
};