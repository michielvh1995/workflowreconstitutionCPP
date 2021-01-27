import csv

filtered = []


with open("premTestresults.csv", "r") as fil:
    reader = csv.DictReader(fil, delimiter = '&', skipinitialspace = True)

    for line in reader:
        if int(line["corrects"][0]) > 0:
            f = {}
            for k in line.keys():
                f[k.replace(" ", "")] = line[k].replace(" ", "")
            
            f["corrects"] = int(line["corrects"][0])

            filtered.append(f)
relkeys = ["fof", "xof","Poolsize", "pxo", "pmut", "corrects", "avgfitness", "avgtime"]
with open("onlySolved.csv", "w+") as fil:
    writer = csv.DictWriter(fil, fieldnames = relkeys)# filtered[0].keys())
    writer.writeheader()

    for l in filtered:
        line = {}
        for k in relkeys:
            line[k] = l[k]
        
        line["avgtime"] = line["avgtime"][:-1]
        writer.writerow(line)

print("Filtering is done, writtern to onlySolved.csv") 

