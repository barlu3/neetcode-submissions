class LinkedList {
public:
    LinkedList() {
        head = tail = nullptr;
    }

    int get(int index) {
        Node* curr = head;
        int i = 0;
        while (curr) {
            if (i == index) return curr->data;
            curr = curr->next;
            i++;
        }
        return -1;
    }

    void insertHead(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;

        if (tail == nullptr) tail = temp;
    }
    
    void insertTail(int val) {
        Node* temp = new Node(val);
        if (tail == nullptr) {
            head = tail = temp;
            return;
        }
        tail->next = temp;
        tail = temp;
    }

    bool remove(int index) {
        Node* prev = nullptr;
        Node* dead = head;
        int i = 0;
        while (dead) {
            if (i == index) {  
                if (dead == head) {
                    prev = dead->next;
                    delete dead;
                    head = prev;
                }
                else if (dead == tail) {
                    prev->next = nullptr;
                    delete dead;
                    tail = prev;
                }
                else {
                    prev->next = dead->next;
                    delete dead;
                }
                return true;
            }
            prev = dead;
            dead = dead->next;
            i++;
        }
        return false;
    }

    vector<int> getValues() {
        vector<int> items;
        Node* curr = head;
        while (curr) { 
            items.push_back(curr->data); 
            curr = curr->next;
        }
        return items;
    }
private:
    struct Node {
        int data;

        Node* next;
        Node(int val) {
            data = val;
            next = nullptr;
        }
    };
    Node* head;
    Node* tail;
};
