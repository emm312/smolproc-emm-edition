#!/bin/bash
customasm -f hexspace -o ram.mif archdef.s asm.s
echo " 0x00" >> ram.mif