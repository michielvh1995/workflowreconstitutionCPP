import sys

# This script is used to generate the runscript of my program
# We first need to generate the arrays for the parameters:
pops = [25000, 10000, 2500, 1000] # popsizes
fofs = ['a','b', 'l', 'c', 's', 'e'] # Fitness functions: LD, Correct, Size, Edit
xofs = ['e', 's']      # Crossover functions: ECO//Subtree exchange
pmut = [0, 0.05, 0.1, 0.25, 0.5]  # mutation chance
pxo  = [0, 0.1,  0.25, 0.5, 1]    # crossover chance
repeats = 5




def GenerateCommand(pop, xos, pmut, pxo, fof):
    """ Generate a single command to run the reconstitution program
    """
    cmd = "./Release/reconstitute >> preliminary.csv " + str(pop) + " " +str(xos) + " " + str(pmut) + " " + str(pxo) + " -r " + str(repeats) + " -f " + str(fof)
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

  with open("./test/test"+f+".sh", 'w+') as fil:
      for c in cmds:
          fil.write(c)
    

# Some useful information:
print('echo "Poolsize, count, pmut, pxo, goal.Tools.size(), xof, fof, avg fitness, avgtime, corrects" > preliminary.csv')

for f in fofs[:3]:
    print("chmod +x ./test/test"+ f + ".sh")
    print("./test/test" + f + ".sh &")

print("wait")

for f in fofs[3:-1]:
    print("chmod +x ./test/test"+ f + ".sh")
    print("./test/test" + f + ".sh &")

print("chmod +x ./test/test"+ fofs[-1] + ".sh")
print("./test/test" + fofs[-1] + ".sh")

