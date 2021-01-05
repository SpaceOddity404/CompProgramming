// Before running the code, add stdc++.h to your local computer and specify the file path in the #include header.
#include </Users/nithya/bits/stdc++.h>

using namespace std;

int main() {
    /*OPTIMIZATION OF SPEED*/

        /*Disables synchronization btwn the C and C++ standard streams.
        By default, all standard streams are synchronized, 
        which in practice allows you to mix C- and C++-style I/O and get sensible and expected results.
        Disabling the synchronization allows C++ streams to have their own independent buffers.
        Sidenote, synchronized C++ streams are thread-safe = output from different threads may interleave,
        but you get no data races.*/
        ios::sync_with_stdio(0);

        /*This unties cin from cout. 
        Tied streams ensure that one stream is flushed automatically before each I/O operation on the other stream.
        
        */
        cin.tie(0);

    /*I/O USING TXT FILES*/
        FILE *in = fopen("input.txt", "r");
        FILE *out = fopen("output.txt", "w");
        int x, y;
        fscanf(in, "%i %i", &x, &y);
        fprintf(out, "Here is the output of the file: %i, %i", x, y);
        fclose(in);
        fclose(out);
        
    /*INPUT AND OUTPUT*/
        /*declare variables*/
            //int a, b;
        //string x;
        //scanf("%s", &x);
        //printf("Inputted variable: %s", x);

        
        /*input seperated by spaces OR newlines, string with spaces cannot be included*/
            //cin >> a >> b >> x;

        /*output*/
            //cout << a << " " << b << " " << x << "\n";

    /*FASTER I/O USING C FUNCTIONS*/
        /*Reads two integers from the input*/
            //scanf("%d %d", &a, &b);

        /*prints "variable a: [value of a] and variable b: [value of b]"*/
            //printf("variable a: %d and variable b: %d", a, b);
        
        /*getline function that can read a whole input line possibly containing spaces*/
            //string s;
            //getline(cin, s);

        /*If amount of data is unknown, use following loop.
        It reads elemends from the input one after another until there is no more data available in the input.
        */
            //while (cin >> x) {
                //code
            //}


        
}
