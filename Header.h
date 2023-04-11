#include<iostream>
using namespace std;
#define num 10
class Tag {
private:
	int id;
	string name;
	string remarks;
public:
	Tag();
	Photo* x[num];
	void setid(int y);
	int getid(); 
	void setname(string y);
	string getname();
	void setremarks(string y);
	string getremarks(); 



};
class Photo {
private:
	int id;
	string title;
	string remarks;
	string type; 
	string privacy;
public:
	Photo();
	Location Photolocation;
	member PersonPhotographed;
	Tag *X[num];
	void setphotoid(int x);
	int getphotoid();
	void sephototremarks(string x);
	string getPhotoremarks();
	void settype(string x);
	string gettype(); 
	void setprivacy(string x);
	string getprivacy(); 


};
class member {
	int id;
	string name;
	string address;
	string contact;
public:
	member();
	Photo* W[num];
	void setMemberId(int z);
	int getMemberId();
	void setMembername(string z);
	string getMemberName();
	void setAddress(string z);
	string getAddress();
	void setContact(string z);
	string getContact();


};
class Location {
private:
	int id;
	string name;
	string remarks;
public:
	Location();
	Photo* Y[num];
	void setLocationid(int y);
	int getLocationid();
	void setLocname(string y);
	string getLocname();
	void setLocRemarks(string y);
	string getLocRemarks();
};

class Album
{
private:
	int id;
	string name;
	string remarks;
public:
	Album(); 
	Photo *AlbumPhotos[num]; 
	void setAlbumId(int y);
	int getAlubumId();
	void setAlbumName(string y);
	string getAlbumName();
	void setAlbumRemarks(string y);
	string getAlbumRemarks();
	Album createAlbum(int , string , string );
	
};

