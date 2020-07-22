#include <iostream>

using namespace std;

class Book{
    public:
        int length;
        string title;
        string language;
        bool isNew;
        string author;
};

int main()
{
    Book book1;
    book1.title = "Introduction to algorithms";
    book1.length = 1237;
    book1.isNew = true;
    book1.author = "Cormen";

    cout<< book1.title << endl;

    return 0;
}