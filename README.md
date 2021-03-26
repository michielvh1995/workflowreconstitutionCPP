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
Parameters:
`ps`: Poolsize,
`xf` Crossover function, can be 's' or 'e', 
`pm`: Mutation chance
`px`: Crossover chance

## Additional flags:
* `-v`: verbosity, either 0, 1 or 2 (default: 0)
* `-f`: fitness function, can be a, b, c, d, l, s (default: a)
* `-g`: generator of initial population, can be 'r' or 'g' (default: g)
* `-r`: how many times the algorithm is repeated (default: 1)
* `-c`: which testcase it is run on, can be [1-4] (default: 1)
* `-t`: which toolset it is run on, can be f, i or e (default: f)

# ToDo:
In order to improve this program:
* New crossover and mutation operators
* New (better) ways to generate the initial population
* Make datasets and workflows non-hardcoded.
* Refactoring:
** The NDETree file has become too large
** The code itself is written in a very Pythonic way, this is C++....
