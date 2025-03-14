#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist {
private:
    string songs[20];
    int count = 0 ;
    string current ; 
    
public:

    void add(string song)  {
        if (count > 20) return ;

        this->songs[count] = song ;
        count ++ ;

    }

    void setCurrentTrack(int value){
        this->current = this->songs[value-1] ;
    } ;

    string play() {
        return this->current ;
    };


};





int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}