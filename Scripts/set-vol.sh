amixer sset Master 1%-
vol="$(amixer get Master | tail -n1 | sed -r 's/.*\[(.*)%\].*/\1/')"
notify-send "Amixer Control" "Volume: ${vol}%"
