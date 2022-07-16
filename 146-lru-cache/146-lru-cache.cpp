class LRUCache {
public:
    class node{
        public:
            int key;
        int val;
        node* next;
        node* prev;
        node(int _key , int value)
        {
            key = _key;
            val = value;
        }
    };
    int cap;
    unordered_map<int,node*> m;
    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);
    LRUCache(int capacity) 
    {
        cap = capacity;
        head -> next = tail;
        tail -> prev = head; 
    }
    void deleteNode(node* delNode)
    {
        node* delPrev = delNode -> prev;
        node* delNext = delNode -> next;
        delPrev -> next = delNext;
        delNext ->prev = delPrev;
    }
    void addNode(node* newNode)
    {
        node* temp = head -> next;
        newNode -> next = temp;
        newNode -> prev = head;
        head -> next = newNode;
        temp -> prev = newNode;
    }
    int get(int _key) 
    {
        if(m.find(_key) != m.end())
        {
            node* resNode  = m[_key];
            int res = resNode -> val;
            m.erase(_key);
            deleteNode(resNode);
            addNode(resNode);
            m[_key] = head -> next;
            return res;
        }
        return -1;
    }
    
    void put(int _key, int value) 
    {
        if(m.find(_key) != m.end())
        {
            node* existingNode = m[_key];
            m.erase(_key);
            deleteNode(existingNode);
        }
        if(m.size() == cap)
        {
            m.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new node(_key,value));
        m[_key] = head -> next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */