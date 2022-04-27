- [Docker](#docker)
  - [Abstract](#abstract)
- [How To Use Docker](#how-to-use-docker)
  - [Create the Dockerfile](#create-the-dockerfile)
    - [File Structure](#file-structure)
    - [Instruction List](#instruction-list)

# Docker

Site: https://docs.docker.com/develop/develop-images/dockerfile_best-practices/

## Abstract

Docker is a development container that creates an environment so users can use the same software no matter what infrastructure(computer) they are using. For example, if I want to write a program using a certain version of a programming language (C++11, php7, Java11, etc.) I can make sure that all other developers use the same versions as me.

Users create a `Dockerfile` that acts like a blueprint. The `Dockerfile` contains instructions for what versions of software to use.

# How To Use Docker

## Create the Dockerfile
Create a Dockerfile in your project with `touch Dockerfile`.

Docker files must begin with a `FROM` instruction

### File Structure
The format of the Dockerfile is as follows:
```
FROM ubuntu:18.04
# Comment Make a comment in the file
INSTRUCTION arguments
```
What is an INSTRUCTION? [read here](#instruction-list)
a docker keyword; arguments

### Instruction List
| Instruction | Description |
| ----------- | ----------- |
| FROM | Create a layer from an image, in the example above it takes from the ubuntu Docker image |
| COPY | Add files from Docker current directory (The directory with the dockerfile) |
| RUN | Builds your application with make |
| CMD | Specifies what command to run within container |