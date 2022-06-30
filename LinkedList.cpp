
#include <iostream> 

using namespace std;

struct ListNode {
    int val;
    ListNode * next;
    ListNode(int val) {
        this->val = val;
        next = nullptr;
    }
};

class LinkedList {
    public: 
    ListNode * head;
    LinkedList() { head = NULL; }

    void print() {
        ListNode * temp = head;
        while(temp != nullptr) {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << " NULL " << endl;
    }

    void push(int val) {
        ListNode * temp = new ListNode(val);
        temp->next = head;
        head = temp;
    }

    void reverse() {
        ListNode * curr = head;
        ListNode * prev = nullptr;
        ListNode * next = nullptr;

        while(curr != nullptr) {
            // grab next node 
            next = curr->next;
            // reverse current node's ptr
            curr->next = prev;
            // move pointers one position ahead
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    bool isPalindrome(LinkedList list) {
        bool palindrome = true; 
        // reverse list and compare with original list
        LinkedList reverse = list;
        reverse.reverse();

        // compare lists
        ListNode * lptr = list.head;
        ListNode * rlptr = reverse.head;

        while(lptr != nullptr && rlptr != nullptr) {
            if(lptr->val != rlptr->val)
                palindrome = false;
            
            lptr = lptr->next;
            rlptr = rlptr->next;
        }

        return palindrome;
    }

    void sortList() {
        //TODO: implement a sorting algorithm!
    }
};

int main() {
    LinkedList palindromeList; 
    palindromeList.push(1);
    palindromeList.push(2);
    palindromeList.push(2);
    palindromeList.push(1);
    
    cout << "Original List: ";
    palindromeList.print();

    cout << "Reversed List: ";
    palindromeList.reverse();
    palindromeList.print();

    cout << "Is the list a palindrome? ";
    cout << palindromeList.isPalindrome(palindromeList) << endl;
    
    cout << endl;

    LinkedList list;
    list.push(1);
    list.push(2);
    list.push(3);
    list.push(4);
    list.push(5);

    cout << "Original List: ";
    list.print();

    cout << "Reversed List: ";
    list.reverse();
    list.print();

    cout << "Is the list a palindrome? ";
    cout << list.isPalindrome(list) << endl;

    return 0;
}
