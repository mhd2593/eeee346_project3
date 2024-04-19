rm -rf result.txt
rm -rf main
g++ -o main *.cpp *.h
cat inputs/testDiffForwardRight.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/solDiffForwardRight.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Diff: ForwardRight - FAIL"
  else
    echo "Diff: ForwardRight - PASS"
  fi 
else
  echo "Diff: ForwardRight - FAIL (MISSING FILE)"
fi
