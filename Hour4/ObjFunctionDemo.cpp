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

    void read(){
        cout << "Reading " << title << " by " << author << endl;
    }
};

int main()
{
    Book book1(1237, "Introduction to algorithms", "English", true, "Cormen");

    book1.read();

    return 0;
}
