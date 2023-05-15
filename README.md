# learning-modern-C
This is a repo to record learning C language along with the Modern C  book club of the R contributors community


Check [this link](https://github.com/r-devel/c-book-club/) to get details of the sessions of the book club and the learning plan.

## File information

 + There is a file by the name `test_examle_code.c` in the root directory of this repo. This file is meant to be a rough testing file to run example C code from the Modern C book. 
 + Each session has a folder of its own. These folders will contain files for exercises from the Modern C book.


## Notes on session 1

+ In section 1.2, the command that worked in my case is `gcc -std=c99 -Wall -lm -o getting-started getting-started.c`. However, since the file name in my case is `test_examle_code.c`, I used the command `gcc -std=c99 -Wall -lm -o getting-started test_examle_code.c`. 
+ Compiling the file `bad.c` generates the output as the `getteing-started` file, but with multiple warnings.
+ The third difference between the files `getting-started.c`and `bad.c` could be one of two things. First, how the object `i` is declared. Second, the return value of the main function. _in reference to `Exs 7`._
+  _in reference to `Exs 9`._ The different uses of {} in listing 1.1 or `getting-started.c`:
    + To enclose the body of the `main` function
    + To list the values of object `A`
    + To Wrap the states to be looped over by `for`
+  _in reference to `Exs 9`._ The different uses of [] in listing 1.1 or `getting-started.c`:
    + To state the lenght of the object `A`
    + To refer to the index or position in object `A`
    + To extract the values from a desired index of `A`