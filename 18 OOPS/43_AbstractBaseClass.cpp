/*
Abstract Base Class in C++
Abstract base class is a class that has at least one pure virtual function in its body.
The classes which are inheriting the base class must need to override the virtual 
function of the abstract class otherwise compiler will throw an error.


Abstract Base Class in C++
Abstract base class is a class that has at least one pure virtual function in its body. 
The classes which are inheriting the base class must need to override the virtual 
function of the abstract class otherwise compiler will throw an error.

*/
#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; /* do-nothing-function - - > pure vrtual function*/
};

class CWHVideo : public CWH
{
    int videolength;

public:
    CWHVideo(string s, float r, int vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is " << videolength << " mintues" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "Number of words in this text tutorial is " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;
    // for code with harry
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    title = "Django tutorialText";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    // djText.display();
    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

