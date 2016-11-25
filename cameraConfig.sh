#!/bin/bash
HELP="Usage: $0 <VIDEO_DEVICE_ID>\
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\
+ This script is meant to set default parameters for Uvcdynctrl.  +\
+  If u not especify a valid devide ID 0 will be used.            +\
+  It returns 0 for success and 1 if any errors occur in setup    +\
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\
        -h|--help            Display this message.\
        -o                   Add args to the the command.\
        -s|--silent          Disable all messages.\"
        
for ARGS in $@; do

        case $ARGS in
      -h|--help)   echo $HELP;;         
      -s|--silent)   VERBOSE_OFF=1;;
       
        esac
done

        

COMMAND="uvcdynctrl"
DEVICE_NAME=" -d video"
DEVICE_REGEX='[01234567890]'
PARAM=" --set='Saturation' 100; --set='Brightness' 20; --set='Contrast' 100; --set='Hue' 0; --set='Focus, Auto' 0"
SAVE_IFS="$IFS"
IFS=";" 

if [[ "$1" = $DEVICE_REGEX ]] && 
   [  -e "/dev/video$1" ] 
	then
                ERRROR=0
		for ARG in $PARAM ;do 
			$COMMAND ${DEVICE_NAME}$1 $ARG || echo "ERROR running: $COMMAND ${DEVICE_NAME}$1 $ARG";ERROR=1
                done
                if [[ "$ERROR" = 0 ]]
                        then 
                                echo "Success!"
                fi
                exit ERROR

elif [  -e "/dev/video0" ] 
        then
                ERROR=0
                for ARG in $PARAM ;do 
                        $COMMAND ${DEVICE_NAME}0 $ARG || echo "ERROR running: $COMMAND ${DEVICE_NAME}$1 $ARG";ERROR=1
                done
                if [[ "$ERROR" = 0 ]]
                        then 
                                echo "Success!"
                else
                        echo "Error occurred!!!"
                fi
                exit ERROR
else 
        echo -e "\n\t Camera not found. \n\t Camera nao encontrada. \n"
fi


IFS="$SAVE_IFS"
unset COMMAND PARAM SAVE_IFS ERROR DEVICE_NAME DEVICE_REGEX ARG ARGS
