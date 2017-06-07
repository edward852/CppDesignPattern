#include <iostream>
#include "MallardDuck.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"

using namespace std;

int main() {
    MallardDuck mallardDuck;
    WildTurkey wildTurkey;
    TurkeyAdapter turkeyAdapter(wildTurkey);
    Duck *duck = nullptr;

    cout << "The Turkey says..." << endl;
    wildTurkey.gobble();
    wildTurkey.fly();
    cout<<endl;

    cout << "The Duck says..." << endl;
    duck = &mallardDuck;
    duck->quack();
    duck->fly();
    cout<<endl;

    cout << "The TurkeyAdapter says..." << endl;
    duck = &turkeyAdapter;
    duck->quack();
    duck->fly();
    cout<<endl;

    cout << "sizeof TurkeyAdapter: "<< sizeof(TurkeyAdapter) << endl;
    cout << "sizeof MallardDuck: "<< sizeof(MallardDuck) << endl;
    cout << "MallardDuck@"<<(int *)&mallardDuck<<endl;

    return 0;
}