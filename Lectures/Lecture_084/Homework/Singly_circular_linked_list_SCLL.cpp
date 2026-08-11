#include <iostream>
using namespace std;

class Node
{
public:
    Node* next;
    int data;

    Node(int d) : data(d), next(NULL) {}
};

class CLL
{
    Node* head;
    Node* tail;

public:

    CLL() : head(NULL), tail(NULL) {}

    // Display Circular Linked List
    void display()
    {
        if (head == NULL)
        {
            cout << "List is Empty\n";
            return;
        }

        Node* traverse = head;

        do
        {
            cout << traverse->data << " ";
            traverse = traverse->next;
        }
        while (traverse != head);

        cout << endl;
    }


    // Insert at Start
    void insert_at_start(int x)
    {
        Node* temp = new Node(x);

        if (head == NULL)
        {
            head = tail = temp;
            tail->next = head;
        }
        else
        {
            temp->next = head;
            head = temp;
            tail->next = head;
        }
    }


    // Insert at Last
    void insert_at_last(int x)
    {
        Node* temp = new Node(x);

        if (head == NULL)
        {
            head = tail = temp;
            tail->next = head;
        }
        else
        {
            temp->next = head;
            tail->next = temp;
            tail = temp;
        }
    }


    // Insert at Particular Position
    void insert_at_particular_position(int pos, int x)
    {
        if (pos < 1)
        {
            cout << "Invalid Position\n";
        }
        else if (pos == 1)
        {
            insert_at_start(x);
        }
        else
        {
            if (head == NULL)
            {
                cout << "Invalid Position\n";
                return;
            }

            Node* traverse = head;

            // Move to node BEFORE required position
            for (int i = 1; i < pos - 1; i++)
            {
                traverse = traverse->next;

                if (traverse == head)
                {
                    cout << "Invalid Position\n";
                    return;
                }
            }

            // If inserting after tail
            if (traverse == tail)
            {
                insert_at_last(x);
            }
            else
            {
                Node* temp = new Node(x);

                temp->next = traverse->next;
                traverse->next = temp;
            }
        }
    }


    // Delete at Start
    void delete_at_start()
    {
        if (head == NULL)
        {
            cout << "List is Empty\n";
            return;
        }

        // Only one node
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node* temp = head;

            head = head->next;
            tail->next = head;

            delete temp;
        }
    }


    // Delete at End
    void delete_at_end()
    {
        if (head == NULL)
        {
            cout << "List is Empty\n";
            return;
        }

        // Only one node
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node* traverse = head;

            // Move to node before tail
            while (traverse->next != tail)
            {
                traverse = traverse->next;
            }

            Node* temp = tail;

            tail = traverse;
            tail->next = head;

            delete temp;
        }
    }


    // Delete at Particular Position
    void delete_at_particular_position(int pos)
    {
        if (pos < 1)
        {
            cout << "Invalid Position\n";
        }
        else if (head == NULL)
        {
            cout << "List is Empty\n";
        }
        else if (pos == 1)
        {
            delete_at_start();
        }
        else
        {
            Node* traverse = head;

            // Move to node BEFORE required position
            for (int i = 1; i < pos - 1; i++)
            {
                traverse = traverse->next;

                if (traverse == head)
                {
                    cout << "Invalid Position\n";
                    return;
                }
            }

            // If deleting tail
            if (traverse->next == tail)
            {
                delete_at_end();
            }
            else
            {
                Node* temp = traverse->next;

                traverse->next = temp->next;

                delete temp;
            }
        }
    }
};


int main()
{
    CLL list;

    cout << "========== INSERT AT START ==========\n";

    list.insert_at_start(30);
    list.insert_at_start(20);
    list.insert_at_start(10);

    cout << "List: ";
    list.display();


    cout << "\n========== INSERT AT LAST ==========\n";

    list.insert_at_last(40);
    list.insert_at_last(50);

    cout << "List: ";
    list.display();


    cout << "\n========== INSERT AT PARTICULAR POSITION ==========\n";

    // Insert 25 at position 3
    list.insert_at_particular_position(3, 25);

    cout << "After inserting 25 at position 3:\n";
    list.display();

    // Insert 5 at position 1
    list.insert_at_particular_position(1, 5);

    cout << "After inserting 5 at position 1:\n";
    list.display();

    // Insert 60 at last position
    list.insert_at_particular_position(8, 60);

    cout << "After inserting 60 at position 8:\n";
    list.display();


    cout << "\n========== DELETE AT START ==========\n";

    list.delete_at_start();

    cout << "After deleting from start:\n";
    list.display();


    cout << "\n========== DELETE AT END ==========\n";

    list.delete_at_end();

    cout << "After deleting from end:\n";
    list.display();


    cout << "\n========== DELETE AT PARTICULAR POSITION ==========\n";

    // Delete position 3
    list.delete_at_particular_position(3);

    cout << "After deleting position 3:\n";
    list.display();

    // Delete position 1
    list.delete_at_particular_position(1);

    cout << "After deleting position 1:\n";
    list.display();


    cout << "\n========== INVALID POSITION ==========\n";

    list.delete_at_particular_position(100);

    cout << "\nFinal List: ";
    list.display();

    return 0;
}