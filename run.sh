#!/bin/zsh
TIME_STAMP=`date '+%Y-%m-%d% %T'`

function ts_print() {
    case $1 in
    0)  TYPE='INFO'
    ;;
    -1) TYPE='ERROR'
    ;;
    1)  TYPE='WARN'
    ;;
    esac
    echo $TIME_STAMP '['${TYPE}'] - '$2
}

function result_print() {
    RESULT=$1
    for line in ${RESULT[@]}
    do
        echo $line
    done
}

# complie
ts_print 0 'cpp file '$1' start compiling...'
g++ $1

# run if complied
if [ $? == 0 ]
then
    ts_print 0 'cpp file '$1' compile completed.'
    ts_print 0 'executable start running...'
    ./a.out
    if [ $? == 0 ]
    then
        ts_print 0 'process terminated.'
    else
        ts_print -1 'runtime error.'
    fi
else
    ts_print -1 'cpp file '$1' compile error.'
fi



