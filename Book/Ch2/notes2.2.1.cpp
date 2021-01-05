// Before running the code, add stdc++.h to your local computer and specify the file path in the #include header.
//Recursion - method of solving a problem where the solution depends on solutions to smaller instances of the same problem.
#include </Users/nithya/bits/stdc++.h>

using namespace std;
int n;
vector<int> temp;
vector< vector<int> > subsets;
void search(int k);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    scanf("%i", &n);
    search(1);
    //Prints the subsets nicely
    for (int i = 0; i < subsets.size(); i++) {
        printf("{");
        for (int j = 0; j < subsets[i].size(); j++) {
            printf("%i", subsets[i][j]);
            if (j < (subsets[i].size() - 1)) {
                printf(", ");
            }
        }
        printf("}\n");
        
    }


    return 0;
}


void search(int k) {
    if (k == n + 1) {
        subsets.push_back(temp);
    }
    else{
        //include k in the subset for all in this branch of tree
        temp.push_back(k);
        search(k + 1);
        //don't include k in the subset for all in this branch of the tree
        temp.pop_back();
        search(k + 1);
    }

}
