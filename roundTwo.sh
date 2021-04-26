outfil=roundtwoM05X025.txt

# Set constants:
p=10000; r=20; xf='s'; ff='d'; v=1;

# These are the vars we are going to loop over:
cases=(1 2 3 4)
tsets=('f' 'i' 'b')
gener=('d' 'r')


totalTests=$((4*3*2))
testsDone=0

runTest() { #                     mut crss
 ./Release2/reconstitute 10000 's' $4 $5 -r 20 -f 'd' -v 1 -c $1 -t $2 -g $3 >> $outfil
 echo "" >> $outfil
}

now=$(date)
echo $now

for c in "${cases[@]}"
do
  for ts in "${tsets[@]}"
  do
    for g in "${gener[@]}"
    do
#      runTest $c $ts $g 1 0.1
#      runTest $c $ts $g 0.1 1
#      runTest $c $ts $g 1 1    
      runTest $c $ts $g 0.5 0.25

      testsDone=$((testsDone + 1))
      printf "Completed %s / %s tests \r" $testsDone $totalTests
    done
  done
done

now=$(date)
echo $now

