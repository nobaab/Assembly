INCLUDE "EMU8086.INC"
.MODEL SMALL
.STACK 100H
.CODE
MAIN PROC
    PRINT "ENTER A NUMBER TO ADD: "
    
    MOV AH,1
    INT 21H
    MOV BL,AL
    
    INT 21H
    MOV CL,AL
    
    SUB BL,CL
    
    PRINTN
    PRINT "RESULT: "
    
    MOV AH,2
    ADD BL,48
    MOV DL,BL
    INT 21H
    
   
    
