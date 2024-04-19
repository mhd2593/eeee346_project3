rm -rf result.txt
rm -rf main
g++ -o main *.cpp *.h
cat inputs/testDiffRotRight.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/solDiffRotRight.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Diff: RotRight - FAIL"
  else
    echo "Diff: RotRight - PASS"
  fi 
else
  echo "Diff: RotRight - FAIL (MISSING FILE)"
fi
