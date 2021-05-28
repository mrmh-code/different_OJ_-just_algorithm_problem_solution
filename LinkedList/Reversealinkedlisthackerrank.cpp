
/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

//problem Link:https://www.hackerrank.com/challenges/reverse-a-linked-list/problem

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
        SinglyLinkedListNode *curr=llist;
        SinglyLinkedListNode *prev=NULL;
        
        while(curr!=NULL){
            SinglyLinkedListNode *n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
        }
        
        return prev;
}
