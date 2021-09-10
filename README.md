# Torcs Client Build
This is the repository for the Thyssenkrupp __Engineering in high gear!__ chalanges TORCS Client source.

The source of the server can be found in this repo: [TORCS SERVER](https://github.com/fmirus/torcs-1.3.7.git)
The docker based build infrastructure can be found here: [SERVER Build Infra]()

## Local build of the Client
To get all the help information about the make targets execute:
```sh
make help
```
### Windows Build
To build the clien on windows execute the following make target:
```sh
make windows
```
### Linux build
To build the clien on linux execute the following make target:
```sh
make linux
```
## Make docker runtime image for simulation
To create the docker runtime image for the docker compose based simlation with the containerized torcs server, execute the following make target:
```sh
make docker
```
