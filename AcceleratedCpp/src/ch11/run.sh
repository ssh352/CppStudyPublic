#!/bin/bash

##############################################
#PROG="ch08_p1_studentgrades"
#make ${PROG}
#./${PROG} <<< ""

PROG="ch11_p1_testvec"
make ${PROG}
./${PROG}

###############################################
#PROG="ch07_p3_reftable"
#make ${PROG}
#echo -e "Hello\nworld" | ./${PROG} 
#
###############################################
#PROG="ch07_p4_sentences"
#read -r -d '' VARIABLE << EOM
#<noun> cat
#<noun> dog
#<noun> table
#<noun-phrase> <noun>
#<noun-phrase> <adjective> <noun-phrase>
#<adjective> large
#<adjective> brown
#<adjective> absurd
#<verb> jumps
#<verb> sits
#<location> on the stairs
#<location> under the sky
#<location> wherever it wants
#<sentence> the <noun-phrase> <verb> <location>
#EOM
#
#make ${PROG}
#echo -e "${VARIABLE}" | ./${PROG}
#
##./${PROG}

echo ""
echo ""


make clean
