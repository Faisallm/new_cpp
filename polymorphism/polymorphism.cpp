#include <iostream>
#include <list>
using namespace std;

// polymorphism refers to methods with the name...
// but different implementation.


// Encapsulation says that the attributes of the class...
// should not be public or private.
// but instead we should be only able to access these properties...
// using methods of the class.

class YoutubeChannel {
    // these can't be accessed from outside the classe
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
    // these can be accessed from outside the class.

    //  this owner name should be accessible in derived classes...
    // as well  but it still a private attribute.
protected:
    string OwnerName;
    int ContentQuality;

public:
    // class constructor
    YoutubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
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
        if (SubscribersCount > 0)
            SubscribersCount--;
    }

    void PublishVideo(string title) {
        PublishedVideoTitles.push_back(title);
    }

    void checkAnalytics() {
        if (ContentQuality < 5) {
            cout << Name << " has bad quality content." << endl;
        } 
        else {
            cout << Name << " has great content. " << endl;
        }
    }
};


// let's create another type of class
// that inherits from the YoutubeChannel channel class.
class CookingYoutubeChannel :public YoutubeChannel {
public:
    // Constructor
    CookingYoutubeChannel(string name, string ownerName) :YoutubeChannel(name, ownerName) {

    }

    void Practice() {
        cout << OwnerName << " is Practicing cooking, learning new recipes, experimenting with spices..." << endl;
        ContentQuality++;
    }
};

class CodersYoutubeChannel :public YoutubeChannel {
public:
    CodersYoutubeChannel(string name, string ownerName) :YoutubeChannel(name, ownerName) {

    }
    
    void Practice() {
        cout << OwnerName << " Is coding up a c++ simulation and prediction library. " << endl;
        ContentQuality++;
    }
};

int main()
{
    
    CookingYoutubeChannel cookingYtChannel("Amimiey's  Kitchen", "Amimiey");
    
    CodersYoutubeChannel codingYtChannel("Faisal's Cave", "Faisal");

    cookingYtChannel.Practice();
    codingYtChannel.Practice();
    codingYtChannel.Practice();
    codingYtChannel.Practice();
    codingYtChannel.Practice();
    codingYtChannel.Practice();
    codingYtChannel.Practice();
    codingYtChannel.Practice();
    codingYtChannel.Practice();

    // a pointer of base class can point to an object...
    // of derived classes.
    YoutubeChannel* yt1 = &cookingYtChannel;
    YoutubeChannel* yt2 = &codingYtChannel;

    yt1->checkAnalytics();
    yt2->checkAnalytics();
    

    system("pause>0");
}

