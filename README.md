# Workflow Reconstitution
This is the program I wrote for my master thesis.
Its goal is to perform workflow reconstitution using a Genetic Algorithm.

## Toolsets and workflows:
As it stands the workflows and toolsets are currently hardcoded.
The toolsets are stored as vector<Tool>, and are located in the `src/datagenerators` folder.
These files are generated using the python files in `python/generators/`.
Those files in turn pull data from .json files located in a datafolder.

# Dependencies:
c++11 standard library

# Getting it working:
When on linux:
```shell
$ ./rebuild.sh
$ ./build/reconstitute ps xf pm px
 ```

## Additional flags:
* `-v`: verbosity, either 0, 1 or 2
* `-f`: fitness function, can be a, b, c, d, l, s
* `-g`: generator of initial population, can be 'r' or 'g'. Default 'g'.
* `-r`: how many times the algorithm is repeated
* `-c`: which testcase it is run on, can be (1-4)
* `-t`: which toolset it is run on

# ToDo:
In order to improve this program:
* New crossover and mutation operators
* New (better) ways to generate the initial population
* Make datasets and workflows non-hardcoded.
* Refactoring:
** The NDETree file has become too large
** The code itself is written in a very Pythonic way, this is C++....
