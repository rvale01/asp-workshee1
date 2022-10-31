<h1>Worksheet 1</h1>

# Folder structure
This project has 2 main folders, in each one of them there are files for the different tasks.
Task 1, 2 and 3 are all in the same folder (task 1), since task 2 and task 3 just required to extend task 1's code.

# Task 1 folder
In the task 1 folder, there are 2 files. They are named as requested in the worksheet.

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


