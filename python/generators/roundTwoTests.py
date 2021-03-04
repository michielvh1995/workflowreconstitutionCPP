import sys

# Outpute file:
outfil = "../results/roundTwoTests2.csv"
header = "Poolsize & count& pmut& pxo, goal.Tools.size()& xof& fof& avg fitness & avgtime & corrects&testcase\n"

# Step one: get the base command and the common parameters:
base = "./Release/reconstitute 10000 s 0.5 0.25 -f d -r 25"

# Step two: the tests and the cases:
ts = ["f","i"]
cs = [1, 2, 3, 4]

# .. and a bit hacky for the biotoolstoolset
bt = [" -t b -c 1 ", " -t b -c 2 "]

# Now we generate the case list:
cl = []

for s in ts:
  for c in cs:
    cl.append(" -t " + s + " -c " + str(c))

# .. and again a bit hacky for biotools
cl.append(bt[0])
cl.append(bt[1])

# The pre-final step is to prepare the output file where we dump our results:
with open(outfil, 'w+') as fil:
  fil.write(header)

# And finally we have to output everything to a .sh file:
with open("./experiment/roundtwo/runtests.sh", 'w+') as fil:
  for c in cl:
    fil.write(base + c + " >> " + outfil + "\n")

    # Don't forget the control group!
    fil.write(base + " -g r " + c + " >> " + outfil + "\n")




