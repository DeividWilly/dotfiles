disk=$(df -h --total | grep total | awk '{print $3"/"$4}')
echo "$disk"
