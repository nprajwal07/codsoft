// word count

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int CountWords(ifstream & file){
    string word;
    int count = 0;
    while(file >> word){
        count++;
    }
    return count;
}

int main(){
    string filename;
    cout<<"Enter the file name:";
    getline(cin,filename);
    ifstream file(filename);
    if(!file){
        cerr<<"error opening file. \n";
        return 1;
    }
    int word_count = CountWords(file);
    cout<<"Total word count: "<<word_count<<endl;

    file.close();

    return 0;
}