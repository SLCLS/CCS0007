

#include <iostream>
#include <iomanip>
using namespace std;

struct Item {
    int id;
    char name[50];
    double price;
};

void addItem (Item items[], int index) {
   cout << "Enter Id: ";
   cin >> items[index].id;
   cin.ignore();
   cout << "Enter Name: ";
   cin.getline(items[index].name,49);
   cout << "Enter Price: ";
   cin >> items[index].price;
}

void displayItems(const Item items[], int size) {
    cout << setw(10) << "ID" << setw(30) << "Name" << setw(10) << "Price\n";
    for (int i =0; i<size; i++){
        cout    << setw(10) << items[i].id
                << setw(30) << items[i].name
                << setw(10) << items[i].price <<endl;
        
    }
    
}

int main()
{
    const int MAX_ITEMS = 2;
    Item items[MAX_ITEMS];
    int choice, count = 0;

    do {
        cout << "\nMENU\n";
        cout << "1. Add Item\n";
        cout << "2. Display Item\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                if (count < MAX_ITEMS) {
                    addItem(items, count);
                    count++;
                }else{
                    cout << "Item limit reached.\n";
                }
                break;
            case 2:
                if (count>0){
                    displayItems(items, count);
                    
                }else{
                    cout << "No Items to display\n";
                }
                break;
            case 3:
                cout << "Exit....\n";
                break;
            case 4:
                cout << "Invalid Choice\n";
        }
        
    }while (choice != 3);
    return 0;
}
