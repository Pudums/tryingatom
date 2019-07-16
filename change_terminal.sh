#!/bin/bash
last_terminal=$(cat terminal.txt)
term="termite"
rm terminal.txt
touch terminal.txt
if [ $last_terminal = $term ]
then
echo "cool-retro-term" >> terminal.txt
else
echo "termite" >> terminal.txt
fi
