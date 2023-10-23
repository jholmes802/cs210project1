# CS-210 Project One

# Description:
This program can read in hours, minutes, second time as 24hr time. Then we can increment time and then it will print out the updated 12-hour and 24-hour formats. 

# Summarize the project and what problem it was solving.
This created a system allows for manipulating a clock and then printing out the result.

# What did you do particularly well?
I think the code is written simply without much confusion or complexity. 

# Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
It is currently quite limited in how it reads in the time, and it would benefit from more robust input validation. As well as a more abstract OOP system to allow for more functionality and future-proofing.
Doing the input validation would make the code more robust and less vulnerable to dirty input(text, or AM/PM, out of bound time).

# Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
I found the printing code the most challenging because I wanted it to print it with dynamically sized objects but I have had a hard time working with the setw, setfill, and postion arguments when printing. 
I had hoped to make the print system to dynamically size based on input or a function parameter so it could be altered in the future.

# What skills from this project will be particularly transferable to other projects or coursework?
I think this was a good project for me to work on and improve my comments and documentation. I have written other programs and had a hard time keeping up with comments and appropriate docs so ensure that I remember it or have it written down later. While this is a super simple program to write comments for it helped me on a small project so I can apply it easier for larger projects.

# How did you make this program maintainable, readable, and adaptable?
This program has most of its functionality broken into blocks/functions so they can be abstracted and built. Instead of all information dumped into main() there are multiple functions. Future improvements may include a better way of changing time or printing time.
