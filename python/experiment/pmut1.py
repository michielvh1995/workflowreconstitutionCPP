import sys

# This script is used to generate the runscript of my program
# We first need to generate the arrays for the parameters:
pops = [25000, 10000, 2500, 1000] # popsizes
fofs = ['a','b', 'l', 'c', 's', 'd'] # Fitness functions: LD, Correct, Size, Edit, set D
xofs = ['e', 's']      # Crossover functions: ECO//Subtree exchange
pmut = [1]  # mutation chance
pxo  = [0, 0.1,  0.25, 0.5, 1]    # crossover chance
repeats = 5




def GenerateCommand(pop, xos, pmut, pxo, fof):
    """ Generate a single command to run the reconstitution program
    """
    cmd = "./Release/reconstitute >> premMut1.csv " + str(pop) + " " +str(xos) + " " + str(pmut) + " " + str(pxo) + " -r " + str(repeats) + " -f " + str(fof)
    cmd += "\n"
    return cmd

# And now to generate the list of all program calls:
for f in fofs:
  cmds = []
  for x in xofs:
    for p in pops:
      for m in pmut:
        for xo in pxo:
          cmds.append(GenerateCommand(p, x, m, xo, f))

for c in cmds:
  print(c)
