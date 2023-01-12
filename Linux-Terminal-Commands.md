# List of Basic Linux Terminal Commands

- pwd : displays the full pathname of the current directory (present working directory) ; the character / is used to separate directories

- mkdir CS322 : make a new directory (folder) CS332 inside the current directory;

- ~ the home directory; for example, my home directory on my local machine is /home/UAB/unan therefore, ~/CS332 is equivalent to /home/UAB/unan/CS332

- cd : change to the home directory (equivalent to cd ~)

- cd CS332 : change to the directory CS332; you can also provide a full pathname as in cd /home/UAB/unan/CS332

- cd .. move one level up (. the present directory and .. the parent directory)

- ls : list the contents of the current directory

- ls CS332: list the contents of the directory CS332

- cp file1 file2 : copy the file file1 to the file file2 (if file2 already exists, this overwrites the present contents); file1 still exists

- cp file1 anyDirectory: copy the file file1 into the directory anyDirectory

- mv file1 file2 : rename the file file1 to file2 (move it to a new file, file1 does not exist now)

- mv file1 anyDirectory: move the file file1 to the directory anyDirectory; the directory may be specified by a full pathname or relative path

- rm file1 : remove the file file1 from the present directory (the file is lost forever, so be careful with the rmcommand)

- rmdir anyDirectory: remove the directory anyDirectory (which must be empty)

- ls –l: long listing, list more information about folders and files

- ls *.jpeg : list only the files with an extension of .jpeg

- rm: delete files

- rmdir: delete folder

- man : The manual command is used to show the manual of the inputted command. For example: man cd

- touch: make a new empty file

- locate: find a file in the Linux OS

- clear: Clear the screen 

# In-Lab Exercise

1. Clear the screen

2. Create a directory called CS332

3. Change to the CS332 directory

4. Create a new directory inside CS332 and name it Lab1

5. Change to the Lab1 directory

6. Find the current directory using the command “pwd”

7. Create a new file using the touch command by entering “touch file1”

8. List the contents of the Lab1 directory

9. Rename file to new_file1

10. List the contents of the Lab1 directory

11. Change to the CS332 directory

12. Try to delete the directory Lab1. Do you get an error? What is the error message?

13. Delete the file new_file1 in the directory Lab1

14. Try to delete the directory Lab1. Do you still get an error?

15. Use the “man” command to find out more about the touch command