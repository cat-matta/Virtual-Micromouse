set ff=unix
#!bin/bash


#git attempt
git add .
read -p "Commit message: " mess
git commit -m "$mess"
git push