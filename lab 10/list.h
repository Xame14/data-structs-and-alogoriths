
class List{
    public:
    LinkedList();
    int size(); // return the number of data pointers(or nodes)
    ~LinkedList();
    
    private:
    
    class Node{
        public:
        Candidate* data;
        Node* next
    ;}
    Node* head;
    int count;
    Node* tail;
    
};
