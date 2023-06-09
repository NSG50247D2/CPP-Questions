#include <iostream>
#include <fstream>
using namespace std;

void read_char()
{
    ifstream read_data;
    read_data.open("new_file_write2.txt", ios::in);
    if (!read_data)
        cout << "No such file"<<endl;
    else
    {
        char ch;
        while (!read_data.eof())
        {
            read_data >> noskipws >> ch;
            cout << ch;
        }
        read_data.close();
    }

}

void write_file()
{
    fstream new_file;
    new_file.open("new_file_write2.txt", ios::out);
    if (!new_file)
        cout << "No such file"<<endl;
    else
    {
        cout << "New file created";
        new_file << "Himanshu Joshi\n";
        new_file.close(); // Step 4: Closing file
    }
}

void append_file()
{
    fstream new_file;
    new_file.open("./Unit-05/new_file_write2.txt", ios::app);
    if (!new_file)
        cout << "No such file"<<endl;
    else
    {
        new_file << "Second Line!\n";
        cout << "Data is appended successfully!"<<endl;
        new_file.close(); // Step 4: Closing file
    }

}

void count()
{
    fstream new_file;
    int words = 0;
    int lines = 0;
    int characters = 0;
    new_file.open("./Unit-05/new_file_write2.txt", ios::in);
    if (!new_file)
        cout << "No such file"<<endl;
    else
    {
        char ch;
        while (!new_file.eof())
        {
            new_file >> noskipws >> ch;
            characters++;
            if (ch == '\n' | ch == ' ')
            {
                words++;
            }
            if (ch == '\n')
            {
                lines++;
            }
        }
        words++;
        characters--;
        lines++;
        cout << "Total words = " << words << endl;
        cout << "Total lines = " << lines << endl;
        cout << "Total characters = " << characters << endl;
        new_file.close();
    }
}

int main()
{
    write_file();
    // append_file();
    read_char();
    // count();
}
