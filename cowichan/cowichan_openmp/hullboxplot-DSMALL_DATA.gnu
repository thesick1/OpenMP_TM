set term png
set output "hullOutSMALL_DATA.png"
set boxwidth 0.5
set title "Hull openMP small data"
set style fill solid 0.5
set xlabel ""
set ylabel "Execution time in seconds"
set grid layerdefault
set xtics ("2 Threads" 1, "4 Threads" 2, "8 Threads" 3, "16 Threads" 4, "32 Threads" 5, "64 Threads" 6)
set xtics rotate by -50
plot "hullOut-DSMALL_DATA2.txt" using (1):1 notitle with boxplot, "hullOut-DSMALL_DATA4.txt" using (2):1 notitle with boxplot, "hullOut-DSMALL_DATA8.txt" using (3):1 notitle with boxplot, "hullOut-DSMALL_DATA16.txt" using (4):1 notitle with boxplot, "hullOut-DSMALL_DATA32.txt" using (5):1 notitle with boxplot, "hullOut-DSMALL_DATA64.txt" using (6):1 notitle with boxplot