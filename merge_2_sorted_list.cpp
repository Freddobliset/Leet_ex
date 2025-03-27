#include<iostream>
#include<vector>
using namespace std;
/**
 * Definition for singly-linked list.
 */ struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode list3(0);
            ListNode* newl=&list3;
          while(list1!=nullptr&&list2!=nullptr)
          {
            if(list1->val<=list2->val)
            {
                newl->next=list1;
                list1=list1->next;
            }else{
                newl->next=list2;
                list2=list2->next;
            }
            newl=newl->next;
          }
          newl->next = (list1 != nullptr) ? list1 : list2;
          return list3.next;
        }
    };