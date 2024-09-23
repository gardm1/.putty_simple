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
