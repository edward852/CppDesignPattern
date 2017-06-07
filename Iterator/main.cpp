#include <iostream>
#include <vector>
#include <stack>

#include "DinnerMenu.h"
#include "LunchMenu.h"

using namespace std;

int main() {
#if 1


    stack<int> stk;

    stk.push(3);
    stk.push(1);
    stk.push(5);
    cout<<"top:"<<stk.top()<<endl;
    stk.pop();
    cout<<"top:"<<stk.top()<<endl;
    stk.pop();
    cout<<"top:"<<stk.top()<<endl;
    stk.pop();

#else
    DinnerMenu dinnerMenu;
    LunchMenu lunchMenu;
    Iterator *iter = nullptr;
    MenuItem *item = nullptr;
    Menu* menu[] = { &dinnerMenu, &lunchMenu };
    int menuCnt = sizeof(menu)/sizeof(menu[0]);

    for (int i=0; i<menuCnt; i++) {
        iter = menu[i]->createIterator();
        if (nullptr == iter)
            break;

        while (iter->hasNext()) {
            MenuItem *item = static_cast<MenuItem *>(iter->next());
            if (nullptr == item)
                break;

            cout << item->getName() << endl;
            cout << "\tdescription: " << item->getDescription() << endl;
            cout << "\tvegetarian: " << item->isVegetarian() << endl;
            cout << "\tprice: " << item->getPrice() << endl;
            cout << endl;
        }
    }
#endif

    return 0;
}