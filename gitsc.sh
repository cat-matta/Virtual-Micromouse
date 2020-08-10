set ff=unix
#!bin/bash


#git attempt
read -p "Files to add, (.) for all or enter file name " to_add
git add "$to_add"
read -p "Commit message: " mess
git commit -m "$mess"
git push