# Statistics Calculator
In this program, you will be using the `vector` library.

## Statistics Calculator Class
Create a class called `StatisticsCalculator` that will have the following:

### Data members
1. `data_set_` that is an `std::vector` that contains `double` values. `std::vector` uses templates so we specify the type `double` inside the `< >`.

### Member functions

### add_data
Create a member function called `add_data` that takes 1 parameter, a `double` that will be stored in the
vector. Use the `std::vector` member function `push_back` to store the data passed through the parameter into the vector.

### data_at
Create a member function called `data_at` that takes 1 parameter, an `int` that will be the index. This
function should return the the element from the vector at the index using the index operator (`[ ]`).

### size_of_data
Create a member function called `size_of_data` that should return the size of the vector using the
`std::vector` member function `size`.

### mean
Create a member function called `mean` that should return the mean of all the elements in the vector. If
the vector is empty return a value of `0`. You can use `std::vector`'s member function `empty()` to check.

## Other instructions
Complete the `main` function as described. Place your classes in `statistics_calculator.hpp`. Member functions that take more than five lines or use complex constructs should have their function prototype in `statistics_calculator.hpp` and implementation in `statistics_calculator.cpp`.

# Sample output 1
<pre>
Welcome to the Statistics Calculator!
Please select a menu option:
1 - Add to the data set
2 - Display the entire data set
3 - Get the mean of the data set
0 - Exit the program
Selection: <b>1</b>
Input the number you want to add to the data set: <b>23</b>

Welcome to the Statistics Calculator!
Please select a menu option:
1 - Add to the data set
2 - Display the entire data set
3 - Get the mean of the data set
0 - Exit the program
Selection: <b>2</b>
The data set
0: 23

Welcome to the Statistics Calculator!
Please select a menu option:
1 - Add to the data set
2 - Display the entire data set
3 - Get the mean of the data set
0 - Exit the program
Selection: <b>3</b>
The mean of the data is 23.00

Welcome to the Statistics Calculator!
Please select a menu option:
1 - Add to the data set
2 - Display the entire data set
3 - Get the mean of the data set
0 - Exit the program
Selection: <b>0</b>
Exiting...
</pre>

# Sample output 2
<pre>
Welcome to the Statistics Calculator!
Please select a menu option:
1 - Add to the data set
2 - Display the entire data set
3 - Get the mean of the data set
0 - Exit the program
Selection: <b>2</b>
The data set

Welcome to the Statistics Calculator!
Please select a menu option:
1 - Add to the data set
2 - Display the entire data set
3 - Get the mean of the data set
0 - Exit the program
Selection: <b>3</b>
The mean of the data is 0.00

Welcome to the Statistics Calculator!
Please select a menu option:
1 - Add to the data set
2 - Display the entire data set
3 - Get the mean of the data set
0 - Exit the program
Selection: <b>0</b>
Exiting...
</pre>

# Submission checklist
1. Created function prototype and stored in `.hpp` file.
1. Created function implementation and stored in `.cpp` file (see [reference](https://github.com/ILXL-guides/function-file-organization)).
1. Call function in the driver
1. Compiled and ran the driver (`main`).
1. Manually checked for compilation and logical errors.
1. Ensured no errors on the unit test (`make test`).
1. Followed advice from the stylechecker (`make stylecheck`).
1. Followed advice from the formatchecker to improve code readbility (`make formatcheck`).

# Code evaluation
Open the terminal and navigate to the folder that contains this exercise. Assuming you have pulled the code inside of `/home/student/labex02-tuffy` and you are currently in `/home/student` you can issue the following commands

```
cd labex02-tuffy
```

You also need to navigate into the problem you want to answer. To access the files needed to answer problem 1, for example, you need to issue the following command.

```
cd prob01
```

When you want to answer another problem, you need to go back up to the parent folder and navigate into the next problem. Assuming you are currently in `prob01`, you can issue the following commands to go to the parent folder then go into another problem you want to answer; `prob02` for example.

```
cd ..
cd prob02
```

Use the `clang++` command to compile your code and the `./` command to run it. The sample code below shows how you would compile code saved in `statistics_calculator.cpp` and `main.cpp`, and into the executable file `main`. Make sure you use the correct filenames required in this problem.  Take note that if you make any changes to your code, you will need to compile it first before you see changes when running it.

```
clang++ -std=c++17 main.cpp statistics_calculator.cpp -o main
./main
```

You can run one, two, or all the commands below to `test` your code, `stylecheck` your code's design, or `formatcheck` your work. Kindly make sure that you have compiled and executed your code before issuing any of the commands below to avoid errors.

```
make test
make stylecheck
make formatcheck
```

A faster way of running all these tests uses the `all` parameter.

```
make all
```

# Submission
1. When everything runs correctly,  let's copy your code into the Github repository. The first step is to add your code to what is called the staging area using git's `add` command. The parameter after `add` is the name of the file you want to add. There are cases when you have multiple changed files, so you can just type . (period) to add all modified files.

    ```
    git add main.cpp statistics_calculator.hpp statistics_calculator.cpp
    ```
1. Once everything is in the staging area, we use the `commit` command to tell git that we have added everything we need into the staging area.

    ```
    git commit
    ```
    Alternatively, you could add a comment to the `commit` command in order to skip the *nano* editor step described below.

    ```
    git commit -m "Finished prob"
    ```
1. In case it asks you  to configure global variables for an email and name, just copy the commands it provides then replace the dummy text with your email and Github username.

    ```
    git config --global user.email "tuffy@csu.fullerton.edu"
    git config --global user.name "Tuffy Titan"
    ```
    When you're done, make sure you type `git commit` again.    
1. Git will ask you to describe what you have added to the staging area. By default, you will use a command-line based editor called *nano*. Go ahead and provide a description then press <kbd>Ctrl</kbd> + <kbd>x</kbd> to exit. Press <kbd>Y</kbd> to confirm that you want to make changes and then press <kbd>Enter</kbd>.
1. Lets push all changes to the Github repository using git's `push` command. Provide your Github username and password when you are asked.

    ```
    git push
    ```
1. When you finish the exercise, go back to Titanium and click on the `Add submission` button in the lab exercise page. Provide a short message in the text area such as "finished lab exercise" and click on `Save changes`. Finally click on `Submit assignment` to inform your instructor that you are done.
