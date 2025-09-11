class MyLinkedList {
public:
    struct ListNode{
        int val;
        ListNode* next;
        ListNode(int x): val(x),next(NULL){}
    };
    ListNode* head;
    ListNode* tail;
    int size;
    MyLinkedList() {
        head=nullptr;
        tail=nullptr;
        size=0;
        
    }
    
    int get(int index) {
        if(index<0 || index>=size) return -1;
        ListNode* temp=head;
        for(int i=0;i<index;i++){
            temp= temp-> next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        ListNode* node = new ListNode(val);
        node->next= head;
        head= node;
        if(size==0) tail=node;
        size++;
    }
    
    void addAtTail(int val) {
        ListNode * node= new ListNode(val);
        if(tail==nullptr){
            head=tail=node;
        }
        else{
            tail->next= node;
            tail=node;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0 || index>size){
            return;
        }
        if(index==0){
            addAtHead(val);
            return;
        }
        if(index==size){
            addAtTail(val);
            return;
        }
        ListNode* node= new ListNode(val);
        ListNode* temp= head;
        for(int i=0;i<index-1;i++){
            temp=temp->next;
        }
        node->next= temp->next;
        temp->next= node;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=size) return;
        if(index==0){
            ListNode * del= head;
            head=head->next;
            delete del;
            size--;
            if(size==0) tail=nullptr;
            return;
        }
        ListNode* temp=head;
        for(int i =0;i<index-1;i++){
            temp=temp->next;
        }
        ListNode* del = temp->next;
        temp->next= del->next;
        if(del==tail) tail=temp;
        delete del;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */