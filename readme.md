# Guide for setting up and running TORCS Server on Windows
This is the repository for the Thyssenkrupp __Engineering in high gear!__ chalenges.
# Downloads
installer: https://sourceforge.net/projects/torcs/files/torcs-win32-bin/1.3.4/
server patch: https://sourceforge.net/projects/cig/files/SCR%20Championship/Server%20Windows/2.0/
# Guide
Install the game to a path without any special characters (not even spaces are allowed). Copy the contents of the patch zip into the game's folder and overwrite the files.
After this, start the game and navigate to Race->Quick Race->Configure Race. Here, if you choose a racetrack and click accept you should see "scr_server 1" as Selected player. When you finnish configuring the race, you can select "New Race". Now the race will start and it will wait for the client's connection. You have to start your compiled client now and it will connect to the server.
Offical guide to server patch and how it works: https://arxiv.org/pdf/1304.1672.pdf
