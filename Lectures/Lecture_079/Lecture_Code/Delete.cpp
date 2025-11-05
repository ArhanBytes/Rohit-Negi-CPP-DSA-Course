#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class LinkedList
{
    Node *Head;

public:
    LinkedList()
    {
        Head = NULL;
    }
    // 1: INSERT OPERATIONS

    // insert at start
    void insert_at_start(int data)
    {
        if (Head == NULL)
            Head = new Node(data);
        else
        {
            Node *temp = new Node(data);
            temp->next = Head;
            Head = temp;
        }
    }

    // insert at start using recursion
    Node *insert_at_start(int *arr, int index, int size, Node *next)
    {
        // base case
        if (index == size)
            return next;

        Node *temp = new Node(arr[index]);
        temp->next = next;

        return insert_at_start(arr, index + 1, size, temp);
    }

    void insert_at_start_using_recurison(int *arr, int size)
    {
        Head = insert_at_start(arr, 0, size, Head);
    }

    // insert at last
    void insert_at_last(int data)
    {
        if (Head == NULL)
            Head = new Node(data);
        else
        {
            Node *temp = Head;
            while (temp->next != NULL)
                temp = temp->next;

            temp->next = new Node(data);
        }
    }

    // Insert at last using recursion
    Node *insert_at_last(int *arr, int index, int size)
    {
        // base case
        if (index == size)
            return NULL;

        Node *temp = new Node(arr[index]);
        temp->next = insert_at_last(arr, index + 1, size);

        return temp;
    }

    void insert_at_last_using_recursion(int *arr, int size)
    {
        if (Head == NULL)
            Head = insert_at_last(arr, 0, size);
        else
        {
            Node *temp = Head;
            while (temp->next != NULL)
                temp = temp->next;

            temp->next = insert_at_last(arr, 0, size);
        }
    }

    // insert at particular location
    void insert_at_particular(int position, int data)
    {
        if (position < 0)
        {
            cout << "Invalid Position :)" << endl;
        }
        else if (position == 0)
            insert_at_start(data);
        else
        {
            Node *traverse = Head;
            while (--position && traverse != NULL)
                traverse = traverse->next;

            if (traverse == NULL)
            {
                cout << "Invalid Position :)" << endl;
                return;
            }

            Node *temp = new Node(data);
            temp->next = traverse->next;
            traverse->next = temp;
        }
    }

    // 2: DELETE OPERATIONS

    // Delete at start
    void delete_at_start()
    {
        if (Head == NULL)
            cout << "No Node available to delete :)\n";
        else
        {
            Node *temp = Head;
            Head = Head->next;
            delete temp;
        }
    }

    // Delete at last
    void delete_at_last()
    {
        if (Head == NULL) // 1: No Node
            cout << "No Node available :)\n";
        else if (Head->next == NULL) // 2: Only One Node
        {
            Node *temp = Head;
            Head = NULL;
            delete temp;
        }
        else // 3: Multiple Nodes
        {
            Node *prev = NULL;
            Node *curr = Head;

            while (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }

            delete curr;
            prev->next = NULL;
        }
    }

    // Delete at Particular Location
    void Delete_at_particular(int position)
    {
        if (Head == NULL)
            cout << "No Node Available :)\n";
        else if (position < 1)
            cout << "Invalid Position :)\n";
        else if (position == 1)
        {
            Node *temp = Head;
            Head = Head->next;
            delete temp;
        }
        else
        {
            Node *prev = NULL;
            Node *curr = Head;

            while (--position && curr != NULL)
            {
                prev = curr;
                curr = curr->next;
            }

            // if position to delete is not avaliable in LL
            if (curr == NULL)
            {
                cout << "Invalid Postion :)\n";
                return;
            }

            prev->next = curr->next;
            delete curr;
        }
    }

    // print linkedlist
    void print_linkedlist()
    {
        Node *temp = Head;
        cout << "Printing LinkedList: ";
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList L1;

    int arr[] = {2, 4, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // 1: insert at start
    for (int i = 0; i < n; i++)
    {
        L1.insert_at_start(arr[i]);
    }

    // 2: insert at last
    L1.insert_at_last(9);
    L1.insert_at_last(11);

    // 3: insert at end using recursion
    int arr2[] = {10, 20, 30, 40};
    int n2 = sizeof(arr) / sizeof(arr[0]);

    L1.insert_at_last_using_recursion(arr2, n2);

    // 4: insert at start using recursion
    int arr3[] = {100, 200, 300, 400};
    int n3 = sizeof(arr) / sizeof(arr[0]);
    L1.insert_at_start_using_recurison(arr3, n3);

    // 5: insert at particular location
    L1.insert_at_particular(14, 3);

    // 6: Delete at start
    L1.delete_at_start();

    // 7: Delete at last
    L1.delete_at_last();

    L1.Delete_at_particular(20);

    // printing linkedlist
    L1.print_linkedlist();

    return 0;
}