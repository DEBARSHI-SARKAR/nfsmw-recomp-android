0045ff40  SUB ESP,0xc
0045ff43  MOV EAX,dword ptr [ESP + 0x18]
0045ff47  MOV ECX,dword ptr [EAX]
0045ff49  MOV EDX,dword ptr [EAX + 0x4]
0045ff4c  MOV EAX,dword ptr [EAX + 0x8]
0045ff4f  MOV dword ptr [ESP],ECX
0045ff52  MOV ECX,dword ptr [ESP + 0x10]
0045ff56  FLD float ptr [ECX]
0045ff58  MOV dword ptr [ESP + 0x4],EDX
0045ff5c  FSUB float ptr [ESP]
0045ff5f  MOV dword ptr [ESP + 0x8],EAX
0045ff63  FLD float ptr [ECX + 0x4]
0045ff66  FSUB float ptr [ESP + 0x4]
0045ff6a  FSTP float ptr [ESP + 0x18]
0045ff6e  FCOM float ptr [ESP + 0x18]
0045ff72  FNSTSW AX
0045ff74  TEST AH,0x41
0045ff77  JZ 0x0045ff7f
0045ff79  FSTP ST0
0045ff7b  FLD float ptr [ESP + 0x18]
0045ff7f  FLD float ptr [ECX + 0x8]
0045ff82  FSUB float ptr [ESP + 0x8]
0045ff86  FSTP float ptr [ESP + 0x18]
0045ff8a  FCOM float ptr [ESP + 0x18]
0045ff8e  FNSTSW AX
0045ff90  TEST AH,0x41
0045ff93  JZ 0x0045ff9b
0045ff95  FSTP ST0
0045ff97  FLD float ptr [ESP + 0x18]
0045ff9b  FLD float ptr [ESP]
0045ff9e  MOV ECX,dword ptr [ESP + 0x14]
0045ffa2  FSUB float ptr [ECX]
0045ffa4  FSTP float ptr [ESP + 0x18]
0045ffa8  FCOM float ptr [ESP + 0x18]
0045ffac  FNSTSW AX
0045ffae  TEST AH,0x41
0045ffb1  JZ 0x0045ffb9
0045ffb3  FSTP ST0
0045ffb5  FLD float ptr [ESP + 0x18]
0045ffb9  FLD float ptr [ESP + 0x4]
0045ffbd  FSUB float ptr [ECX + 0x4]
0045ffc0  FSTP float ptr [ESP + 0x18]
0045ffc4  FCOM float ptr [ESP + 0x18]
0045ffc8  FNSTSW AX
0045ffca  TEST AH,0x41
0045ffcd  JZ 0x0045ffd5
0045ffcf  FSTP ST0
0045ffd1  FLD float ptr [ESP + 0x18]
0045ffd5  FLD float ptr [ESP + 0x8]
0045ffd9  FSUB float ptr [ECX + 0x8]
0045ffdc  FSTP float ptr [ESP + 0x18]
0045ffe0  FCOM float ptr [ESP + 0x18]
0045ffe4  FNSTSW AX
0045ffe6  TEST AH,0x41
0045ffe9  JZ 0x0045fff1
0045ffeb  FSTP ST0
0045ffed  FLD float ptr [ESP + 0x18]
0045fff1  ADD ESP,0xc
0045fff4  RET
