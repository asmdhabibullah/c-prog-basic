// Data types: int, float, char --> (Number, Decimnal Number, Word)
// Variables, and Constants

// Single line comment: we use //
// Multiline comment: We use /* your content */

/*
    int sgdfgdfgs = 555;
    float dsfjbhigdf = 3.4;
    char jkfghdfijh = "retgbfhfjklhnvfdkl;ks";
*/

// C programming structure
/*
    What is Function?
    Ans: a Rice Maker Machine
    Ingrediance: Rice --> Dhan
    Where to put: In mouth --> Dhan rakhar jayga
    Process: Function
    Output: Pure Rice --> Chal

    Function: 1. Input, 2. Body, 3. Output
*/

#include <stdio.h>

int main()
{

    int marks = 860;
    float naeemsMarks = 8885.25;
    char *naeemsSubject = "I love Artificial Intiligence.";

    /*
        int --> %d
        float --> %f
        char --> %c or %s
    */
    printf("Marks= %d \n", marks);
    printf("Naeems Marks= %f \n", naeemsMarks);
    printf("Naeems love= %s \n", naeemsSubject);

    /*
        Operators:
        1) +, -, *, /, %
        2) =
        3) <, >, &, |, !, ^
    */

    return 0;
};

/*

    Summary
    -------
    1. git: download & install
    git setup commands: (
        check version: git -v
        check git user info: git config --list
        add user name: git config --global user.name "Tor name"
        git config --global user.email "Tor email"

        now check the setted user info: git config --list
    )

    2. Create a Folder inside of GitHub Computer
    -- Download this folder into my computer(
        throught git : git clone URL
    )

    3. Go to folder use cd command: (
        cd my folder location
    )

*/