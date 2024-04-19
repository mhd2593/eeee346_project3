rm -rf result.txt
rm -rf main
g++ -o main *.cpp *.h
cat inputs/testDiffForward.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/solDiffForward.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Diff: Forward - FAIL"
  else
    echo "Diff: Forward - PASS"
  fi 
else
  echo "Diff: Forward - FAIL (MISSING FILE)"
fi
