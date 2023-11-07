/**
 * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
 */
class Solution
{
public:
    ListNode *num2Node(int n)
    {
        int cur = n, dig;
        ListNode *nd;
        while (cur > 0)
        {
            dig = cur % 10;
            ListNode node = ListNode(dig, nd);
            nd = &node;
        }
        return nd;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int a, b, sum = 0;
        ListNode *a1 = l1, *a2 = l2;
        while (a1->next != NULL && a2->next != NULL)
        {
            a1 = a1->next;
            a2 = a2->next;
            a = a1->val;
            b = a2->val;

            // sum logic
            sum = sum * 10 + a + b;
        }
        // cout << sum << endl;
        // return a1;
        return num2Node(sum);
    }
};