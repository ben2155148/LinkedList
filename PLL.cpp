#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

struct ListNode {
    int val;
    ListNode * next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode * next) : val(x), next(next) {}
};

class LinkedList {
    public: 
    ListNode * head;
    LinkedList() { head = NULL; }

    void print() {
        ListNode * temp = head;
        while(temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }

    void push(int val) {
        ListNode * temp = new ListNode(val);
        temp->next = head;
        head = temp;
    }

    bool isPalindrome(LinkedList list) {
        bool palindrome = true;

        LinkedList reversed;

        

        return palindrome;
    }
};

int main() {
    LinkedList list; 
    list.push(1);
    list.push(2);
    list.push(3);
    list.push(4);

    list.print();

    return 0;
}
