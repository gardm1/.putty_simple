# Putty-Ping

Putty-Ping is a ping service for when using putty to check if the connection you're trying to connect to is online, before you create a connection.
This program uses a inet ip address for checking for a response.

## Setup


1. Download [PuTTY](https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html)

2. Create a profile in Windows Terminal for your saved putty session <br />
and add a ping service for before you try to enter your session.

First, add the project to a VS 2022 solution and build and compile it. Then, create a *.putty* folder <br />
to your Windows Home Directory and add the *.exe* file. After that you can add this profile to your <br />
Windows Terminal .json file.

```json
{
    "commandline": "\"C:\\Users\\Your-Name\\.putty\\program.exe\" \"Ip-Adress\" \"server_host_name\"",
    "guid": "{[Use-Guid-Generator](https://guidgenerator.com/online-guid-generator.aspx)}",
    "icon": "ms-appx:///ProfileIcons/{9acb9455-ca41-5af7-950f-6bca1bc9722f}.png",
    "name": "Name-Showed-In-Windows-Terminal"
}
```

I also linked a guid generator for the guid. Duh! <br />
In *main.cpp* source the command that is ran is *putty.exe host_name@Ip-Adress*, however you can <br />
change this to whatever... *plink.exe* for example.

*plink.exe* however, does not give support for the arrow keys, the <br />
escape key, nor the function keys, but in return acts more like an interactive session.

___

I thought about adding saved sessions from inside the code, and then encrypt and lock them <br />
in memory, but could not figure out how the password (used to access and decrypt the <br />
saved sessions) could be safely stored in memory without it itself, being accessable. <br />
Something I just thought of could be to store the password in a loop where it is built <br />
at compile time using modulus operators and other math things, but I am not sure what it <br />
would look like in memory (if the compiler allready did all the math things and just left <br />
the password as a complete string). 

If you want to add a data handler for different connection protocols or a saved session list <br />
thats up to you. Either make a seperate file where the sessions are stored, or hard-code them <br />
into the source code. A simple way of doing this is to just add a switch statement where the <br />
sessions are stored.

Aka. I did not complete the TODO list of my previous version.
