for i in $(seq 1 1 101)
do
    # cd results
    mkdir results/per$i
    for j in $(seq 1 1 30)
    do
        mkdir results/per$i/expre$j
    done
done

