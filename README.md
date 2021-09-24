# Torcs Client Build
This is the repository for the Thyssenkrupp __Engineering in high gear!__ chalanges TORCS Client source.

## Befor starteing the developement of the client you schould setup the TORCS Server.

The source of the server can be found in this repo: [TORCS SERVER](https://github.com/fmirus/torcs-1.3.7.git)

The server setup can be found  [SERVER Build Infra]()


## Building the Client
To get all the help information about the make targets execute:
```sh
make help
```
### Windows Build
#### __Compiling Guide__
Open the code with Visual Studio Code. You will need the "Makefile Tools" extension to build the software. You can install it by selecting "extenions" on the left side. Type in the extensions name and install it.

The driving algorithm is located in the CDriver.c file, you have to modify or completely rewrite it to be better than the other teams. The main function is the __CDrive__ which gets a __structCarState__ and replies with a __structCarControl__. You can find detailed information about the sensors and effectors on page 13-14 of the above mentioned official guide. There is also the __Cinit__ function which describes 19 angles where the distance sensors shall be located. You can modify this as well to fit your needs.

If you are ready to build select the makefile tools extension, set the build target to all and click on the build icon.

![build](build.PNG?raw=true)

__or__
```sh
make win
```

#### __Simulation Guide__
Start the game and navigate to Race->Quick Race->Configure Race. Here, if you choose a racetrack and click accept you should see "scr_server 1" as Selected player. When you finnish configuring the race, you can select "New Race". Now the race will start and it will wait for the client's connection. You have to start your compiled client now(client.exe in your source folder) and it will connect to the server.

### Linux build
To build the clien on linux execute the following make target:
```sh
make linux
```
### Docker based build runtime image for simulation
To create the docker runtime image for the docker compose based simlation with the containerized torcs server, execute the following make target:
```sh
make docker
```

## Installing Docker and Docker-Compose

The offical description of docker installation: https://docs.docker.com/engine/install/ , 
and for docker-compose: https://docs.docker.com/compose/install/
