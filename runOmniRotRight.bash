rm -rf result.txt
rm -rf main
g++ -o main *.cpp *.h
cat inputs/testOmniRotRight.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/solOmniRotRight.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Omni: RotRight - FAIL"
  else
    echo "Omni: RotRight - PASS"
  fi 
else
  echo "Omni: RotRight - FAIL (MISSING FILE)"
fi
