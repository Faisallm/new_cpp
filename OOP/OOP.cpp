#include <iostream>
#include <list>
using namespace std;

// a class is a user-define datatype.
// constructors and class methods.

class YoutubeChannel {
    // attributes that can be accessed outside the class.
public:
    string Name;
    string OwnerName;
    int subscribersCount;
    list<string> PublishedVideoTitles;

    // constructors will have the same name as the class.
    // this method gets run when we create an instance...
    // of a class.
    YoutubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        subscribersCount = 0;
    }

    void GetInfo() {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << subscribersCount << endl;
        cout << "Videos: " << endl;

        for (string videoTitle : PublishedVideoTitles) {
            cout << "Video: " << videoTitle << endl;
        }
    }
};


int main()
{
    YoutubeChannel ytChannel("Mission to Mars", "Faisal Muhammad");
    // push_back is a class function that append new items to...
    // to the end of the list.
    // push_back() the same as append() in python.
    // yes  it is
    ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
    ytChannel.PublishedVideoTitles.push_back("HTML and CSS for beginners");
    ytChannel.PublishedVideoTitles.push_back("C++ OOP");

    ytChannel.GetInfo();
    

    

    system("pause>0");
}


