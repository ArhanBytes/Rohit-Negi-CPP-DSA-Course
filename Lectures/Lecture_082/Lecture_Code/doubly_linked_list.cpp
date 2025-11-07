#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    Node *next;
    int data;
    Node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;
    Node *t;

public:
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    // 1: INSERTION OPERATION
    // insert at start
    void insert_at_start(int data)
    {
        // if there is no node
        if (head == NULL)
            head = tail = new Node(data);
        else
        {
            Node *temp = new Node(data);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    // insert at last
    void insert_at_last(int data)
    {
        if (head == NULL)
            head = tail = new Node(data);
        else
        {
            Node *temp = new Node(data);
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
    }

    // insert array using recurison
    Node *insert_at_last(int *arr, int index, int size, Node *previous)
    {
        // base case
        if (index == size)
        {
            t = previous;
            return NULL;
        }

        // recursive appraoch
        Node *temp = new Node(arr[index]);
        temp->prev = previous;
        temp->next = insert_at_last(arr, index + 1, size, temp);

        return temp;
    }

    void insert_at_last_using_recursion(int *arr, int size)
    {
        if (head == NULL)
        {
            head = insert_at_last(arr, 0, size, NULL);
            tail = t;
        }
        else
        {
            tail->next = insert_at_last(arr, 0, size, NULL);
            (tail->next)->prev = tail;
            tail = t;
        }
    }

    // insert array at start using recursion
    Node *insert_at_start(int *arr, int index, int size, Node *nxt)
    {
        // base case
        if (index == size)
        {
            t = nxt;
            return NULL;
        }

        Node *temp = new Node(arr[index]);
        temp->next = nxt;
        temp->prev = insert_at_start(arr, index + 1, size, temp);

        return temp;
    }

    void insert_at_start_using_recursion(int *arr, int size)
    {
        // if there is no node
        if (head == NULL)
        {
            tail = insert_at_start(arr, 0, size, NULL);
            head = t;
        }
        else
        {
            Node *temp;
            temp = insert_at_start(arr, 0, size, NULL);
            temp->next = head;
            head->prev = temp;
            head = t;
        }
    }

    // insert at particular location
    void insert_at_particular_location(int position, int data)
    {
        if (position == 0)
            insert_at_start(data);
        else
        {
            Node *curr = head;
            while (--position && curr != NULL)
            {
                curr = curr->next;
            }

            // the position is greater than number of nodes
            if (curr == NULL)
            {
                cout << "Invalid Position :)";
            }
            else
            {
                Node *temp = new Node(data);
                temp->prev = curr;
                temp->next = curr->next;
                if (curr->next != NULL) // inserted node is somewhere between
                    (temp->next)->prev = temp;
                else // inserted node is last
                    tail = temp;
                curr->next = temp;
            }
        }
    }

    // 2: DELETION OPERATIONS
    // delete at start
    void delete_at_start()
    {
        // if there is no node
        if (head == NULL)
            cout << "No Node Available :)\n";
        else if (head->next == NULL) // Only one node
        {
            delete head;
            head = tail = NULL;
        }
        else // multiple nodes
        {
            Node *temp = head;
            head = head->next;
            head->prev = NULL;

            delete temp;
        }
    }

    // delete at last
    void delete_at_last()
    {
        if (head == NULL)
            cout << "No Node Available :)\n";
        else if (head->next == NULL)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node *temp = tail;
            tail = tail->prev;
            tail->next = NULL;

            delete temp;
        }
    }

    // delete at particular location
    void delete_at_particular_location(int position)
    {
        if (head == NULL)
            cout << "No Node Available :)\n";
        else if (position < 1)
            cout << "Invalid Position :)\n";
        else if (position == 1)
            delete_at_start();
        else
        {
            Node *curr = head;
            while (--position && curr)
                curr = curr->next;

            if (curr == NULL)
                cout << "Invalid Location :)\n";
            else
            {
                (curr->prev)->next = curr->next;
                if (curr->next != NULL) // if it is not last element
                    (curr->next)->prev = curr->prev;
                else // if it is last element
                    tail = curr->prev;

                delete curr;
            }
        }
    }
    // PRINTING FORWARD
    void print_forward()
    {
        Node *temp = head;
        cout << "Printing Doubly Linked List: ";
        while (temp)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << "NULL\n";
    }

    // PRINTING BACKWARD
    void print_backward()
    {
        Node *temp = tail;
        cout << "Printing Doubly Linked List: NULL";
        while (temp)
        {
            cout << "<-" << temp->data;
            temp = temp->prev;
        }
    }
};

int main()
{
    DoublyLinkedList DLL;
    // 1: insert at first
    DLL.insert_at_start(5);
    DLL.insert_at_start(6);

    // 2: insert at last
    DLL.insert_at_last(2);
    DLL.insert_at_last(3);

    // 3: insert an array at last
    int arr[] = {100, 200, 300, 400};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
        DLL.insert_at_last(arr[i]);

    // 4: insert an array at last using recursion
    int arr2[] = {10, 20, 30, 40};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    DLL.insert_at_last_using_recursion(arr2, n2);

    // 5: insert an array at start using recursion
    int arr3[] = {1000, 2000, 3000, 4000};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    DLL.insert_at_start_using_recursion(arr3, n3);

    // 6: inset at particular location
    DLL.insert_at_particular_location(16, 17); // after 16th node, add number 17 :)

    // 7: delete at start
    DLL.delete_at_start();

    // 8: delete at last
    DLL.delete_at_last();

    DLL.delete_at_particular_location(5);
    DLL.delete_at_particular_location(14);

    // printing the list
    DLL.print_forward();
    DLL.print_backward();
    return 0;
}