<h1>Worksheet 1</h1>

# Folder structure
This project has 2 main folders, in each one of them there are files for the different tasks.
Task 1, 2 and 3 are all in the same folder (task 1), since task 2 and task 3 just required to extend task 1's code.

# Task 1 folder
In the task 1 folder there are 2 files. They are named as requested in the worksheet.

<h4>filetest_string.cpp</h4> 
This file is used to test the code provided in the worksheet. First an object of my_string is created by passing a string ("Hello world"). Then the print method is called. 
Inside the curly brackets, a new object is created by passing the s as paramether. 
my_string t = s, it's calling the constructor constructor which has as paramenter a value of type my_string.

After that, we print both objects (t and s) and see how the counter has been updated in both examples.
We then print a char of the string and then print both objects again.
After closing the curly brackets, the setChar function is called, which changes the second letter of the string.
By calling the print function of the object, the change is visible.
    
<h4>my_string.hpp</h4>
This file contains the my_string class. Its interface is the same as the one given in the worksheet. It contains the tasks 1, 2 and 3. 
The class has two attributes: a string and a counter (the counter was needed from task 2 onwords). It has 3 constructors, an empty constructor, a constructor which has as parameter a string, and a constructor which has as paramenter a value of type my_string. In the class there is also a destructor, which frees the memory if the counter is less than 0.
The class also contains a print function, which prints the string and the counter.

Task 1 and 2 are pretty similary, the only difference is the introduction of the counter in task 2. Task 3 is done by printing the counter when it is 0. The counter is 0 inside the destructor. 


# Task 4 folder
This folder contains all the files needed for task 4. 

<h4>RefCount.hpp</h4>
The RefCount.hpp contains the template which has as attributes the counter and the data. The type of the data will be passed when a RefCount object is created. The template contains a constructor which has as parameter a pointer to a string and another contructor which has as parameter a value of type RefCounter.
There is also a destructor, which deletes the data if the counter is 0.
There is a function which returns the data (getter).
There are two more methods: a print function, which prints just the counter, and the equal operator, which will set the current variables equal to the ones passed as parameter.

<h4>data.hpp</h4>
This contains a copy of the my_string class. This is similar to the one used in the previous task, except it does not contain the counter.

<h4>data.cpp</h4>
This file is used to test both the previous classes.
First, a my_string2 pointer is created and the data it contains is "Hello world".
Next, the template is used. An object (c_value) of RefCounter is created, the type is passed in the '<>' (the type is my_string2).
Then both the data and the counter are printed.
<code>
// getting the data from c_value and calling the print function (this will print the value of the string_value object)
c_value.get_data()->print();
c_value.print(); // printing the counter of the c_value object
</code>
<br/>
Then the curly brackets are opened, the c_value is copied to t. 'auto' is used so the type is set up automatically. Then the data and the counter of both c_value and t are printed (here you can notice how the counter has increased from 1 to 2).

Then the second character of the data of c_value is printed, and then again the data and the counter of both c_value and t are printed.

The brackets are then closed. The second char of the data of c_value is printed and then again its counter and data are printed. The counter is again 1 and the data of c_value has the second character changed.

<h4>Running the code</h4>
To test the code of the task1 folder, you can run these two commands in the terminal:
<code>
clang++ -std=c++17 -o task1 filetest_string.cpp
./task1
</code>

Here is the result of running them.
![Alt text](https://gitlab.uwe.ac.uk/v2-ronchi/asp-worksheet1/-/blob/main/screenshots/task1.png "Task 1")

To test the code of the task4 folder, you can run these two commands in the terminal:
<code>
clang++ -std=c++17 -o refCount data.cpp
./refCount
</code>
![Alt text](https://gitlab.uwe.ac.uk/v2-ronchi/asp-worksheet1/-/blob/main/screenshots/task4.png "Task 4")
