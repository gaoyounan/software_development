#!/bin/bash

if [ ! -d ~/.junk ]; then
  mkdir ~/.junk
  chmod 777 ~/.junk
fi

for var in $@
do
    #echo $var
    case $var in
	-l)
	  echo `ls ~/.junk`
	  ;;

	-p)
	  rm ~/.junk/*
	  ;;

	 *)
	  if [ ! -f $var ]; then
              echo file $var does not exits
	      exit 1
	  fi
	  mv $var ~/.junk/
    esac
	    
done

exit 0
