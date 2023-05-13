import subprocess
import os

output = subprocess.check_output(['amixer', 'sget', 'Master'])
filtered = subprocess.run(['awk', '-F[][]', '/Mono:/ {print$6}', '/dev/stdin'], input=output, stdout=subprocess.PIPE).stdout.strip()
filteredstr = filtered.decode('utf-8')

if (filteredstr == 'on'):
    os.system("amixer sset Master mute > /dev/null")
    os.system("notify-send 'Amixer Control' 'Audio muted !'")

if (filteredstr == 'off'):
    os.system("amixer sset Master unmute > /dev/null")
    os.system("notify-send 'Amixer Control' 'Audio unmuted !'")
