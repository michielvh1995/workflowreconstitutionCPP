import csv
from numpy import mean


arr = {}

print("Amount of solves per fitness function")

with open("premTestresults.csv",'r') as fil:
    reader = csv.DictReader(fil, delimiter = '&', skipinitialspace=True)
    for line in reader:
        if line["fof "] in arr:
            arr[line["fof "]] += int(line["corrects"][0])
        else:   
            arr[line["fof "]] = int(line["corrects"][0])

for i in arr:
    print(i, arr[i])
