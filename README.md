# Name Generator 📑
This is a project built in C/C++ to generate random names from a dataset of names provided.

## Prerequisites 📂
1. Microsoft Visual studio community
2. The [Libxl](https://www.libxl.com/) library
3. An excel sheet with sample data 

## Setup 🛠️
1. In Microsoft Visual Studio; click on Project and go to the C/C++ section and click General from the dropdown section and add the directory where libxl is installed

![image](https://user-images.githubusercontent.com/26835888/220340370-122ac610-5cc9-4897-b614-e9ca1b4930bb.png)

2. Then Go to the Linker subsection and check additional libraries under general from the dropdown

![image](https://user-images.githubusercontent.com/26835888/220341371-516018eb-b378-4d76-ba72-258363abf16a.png)

3. Then under the same Linker subsection go to the Input dropdown and add the link to 'libxl.lib'

![image](https://user-images.githubusercontent.com/26835888/220342372-581ed8f9-9f85-43bf-9a3f-6c25c2fcd20c.png)

4. Copy the libxl.dll file from Libxl bin(appears first in the screenshot below) or bin64 directory to your project directory with source files:

![image](https://user-images.githubusercontent.com/26835888/220342726-2ee165b3-0c8d-4608-b8c8-b3b25689ad0c.png)

5. Project is ready for using LibXL functions.





