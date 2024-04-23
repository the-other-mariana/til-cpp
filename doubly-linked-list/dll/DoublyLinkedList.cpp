#include "../node/Node.cpp"

class DoublyLinkedList {
    public:
        int size;
        Node* tail;
        Node* head;

        DoublyLinkedList() : tail(nullptr), head(nullptr) {

        }

        void push(int new_data) {
            // Node new_node(new_data); this will die when the function exits
            // to avoid that, use dynamic memory so that the object persists beyond the scope of the func
            Node* new_node = new Node(new_data);
            new_node->prev = this->tail;
            
            // case: adding the first element
            if (this->head == nullptr) {
                this->head = new_node;
                this->tail = new_node;
            }

            if (this->tail != nullptr) {
                this->tail->next = new_node;
            }

            this->tail = new_node;
            this->size++;
        }
};