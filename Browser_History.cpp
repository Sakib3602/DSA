#include <bits/stdc++.h>

using namespace std;

int main()
{

    list<string> webAddresses;
    string address;

    while (1)
    {
        cin >> address;
        if (address == "end")
        {
            break;
        }
        webAddresses.push_back(address);
    }

    auto current = webAddresses.begin();

    
    int Q;
    cin >> Q;
    cin.ignore(); // To handle the newline after the integer input

    // Step 4: Process each query
    for (int i = 0; i < Q; i++)
    {
        string command;
        getline(cin, command);

        if (command.substr(0, 6) == "visit ")
        {
            // Extract the address from the command
            string targetAddress = command.substr(6);
            auto it = find(webAddresses.begin(), webAddresses.end(), targetAddress);

            if (it != webAddresses.end())
            {
                current = it; // Move to the target address
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            // Move to the next address if possible
            auto nextIt = next(current);
            if (nextIt != webAddresses.end())
            {
                current = nextIt;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            // Move to the previous address if possible
            if (current != webAddresses.begin())
            {
                current = prev(current);
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
