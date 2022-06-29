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

class Solution {
    public: 
    bool isPalindrome(ListNode * head) {
        //idea: reverse the singly linked list and compare first list
        
        //test to see if modules/everything is set up correctly
        bool palindrome = true;
            
        ListNode * ptr = head;
        while(ptr != nullptr) {
            ListNode temp = *ptr;
            cout << temp.val << endl;
            ptr = temp.next;
        }

        return palindrome;
    }
};

int main() {
    Solution soln;
    ListNode n3(1); 
    ListNode n2(2, &n3);
    ListNode n1(2, &n2);
    ListNode head(1, &n1);

    soln.isPalindrome(&head);

    return 0;
}
