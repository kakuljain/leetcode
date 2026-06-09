class BrowserHistory {
public:

    class Node {
    public:
        string val;
        Node* next;
        Node* prev;

        Node(string url) {
            val = url;
            next = nullptr;
            prev = nullptr;
        }
    };

    Node* curr;

    BrowserHistory(string homepage) {
        curr = new Node(homepage);
    }

    void visit(string url) {

        Node* newNode = new Node(url);

        curr->next = newNode;
        newNode->prev = curr;

        curr = newNode;
    }

    string back(int steps) {

        while (steps > 0 && curr->prev) {
            curr = curr->prev;
            steps--;
        }

        return curr->val;
    }

    string forward(int steps) {

        while (steps > 0 && curr->next) {
            curr = curr->next;
            steps--;
        }

        return curr->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */