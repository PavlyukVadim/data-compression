#include <iostream>
#include <string>
#include <vector>


using namespace std;


class Archiver
{
    vector<string> files;

    public:
        Archiver();
        Archiver(vector<string> const& filesName);
        virtual ~Archiver();

    string getFilesMetaData();
    void Compression();
    void Decompression();

    void getFilesName();
};

