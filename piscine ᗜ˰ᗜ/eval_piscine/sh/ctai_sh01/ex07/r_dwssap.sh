cat /etc/passwd |\
grep -r '^#'|\
awk 'NR % 2 ==0' |\
rev |\
sort -r |\
awk -v start="$FT_LINE1" -v end="$FT_LINE2" 'NR >= start && NR <= end' |\
awk '{ORS=", "}{print}' |\
sed 's/, $/./'
