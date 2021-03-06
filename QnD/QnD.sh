#!/bin/sh
#$ -S /bin/sh
#$ -cwd
#$ -j y

/bin/echo "*********************************************************"
/bin/echo "**   HOST: " `hostname`
/bin/echo "**   PWD: "  `pwd`
/bin/echo "**   DATE: " `date`
/bin/echo "*********************************************************"
/usr/bin/mpi-selector --query
/bin/echo "*********************************************************"

##ulimit -l unlimited
ulimit -a 

rm *opt.tour

## Number of Inputs 1 to 14
#$ -t 1-14 

INPUTFILE=./INPUTS
INPUT=$(sed -n -e "$SGE_TASK_ID p" $INPUTFILE)
../LKH $INPUT 
