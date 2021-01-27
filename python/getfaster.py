import csv
from numpy import mean


arr = {}

print("Average test time per poolsize and crossover function")

with open("preliminary.csv",'r') as fil:
    reader = csv.DictReader(fil, delimiter = '&', skipinitialspace=True)
    for line in reader:
        if line["Poolsize "] in arr:
            if line["xof "] in arr[line["Poolsize "]]:
                arr[line["Poolsize "]][line["xof "]].append(float(line['avgtime '][:-2]))
            else:
                arr[line["Poolsize "]][line["xof "]] = [float(line["avgtime "][:-2])]
        else:
            arr[line["Poolsize "]] = { line["xof "] : [float(line["avgtime "][:-2])] }

avgs = {}
for i in arr:
  line = {}
  for j in arr[i]:
      line[j] = round(mean(arr[i][j]), 4)
  avgs[i] = line

for i in avgs:
  print(i, avgs[i])

