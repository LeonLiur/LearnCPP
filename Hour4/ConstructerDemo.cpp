#include <iostream>

using namespace std;

class Book{
    public:
        int length;
        string title;
        string language;
        bool isNew;
        string author;

    Book(int aLength, string aTitle, string aLanguage, bool aIsNew, string aAuthor){
        length = aLength;
        title = aTitle;
        language = aLanguage;
        isNew = aIsNew;
        author = aAuthor;
    }

    Book(){

    }
};

int main()
{
    Book book1(1237, "Introduction to algorithms", "English", true, "Cormen");

    cout<< book1.length << endl;

    return 0;
}
