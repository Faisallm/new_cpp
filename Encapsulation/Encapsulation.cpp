#include <iostream>
#include <list>
using namespace std;

// Encapsulation says that the attributes of the class...
// should not be public or private.
// but instead we should be only able to access these properties...
// using methods of the class.

class YoutubeChannel {
    // these can't be accessed from outside the classe
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
    // these can be accessed from outside the class.
public:
    YoutubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void GetInfo() {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        for (string videoTitle : PublishedVideoTitles) {
            cout << "Video: " << videoTitle << endl;
        }
        
    }

    void Subscribe() {
        // increase by 1
        SubscribersCount++;
    }

    void Unsubscribe() {
        if(SubscribersCount > 0)
            SubscribersCount--;
    }

    void PublishVideo(string title) {
        PublishedVideoTitles.push_back(title);
    }
};

int main()
{
    YoutubeChannel ytChannel("Mission to Mars", "Faisal");
    // so c++ also have multiple lines comment
    /*ytChannel.PublishedVideoTitles.push_back("Manned Vehicles");
    ytChannel.PublishedVideoTitles.push_back("Propulsion");
    ytChannel.PublishedVideoTitles.push_back("Space Ships");*/
    // this should not be allowed.
    ytChannel.Unsubscribe();

    ytChannel.PublishVideo("Coder coder fruit");
    ytChannel.PublishVideo("fruitNinja");

    ytChannel.GetInfo();


    system("pause>0");
}

