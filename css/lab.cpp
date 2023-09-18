#include <iostream>
using namespace std;

class Employee
{
public:
    int eid;
    string name;
};
class Hashtable
{
public:
    Employee Employees[10];

public:
    Hashtable()
    {
        for (int i = 0; i < 10; i++)
        {
            Employees[i].eid = -1;
            Employees[i].name = "";
        }
    }
    int hashvalue(int num)
    {
        return num % 10;
    }
    void insert_record(int id, string name)
    {
        int idx = id % 10;
        
            if (Employees[idx].eid == -1)
            {
                Employees[idx].eid = id;
                Employees[idx].name = name;
                
            }
            else
            {
                int newidx = (idx + 1) % 10;
                while (newidx != idx)
                {
                    if(Employees[newidx].eid == -1){
                    Employees[newidx].eid = id;
                    Employees[newidx].name = name;
                    break;
                    }else{
                        newidx++;
                    }
                }


            }
        
    }
    ~Hashtable(){
        for(int i=0;i<10;i++){
            cout<<"Name: "<<Employees[i].name<<endl;
            cout<<"ID: "<<Employees[i].eid<<endl<<endl;
        }
    }

    void search(int id){
        for(int i=0;i<10;i++){
            if(Employees[i].eid == id){
                cout<<"Name:"<<Employees[i].name<<"\tID: "<<Employees[i].eid<<endl<<endl;
                break;
            }
        }

    }
};

int main()
{
    Hashtable ht;
    ht.insert_record(0,"hie");
    ht.insert_record(1,"MIHIR");
    ht.insert_record(12,"KARTAVYA");
    ht.insert_record(16,"niKHIL");
    ht.insert_record(22,"aSHIUSH");
    ht.search(22);
    return 0;
}