#include <iostream>

#include "BookSelf.h"

using namespace std;

int main() {
    BookSelf bookSelf;

    bookSelf.appendBook(Book("Around the World in 80 Days"));
    bookSelf.appendBook(Book("Bible"));
    bookSelf.appendBook(Book("Cinderella"));
    bookSelf.appendBook(Book("Daddy-Long-Legs"));

    cout<<string(80, '-')<<endl;

    auto it = bookSelf.iterator();
    while (it->hasNext())
    {
        auto pBook = static_cast<Book *>(it->next());

        if (pBook)
        {
            cout<<pBook->getName()<<endl;
        }
    }

    cout<<string(80, '-')<<endl;

    return 0;
}