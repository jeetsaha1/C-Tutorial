#include <iostream>
#include <string>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        // virtual void display(){}
        virtual void display() = 0;  //  do - nothing function --> pure virtual function
    };

class CWHVideo : public CWH{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl) : CWH(s,r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings :"<<rating<<" out of 5 stars "<<endl;
            cout<<"Length of the video is: "<<videoLength<<" minutes"<<endl;
        }
};

class CWHText : public CWH{
    float words;
    public:
        CWHText(string s, float r, int wc) : CWH(s,r){
            words = wc;
        }
        void display(){
            cout<<"This is the text with title "<<title<<endl;
            cout<<"Ratings :"<<rating<<" out of 5 stars "<<endl;
            cout<<"Word counts of the text is: "<<words<<" words"<<endl;
        }
};


int main() {
    string title;
    float rating, vlen;
    int words;

    //Video
    title = "Django Video";
    vlen = 4.56;
    rating = 4.67;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();    
    
    //Text
    title = "Django Video";
    words= 433;
    rating = 4.67;
    CWHText djText(title, rating, words);
    // djText.display(); 


    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}