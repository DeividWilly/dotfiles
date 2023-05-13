disk_used=$(df -h | grep /home | awk '{print$3}')
disk_avail=$(df -h | grep /home | awk '{print$4}')
echo "Used: $disk_used / Avail: $disk_avail"
