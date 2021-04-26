mutations=(0.0 0.05 0.1 0.25 0.5 0.75 1) 
poolsizes=(25000)
crossover=(0.0 0.05 0.1 0.25 0.5 0.75 1)
fitnessfs=('a' 'b' 'c' 'd' 's' 'l')
crossfunc=('e' 's')

# Repeats
r=10

# Keeping track of how many tests we have done
totalTests=$((588))

runTests (){
for p in "${poolsizes[@]}"
   do
   for x in "${crossover[@]}"
     do
     for m in "${mutations[@]}"
        do
        for f in "${fitnessfs[@]}" 
        do
          ./Release/reconstitute $p $1 $m $x -r $r -f $f  >> partthree25000.csv 
          dn=$(wc -l < partthree25000.csv)
          printf "Completed %s/%s tests \r" $dn $totalTests
       done
     done
   done
done
}


# for timing purposes
now=$(date)
echo $now

for c in "${crossfunc[@]}"
do
  runTests $c & 
done

wait

now=$(date)
echo $now
