# Stress Testing bash script

In competitive programming, stress testing is a technique of testing your solution on a number
of random test cases to find where the code might fail. 

### Installing
Download this repository manually or by using git clone on terminal.

Copy your original solution which you expect might fail in the file "solution.cpp". <br>
Copy your brute force solution which is expected to give correct output in the file "brute.cpp". <br>
Change the "gen.cpp" file so as to generate test cases according to the question. <br>

Now open your terminal in the directory where file "s.sh" resides and execute:<br>
$ bash s.sh
