rm *.dat
{
n=0
while [ $n -le $1 ]; 
do
   let  n++

   ./pi.exe >> $2
    
done
}       
./promedio_v1.exe -s log.dat

