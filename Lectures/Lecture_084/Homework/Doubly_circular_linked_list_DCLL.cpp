#include <iostream>
using namespace std;

class Node
{
public:
    Node* prev;
    int data;
    Node* next;

    Node(int d) : prev(NULL), data(d), next(NULL) {}
};


class DCLL
{
    Node* head;
    Node* tail;

public:

    DCLL() : head(NULL), tail(NULL) {}


    // Display from Start to End
    void display_forward()
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


    // Display from End to Start
    void display_backward()
    {
        if (tail == NULL)
        {
            cout << "List is Empty\n";
            return;
        }

        Node* traverse = tail;

        do
        {
            cout << traverse->data << " ";
            traverse = traverse->prev;
        }
        while (traverse != tail);

        cout << endl;
    }


    // Insert at Start
    void insert_at_start(int x)
    {
        Node* temp = new Node(x);

        if (head == NULL)
        {
            head = tail = temp;

            head->next = head;
            head->prev = head;
        }
        else
        {
            temp->next = head;
            temp->prev = tail;

            head->prev = temp;
            tail->next = temp;

            head = temp;
        }
    }


    // Insert at Last
    void insert_at_last(int x)
    {
        Node* temp = new Node(x);

        if (head == NULL)
        {
            head = tail = temp;

            head->next = head;
            head->prev = head;
        }
        else
        {
            temp->prev = tail;
            temp->next = head;

            tail->next = temp;
            head->prev = temp;

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

            // Move to node before required position
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
                temp->prev = traverse;

                traverse->next->prev = temp;
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

            head->prev = tail;
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
            delete tail;
            head = tail = NULL;
        }
        else
        {
            Node* temp = tail;

            tail = tail->prev;

            tail->next = head;
            head->prev = tail;

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

            // Move to node before required position
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
                temp->next->prev = traverse;

                delete temp;
            }
        }
    }
};


int main()
{
    DCLL list;


    cout << "========== INSERT AT START ==========\n";

    list.insert_at_start(30);
    list.insert_at_start(20);
    list.insert_at_start(10);

    cout << "Forward:  ";
    list.display_forward();

    cout << "Backward: ";
    list.display_backward();


    cout << "\n========== INSERT AT LAST ==========\n";

    list.insert_at_last(40);
    list.insert_at_last(50);

    cout << "Forward:  ";
    list.display_forward();

    cout << "Backward: ";
    list.display_backward();


    cout << "\n========== INSERT AT PARTICULAR POSITION ==========\n";

    // Insert 25 at position 3
    list.insert_at_particular_position(3, 25);

    cout << "After inserting 25 at position 3:\n";

    cout << "Forward:  ";
    list.display_forward();

    cout << "Backward: ";
    list.display_backward();


    // Insert 5 at position 1
    list.insert_at_particular_position(1, 5);

    cout << "\nAfter inserting 5 at position 1:\n";

    cout << "Forward:  ";
    list.display_forward();

    cout << "Backward: ";
    list.display_backward();


    // Insert 60 at last position
    list.insert_at_particular_position(8, 60);

    cout << "\nAfter inserting 60 at position 8:\n";

    cout << "Forward:  ";
    list.display_forward();

    cout << "Backward: ";
    list.display_backward();


    cout << "\n========== DELETE AT START ==========\n";

    list.delete_at_start();

    cout << "After deleting from start:\n";

    cout << "Forward:  ";
    list.display_forward();

    cout << "Backward: ";
    list.display_backward();


    cout << "\n========== DELETE AT END ==========\n";

    list.delete_at_end();

    cout << "After deleting from end:\n";

    cout << "Forward:  ";
    list.display_forward();

    cout << "Backward: ";
    list.display_backward();


    cout << "\n========== DELETE AT PARTICULAR POSITION ==========\n";

    // Delete position 3
    list.delete_at_particular_position(3);

    cout << "After deleting position 3:\n";

    cout << "Forward:  ";
    list.display_forward();

    cout << "Backward: ";
    list.display_backward();


    // Delete position 1
    list.delete_at_particular_position(1);

    cout << "\nAfter deleting position 1:\n";

    cout << "Forward:  ";
    list.display_forward();

    cout << "Backward: ";
    list.display_backward();


    cout << "\n========== INVALID POSITION ==========\n";

    list.delete_at_particular_position(100);


    cout << "\n========== FINAL LIST ==========\n";

    cout << "Forward:  ";
    list.display_forward();

    cout << "Backward: ";
    list.display_backward();


    return 0;
}