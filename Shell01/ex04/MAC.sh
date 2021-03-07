ifconfig -a | grep ether | awk '{if ($1 != "media\:") print $0}' | cut -c 8-24
