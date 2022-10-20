#include <iostream>
#include <cstring>
using namespace std;

// Abstract Class
// For more information , go to - https://bit.ly/3yWw6Ec
class AT
{
protected:
    string title;
    float rating;

public:
    AT(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // do-nothing function --> pure virtual function
};

class ATVideo : public AT
{
    float videolength;

public:
    ATVideo(string s, float r, float vl) : AT(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title : " << title << endl;
        cout << "Rating : " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is : " << videolength << " minutes" << endl;
    }
};

class ATText : public AT
{
    int words;

public:
    ATText(string s, float r, int wc) : AT(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title : " << title << endl;
        cout << "Ratings of this text tutorial : " << rating << " out of 5 stars" << endl;
        cout << "No. of words in this text tutorial is : " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for ATVideo
    title = "Django Tutorial";
    rating = 4.89;
    vlen = 6.77;
    ATVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // for ATText
    title = "Django Tutorial Text";
    rating = 4.59;
    words = 677;
    ATText djText(title, rating, words);
    // djText.display();

    AT *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    cout << endl;
    tuts[1]->display();

    return 0;
}
/*
    Rules for virtual functions

    1. They cannot be static.
    2. They are accessed by object pointers.
    3. Virtual functions can be a friend of another class.
    4. A virtual function in base class might not be used.
    5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class.
*/
/*
OUTPUT

This is an amazing video with title : Django Tutorial
Rating : 4.89 out of 5 stars
Length of this video is : 6.77 minutes

This is an amazing text tutorial with title : Django Tutorial Text
Ratings of this text tutorial : 4.59 out of 5 stars
No. of words in this text tutorial is : 677 words

*/