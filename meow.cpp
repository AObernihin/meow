
#include <iostream>
using namespace std;

class teleBook 
{
private:
    string* Sur_Nam_Pobatkovi = new string();
    int homeNum;
    int mobileNum;
    string additional;
public:
    int workNum;
    //==================================
    

    void show() 
    {
        cout << "Surname: " << *Sur_Nam_Pobatkovi << endl; 
        cout << "Home Number: " << homeNum << endl; 
        cout << "Mobile Number: " << mobileNum << endl; 
        cout << "Additional Info: " << additional << endl; 
        cout << "Work Number: " << workNum << endl;
    }

    teleBook(string PIB, int home, int work, int mobile, string addition) : additional(" ")
    {
        string* Sur_Nam_Pobatkovi = &PIB;
        homeNum = home;
        workNum = work;
        mobileNum = mobile;
        additional = addition;
    }
    ~teleBook() 
    {
        delete Sur_Nam_Pobatkovi;
    }
    //============================
    void setPIB(string &PIB) 
    {
        *Sur_Nam_Pobatkovi = PIB;
    }
    void setHome(int home)
    {
        homeNum = home;
    }
    void setWork(int work)
    {
        workNum = work;
    }
    void setMobile(int mobile)
    {
        mobileNum = mobile;
    }
    void setAdditional(string add)
    {
        additional = add;
    }

    //==============================
    string getPIB() 
    {
        return *Sur_Nam_Pobatkovi;
    }
    int getHomeNum() const 
    { 
        return homeNum; 
    }
    int getMobileNum() const 
    { 
        return mobileNum; 
    }
    string getAdditional() const 
    { 
        return additional; 
    }
};

void addTeleBook(teleBook**& arr, int& size, const teleBook& newBook) {
    teleBook** newArray = new teleBook * [size + 1];
    for (int i = 0; i < size; i++) {
        newArray[i] = arr[i];
    }
    newArray[size] = new teleBook(newBook);
    delete[] arr;
    arr = newArray;
    size++;
}

void showArrTele(teleBook tele[], int size)
{
    for (int i = 0; i < size; i++) 
    {
        tele[i].show();
    }
}
void deleteTele(int arr[], int size, int index) 
{
    for (int i = index; i < size - 1; i++) 
    { 
        arr[i] = arr[i + 1]; 
    } 
    size--;
}

int main()
{
    
}





