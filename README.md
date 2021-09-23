# Guide for setting up and running TORCS Server on Windows
This is the repository for the Thyssenkrupp __Engineering in high gear!__ chalenges.
# Downloads
installer: https://sourceforge.net/projects/torcs/files/torcs-win32-bin/1.3.4/

server patch: https://sourceforge.net/projects/cig/files/SCR%20Championship/Server%20Windows/2.0/
# Installing Guide
Install the game to a path without any special characters (not even spaces are allowed). Copy the contents of the patch zip into the game's folder and overwrite the files.

Offical guide to server patch and how it works: https://arxiv.org/pdf/1304.1672.pdf
# Compiling Guide
Open the code with Visual Studio Code. You will need the "Makefile Tools" extension to build the software. You can install it by selecting "extenions" on the left side. Type in the extensions name and install it.

The driving algorithm is located in the CDriver.c file, you have to modify or completely rewrite it to be better than the other teams. The main function is the __CDrive__ which gets a __structCarState__ and replies with a __structCarControl__. You can find detailed information about the sensors and effectors on page 13-14 of the above mentioned official guide. There is also the __Cinit__ function which describes 19 angles where the distance sensors shall be located. You can modify this as well to fit your needs.

If you are ready to build select the makefile tools extension, set the build target to all and click on the build icon.

![build](build.PNG?raw=true)

# Simulation Guide
Start the game and navigate to Race->Quick Race->Configure Race. Here, if you choose a racetrack and click accept you should see "scr_server 1" as Selected player. When you finnish configuring the race, you can select "New Race". Now the race will start and it will wait for the client's connection. You have to start your compiled client now(client.exe in your source folder) and it will connect to the server.
