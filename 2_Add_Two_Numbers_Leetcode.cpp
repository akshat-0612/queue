class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* l3= new ListNode(0);
        ListNode* curr=l3;
        int carry=0;
        int sum=0;
        while(l1!=NULL && l2!=NULL){
            sum=l1->val+l2->val+carry;
            if(sum>9){
                carry=sum/10;
                sum=sum%10;
            }
            else{
                carry=0;
            } 
            l3->next=new ListNode(sum);
            l3=l3->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            sum=l1->val+carry;
            if(sum>9){
                carry=sum/10;
                sum=sum%10;
            } 
            else{
                carry=0;
            }
            l3->next=new ListNode(sum);
            l3=l3->next;
            l1=l1->next;
            
        }
        while(l2!=NULL){
            sum=l2->val+carry;
            if(sum>9){
                carry=sum/10;
                sum=sum%10;
            } 
            else{
                carry=0;
            }
            l3->next=new ListNode(sum);
            l3=l3->next;
            
            l2=l2->next;
        }
        if(carry>0){
            l3->next=new ListNode(carry);
        }
        return curr->next;
        
    }
};