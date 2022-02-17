#include <iostream>
using namespace std;

// Five arrays to store "Name","Roll-No","Course","Class","Contact".
string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];
// "total" is for total numbers of entries.
int total = 0;

// Five Functions to "Enter", "Show", "Search", "Update", "Delete" the data.
void enter()
{
    cout << endl;
    cout << "======================" << endl;
    int choice;

    if (total == 0)
    {
        cout << "How many students' data to store?" << endl;
        cin >> choice;
        total += choice;
        for (int i = 0; i < choice; i++)
        {
            cout << endl;
            cout << "---------------------" << endl;
            cout << "Enter the data for the student " << i + 1 << " :" << endl;

            cout << "Enter Name: ";
            cin >> arr1[i];
            cout << "Enter Roll Num: ";
            cin >> arr2[i];
            cout << "Enter Course: ";
            cin >> arr3[i];
            cout << "Enter Class: ";
            cin >> arr4[i];
            cout << "Enter Contact: ";
            cin >> arr5[i];
        }
    }
    else
    {
        cout << "How many students' data to store?" << endl;
        cin >> choice;
        total += choice;
        for (int i = total; i < total + choice; i++)
        {
            cout << endl;
            cout << "---------------------" << endl;
            cout << "Enter the data for the student " << i + 1 << " :" << endl;

            cout << "Enter Name: ";
            cin >> arr1[i];
            cout << "Enter Roll Num: ";
            cin >> arr2[i];
            cout << "Enter Course: ";
            cin >> arr3[i];
            cout << "Enter Class: ";
            cin >> arr4[i];
            cout << "Enter Contact: ";
            cin >> arr5[i];
        }
        total += choice;
    }
}

void show()
{
    if (total == 0)
    {
        cout << "No Data Entered." << endl;
    }
    else
    {
        cout << endl;
        cout << "======================" << endl;
        for (int i = 0; i < total; i++)
        {
            cout << "Data of Student " << i + 1 << endl;
            cout << "Name : " << arr1[i] << endl;
            cout << "Roll No : " << arr2[i] << endl;
            cout << "Course : " << arr3[i] << endl;
            cout << "Class : " << arr4[i] << endl;
            cout << "Contact : " << arr5[i] << endl;
            cout << "---------------------" << endl;
            cout << endl;
        }
    }
}

void search()
{
    if (total == 0)
    {
        cout << "No Data Entered." << endl;
    }
    else
    {
        string Roll_num;
        cout << "Enter Roll Num to search for the data : " << endl;
        cin >> Roll_num;
        for (int i = 0; i < total; i++)
        {
            if (Roll_num == arr2[i])
            {
                cout << endl;
                cout << "======================" << endl;
                cout << "Data of student " << i + 1 << endl;
                cout << "Name : " << arr1[i] << endl;
                cout << "Roll No : " << arr2[i] << endl;
                cout << "Course : " << arr3[i] << endl;
                cout << "Class : " << arr4[i] << endl;
                cout << "Contact : " << arr5[i] << endl;
                cout << "---------------------" << endl;
                cout << endl;
            }
        }
    }
}

void update()
{
    if (total == 0)
    {
        cout << "No Data Entered." << endl;
    }
    else
    {
        string Roll_num;
        cout << "Enter Roll Num to Update the data : " << endl;
        cin >> Roll_num;
        for (int i = 0; i < total; i++)
        {
            if (Roll_num == arr2[i])
            {
                cout << endl;
                cout << "======================" << endl;
                cout << "Previous Data _" << endl;
                cout << "Data of student " << i + 1 << endl;
                cout << "Name : " << arr1[i] << endl;
                cout << "Roll No : " << arr2[i] << endl;
                cout << "Course : " << arr3[i] << endl;
                cout << "Class : " << arr4[i] << endl;
                cout << "Contact : " << arr5[i] << endl;
                cout << "---------------------" << endl;
                cout << endl;
                cout << endl;

                cout << "Enter New Data _" << endl;
                cout << "Enter Name: ";
                cin >> arr1[i];
                cout << "Enter Roll Num: ";
                cin >> arr2[i];
                cout << "Enter Course: ";
                cin >> arr3[i];
                cout << "Enter Class: ";
                cin >> arr4[i];
                cout << "Enter Contact: ";
                cin >> arr5[i];
            }
        }
    }
}

void deleteRecord()
{
    if (total == 0)
    {
        cout << "No Data Entered." << endl;
    }
    else
    {
        cout << endl;
        cout << "======================" << endl;
        int a;
        cout << "Press 1 to Delete Entire Record" << endl;
        cout << "Press 2 to Delete Specific Record" << endl;
        cin >> a;

        if (a == 1)
        {
            total = 0;
            cout << "Entire Recored Deleted." << endl;
        }
        else if (a == 2)
        {
            string Roll_num;
            cout << "Enter Roll Num to Delete Record of Specific one" << endl;
            cin >> Roll_num;
            for (int i = 0; i < total; i++)
            {
                if (Roll_num == arr2[i])
                {
                    for (int j = i; j < total; j++)
                    {
                        arr1[j] = arr1[j + 1];
                        arr2[j] = arr2[j + 1];
                        arr3[j] = arr3[j + 1];
                        arr4[j] = arr4[j + 1];
                        arr5[j] = arr5[j + 1];
                    }
                    total--;
                    cout << "Your Required Record is Deleted." << endl;
                }
            }
        }
        else
        {
            cout << "Enter Valid Input" << endl;
        }
    }
}

int main()
{
    int value;

    while (true)
    {
        cout << "##########################" << endl;
        cout << endl;
        cout << "Press 1 to Enter Data" << endl;
        cout << "Press 2 to Show Data" << endl;
        cout << "Press 3 to Search Data" << endl;
        cout << "Press 4 to Update Data" << endl;
        cout << "Press 5 to Delete Data" << endl;
        cout << "Press 6 to Exit" << endl;
        cout << endl;
        cout << "##########################" << endl;
        cout << endl;
        cin >> value;

        switch (value)
        {
        case 1:
            enter();
            break;

        case 2:
            show();
            break;

        case 3:
            search();
            break;

        case 4:
            update();
            break;

        case 5:
            deleteRecord();
            break;

        case 6:
            exit(0);
        }
    }

    return 0;
}
