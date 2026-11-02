;Question 1
LDRH r1, [r0, #17]   ; x[1].c
ADD r1, r1, #100     ; r1 = r1 + 100
STRH r1, [r0, #17]   ; x[1].c = r1 

;Question 2
LDRH r1, [r0, #28]   ; y[1].c
ADD r1, r1, #100    ; r1 = r1 + 100
STRH r1, [r0, #28]   ; y[1].c = r1


;Question 6        
        AREA myData, DATA
        ALIGN
str     DCB "hello", 0        ; your string + terminator

        AREA main, CODE
        EXPORT __main
        IMPORT search             ; tell the assembler search is in C
        ALIGN
        ENTRY

__main  PROC
        LDR  r0, =str          ; arg 1: address of str
        MOV  r1, #'l'           ; arg 2: character to find
        BL   search               ; call it; result comes back in r0
stop    B    stop
        ENDP
        END

;Question 7

    AREA main, CODE
        EXPORT __main
        IMPORT students         ; Import students from C
        ALIGN
        ENTRY

__main PROC
        LDR  r0, =students      ; Load address of students into r0
        MOV  r1, #0             ; Initialize total score to 0
        MOV r2, #10             ; Set loop counter to 10 (number of students)
        ; Loop to iterate through students and update their scores
loop
        LDR r3, [r0, #4]       ; Load student score (offset 4)
        ADD r1, r1, r3          ; Add score to total
        ADD r0, r0, #12         ; Move to the next student (size of Student_T is 12 bytes)
        SUBS r2, r2, #1         ; Decrement loop counter
        BNE loop                ; If not zero, repeat loop
stop B stop
        ENDP
        END

; Question 12
; strcpy.s
        AREA stringCopy, CODE
        EXPORT strcpy               ; ← fix 2: make strcpy visible to C
        ALIGN

strcpy  PROC
loop    LDRB r2, [r1]               ; load a byte, r2 = *src
        STRB r2, [r0]               ; store a byte, *dst = r2
        ADD  r1, #1                 ; src++
        ADD  r0, #1                 ; dst++
        CMP  r2, #0                 ; was it the null terminator?
        BNE  loop                   ; if not, keep copying
        BX   lr                     ; ← fix 3: return to main
        ENDP
        END