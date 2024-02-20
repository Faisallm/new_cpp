#include <iostream>
#include <list>
using namespace std;

// classes are user-defined datatypes
class YouTubeChannel {
    // inorder to make the attributes accessible...
    // outside the class, we have to use public.
    // by default they are private
public:
    string Name;
    string OwnerName;
    int subscribersCount;
    // we can also add another class here as the type
    list<string> PublishedVideoTitles;
};


int main()
{
    // creating instances of my class
    // and assigning attributes to it.
    YouTubeChannel ytChannel;
    ytChannel.Name = "trueCodeBeauty";
    ytChannel.OwnerName = "saldina";
    ytChannel.subscribersCount = 1800;
    ytChannel.PublishedVideoTitles = {"C++ for beginners Video 1", "HTML and CSS Video 1", "C++ OOP Video 1"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "subscribersCount: " << ytChannel.subscribersCount << endl;
    cout << "Videos: " << endl;
    // similar to python
    // for videoTitle in ytChannel.PublishedVideoTitles:
    // iterating through a list in c++
    for (string videoTitle : ytChannel.PublishedVideoTitles) {
        cout << videoTitle << endl;
    }

    system("pause>0");
}

