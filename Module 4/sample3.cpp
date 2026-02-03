

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

double computeTotalPrice(const Item items[], int size) {
    double total = 0.0;
    for (int i = 0; i< size;i++){
        total += items[i].price;
    }
    return total;
}

double computeAveragePrice(const Item items[], int size) {
    if (size==0) return 0.0;
    return computeTotalPrice(items, size)/size;
}


void applyDiscount(Item items[], int size, double discountPercentage){
    for (int i = 0; i<size; i++) {
        items[i].price -= items[i].price * (discountPercentage/100.0);
        
    }
    cout << "Discount applied successfully.\n";
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
        cout << "3. Compute total price\n";
        cout << "4. Compute average price\n";
        cout << "5. Apply Discount\n";
        cout << "6. Exit\n";
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
                if (count >0) {
                    cout << "Total Price " << fixed << setprecision(2)
                        << computeTotalPrice(items,count)<<endl;
                }else{
                    cout << "No item to compute...\n";
                }
                break;
            case 4:
                if (count >0) {
                    cout << "Average Price " << fixed << setprecision(2)
                        <<computeAveragePrice(items,count)<<endl;
                }else{
                    cout << "No item to compute the average price...\n";
                }
                break;
            case 5:
                if (count >0) {
                    double discountPercentage;
                    cout << "Enter discount Percentage ";
                    cin >> discountPercentage;
                    applyDiscount(items, count,discountPercentage );
                }else{
                    cout << "No item to compute the average price...\n";
                }
                break;
            case 6:
                cout << "Exit....\n";
                break;
            default:
                cout << "Invalid Choice\n";
        }
        
    }while (choice != 6);
    return 0;
}
