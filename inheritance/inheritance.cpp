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
    int SubscribersCount;
    list<string> PublishedVideoTitles;
    // these can be accessed from outside the class.

    //  this owner name should be accessible in derived classes...
    // as well  but it still a private attribute.
protected:
    string OwnerName;

public:
    // class constructor
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
        if (SubscribersCount > 0)
            SubscribersCount--;
    }

    void PublishVideo(string title) {
        PublishedVideoTitles.push_back(title);
    }
};


// let's create another type of class
// that inherits from the YoutubeChannel channel class.
class CookingYoutubeChannel:public YoutubeChannel {
public:
    // Constructor
    CookingYoutubeChannel(string name, string ownerName):YoutubeChannel(name, ownerName) {

    }

    void Practice() {
        cout << OwnerName << " is Practicing cooking, learning new recipes, experimenting with spices..." << endl;
    }
};

int main()
{
    CookingYoutubeChannel cookingYtChannel("Amimiey's  Kitchen", "Amimiey");
    CookingYoutubeChannel cookingYtChannel2("Faisal's  Kitchen", "Faisal");
    /*cookingYtChannel.PublishVideo("Apple Pie");
    cookingYtChannel.PublishVideo("Chocolate Cake");
    cookingYtChannel.Subscribe();
    cookingYtChannel.GetInfo();*/
    cookingYtChannel.Practice();
    cookingYtChannel2.Practice();

    system("pause>0");
}

