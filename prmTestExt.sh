mutations=(0.0 0.05 0.1 0.25 0.5 0.75 1) 
poolsizes=(1000 2500 10000)
crossover=(0.0 0.05 0.1 0.25 0.5 0.75 1)
fitnessfs=('a' 'b' 'c' 'd' 's' 'l')
crossfunc=('e' 's')

# Repeats
r=10

# Keeping track of how many tests we have done
totalTests=$((7*2*7*6*4))

runTests (){
  # Constants: crossoverfunc (s)

#  for p in "${poolsizes[@]}"
#    do
    for x in "${crossover[@]}"
      do
      for m in "${mutations[@]}"
         do
         for c in "${crossfunc[@]}" 
           do
            ./Release/reconstitute $p $c $m $x -r $r -f $1  >> preliminaryExtra2.csv 
	    dn=$(wc -l < preliminaryExtra2.csv)
            printf "Completed %s/%s tests \r" $dn $totalTests
         done
      done
    done
#  done
}

#echo "Poolsize,count,pmut,pxo,goalsize,xof,fof,avgfitness,avgtime,corrects,case" > preliminary.csv

# for timing purposes
now=$(date)
echo $now

p=25000

runTests 'd' &
runTests 'l'&
runTests 's'

for p in "${poolsizes[@]}"
do
  for f in "${fitnessfs[@]}"
  do
    runTests $f & 
  done
done

now=$(date)
echo $now
