//--------------------- How to use Classes----------------------------//

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::vector;
using std::endl;

class User
{
    public:
        string fname;
        string lname;
};

void if_not_exist(vector<User> &users, User user)
{
    for(int i=0; i < users.size(); i++)
    {
        if(users[i].fname == user.fname &&
           users[i].lname == user.lname)
        {
            cout << "User already exists!!" << endl;
            break; //once the requirement is fullfilled the loop breaks
        }
        users.push_back(user);
        cout << "User Added!!" << endl;
    }
}

int main()
{
    vector<User> users;
    User user1, user2, user3;

    user1.fname = "Rose";
    user1.lname = "Hunnington";

    user2.fname = "Lily";
    user2.lname = "Aldrige";

    user3.fname = "Grace";
    user3.lname = "Elizabeth";

    users.push_back(user1);     // vector initialization is important else error occurs
    if_not_exist(users, user2);
    cout << endl;
    if_not_exist(users,user3);
    cout << endl;
    if_not_exist(users,user2);

    cout << users.size() << endl;
}
