cat /etc/passwd | sed '/^#/d' | cut -d ":" -f 1 | sed -n 'n;p' | rev | sort -r | awk -v min=$FT_LINE1 -v max=$FT_LINE2 'NR >= min && NR <= max' | tr '\n' ' ' | sed 's/ /, /g' | sed 's/\(.*\), /\1./g' | tr -d /'\n'/