// This program generates transitive of a given relation

// preprocessor directives
#include <iostream>
#include <vector>
using namespace std;

// structure for relation
struct Relation
{
    char from;
    char to;
};

// function prototypes
vector<Relation> transitive(vector<Relation> r);
void print_relation(vector<Relation> r);

// main function
int main()
{   // declaration of relation (change this)
    vector<Relation> given_relation = {
        {'c', 'a'}, {'d', 'e'}, {'b', 'a'}, {'e', 'f'}, {'a', 'e'}
    };

    // generate the transitive relation
    vector<Relation> new_relation = transitive(given_relation);                                    

    // printing both the relations
    cout << "============================================================" << endl;
    cout << "Given relation is :-" << endl;
    print_relation(given_relation);
    cout << "------------------------------------------------" << endl;
    cout << "Transitive relation is :-" << endl;
    print_relation(new_relation);
    cout << "============================================================" << endl;

    return 0;
}

// function for generating transitive relation
vector<Relation> transitive(vector<Relation> r)
{
    bool added;
    int length;
    bool is_in;

    do
    {
        added = false;
        length = r.size();
        is_in = false;

        for (int i = 0; i < length; i++)
        {
            char a = r[i].from;
            char b = r[i].to;
            for (int j = 0; j < length; j++)
            {
                char c = r[j].from;
                char d = r[j].to;

                if (b == c)
                {
                    is_in = false;

                    for (const auto &rel : r)
                    {
                        if (rel.from == a && rel.to == d)
                        {
                            is_in = true;
                        }
                    }

                    if (!is_in)
                    {
                        r.push_back({a, d});
                        added = true;
                    }
                }
            }
        }
    } while (added);

    return r;
}

// function for printing relation
void print_relation(vector<Relation> r)
{
    cout << "{";
    for (const auto &rel : r)
    {
        cout << "(" << rel.from << ", " << rel.to << ") ";
    }
    cout << "}" << endl;

    return;
}