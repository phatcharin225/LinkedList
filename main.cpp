#include "../ChainNode/ChainNode.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;

int main()
{
    int maxSize, choice, i, e, value;
    cout << "66012646 Phatcharin Aemaod" <<endl;
    cout << "Enter maxSize of List : ";
    cin >> maxSize;
    LinkedList list(maxSize);
    do
    {
        list.display();
        cout << "Current size of list : " << list.size() <<"/" << list.get_maxSize() <<endl;
        cout << "Welcome to lab LinkedList" <<endl;
        cout << "1. size()" <<endl;
        cout << "2. indexOf(int e)" <<endl;
        cout << "3. get(int i)" <<endl;
        cout << "4. set(int i, int e)" <<endl;
        cout << "5. add(int i, int e)" <<endl;
        cout << "6. remove(int i)" <<endl;
        cout << "7. display()" <<endl;
        cout << "8. clear()" <<endl;
        cout << "9. min()" <<endl;
        cout << "10. max()" <<endl;
        cout << "11. oddCount()" <<endl;
        cout << "12. EvenCount()" <<endl;
        cout << "13. sum()" <<endl;
        cout << "14. mean()" <<endl;
        cout << "15. sort()" <<endl;
        cout << "0. Exit program !! " <<endl;
        cout << "Select your Choice: " ;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << " Current list Size is : " << list.size() <<endl;
            break;
        case 2:
            cout << "Enter Element : ";
            cin >> e;
            list.indexOf(e);
            cout << "First Index of " << e << "found at " << i << endl;
            break;
        case 3:
            cout << "Enter Index : ";
            cin >> i;
            e = list.get(i);
            cout << "Element is : " << e << endl;
            break;
        case 4:
            cout << "Enter Index : ";
            cin >> i;
            e = list.remove(i);
            cout << "Element is : " << e << endl;
            break;
        case 5:
            cout << "Enter Index : ";
            cin >> i;
            cout << "Enter Element : ";
            cin >> e;
            list.set(i, e);
            break;
        case 6:
            cout << "Input Add Index : ";
            cin >> i;
            cout << "Input Add Element : ";
            cin >> e;
            break;
        case 7:
            e = list.min();
            cout << "Minimum Element is " << e << endl;
            break;
        case 8:
            e = list.max();
            cout << "Maximum Element is " << e << endl;
            break;
        case 9:
            list.display();
            cout << "Current size of list : " << list.size() <<"/" << list.get_maxSize() << endl;
            break;
        case 10:
            list.clear();
            cout << "LinkedList cleared . ";
            break;
        case 11:
            e = list.oddCount();
            cout << "Odd count is " << e << endl;
            break;
        case 12:
            e = list.EvenCount();
            cout << "Even Count is " << e << endl;
            break;
        case 13:
            value = list.sum();
            cout << "Summation is " << value << endl;
            break;
        case 14:
            value = list.mean();
            cout << "Average is " << value << endl;
            break;
        case 15:
            cout << "Sorted is " ;
            list.sort();
            break;
        case 0:
            cout << "Exit Program. " << endl;
            break;
        efault:
            cout << "Wrong choice, try again..." << endl;
            break;


        }

    } while (choice != 0);
    


    return 0;
}