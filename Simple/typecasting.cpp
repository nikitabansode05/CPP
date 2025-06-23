#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Cast
{
  private:
        int a=10;
        float b;
        float c;
        int d;
        string file="cast.dat";

 public:

        Cast()
        {
            a,b,c,d=0;      
        }
         
        void casting()
        {
            int a=10;
            float b=static_cast<float>(a);
            float c=10.24;
            int d=static_cast<int>(c);
        }
        void addToFile(ofstream& outFile)
        {
            //ofstream outFile(file);
            a=300;
            outFile.write(reinterpret_cast<char*>(&a),sizeof(a));
        }

        void extractFromFile(ifstream& inFile)
        {
            //ifstream inFile(file);
            inFile.read(reinterpret_cast<char*>(&a),sizeof(a));
            cout<<a;
        }

};
int main()
{  
    ofstream outFile("cast.dat");
    ifstream inFile("cast.dat");

    Cast c1;
    c1.casting();
    c1.addToFile(outFile);
    c1.extractFromFile(inFile);
    // cout<<a<<endl;
    // cout<<c<<endl; 

    return 0;

}