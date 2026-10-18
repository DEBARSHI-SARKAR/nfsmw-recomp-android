0085aeb0  PUSH ECX
0085aeb1  MOV EAX,dword ptr [ESP + 0x8]
0085aeb5  MOVZX EDX,byte ptr [EAX + 0x101]
0085aebc  MOVZX ECX,byte ptr [EAX + 0x100]
0085aec3  PUSH EBP
0085aec4  MOV EBP,dword ptr [ESP + 0x14]
0085aec8  TEST EBP,EBP
0085aeca  MOV dword ptr [ESP + 0x4],EDX
0085aece  JLE 0x0085af44
0085aed0  PUSH EBX
0085aed1  PUSH ESI
0085aed2  MOV ESI,dword ptr [ESP + 0x18]
0085aed6  PUSH EDI
0085aed7  JMP 0x0085aee0
0085aee0  MOV EDI,dword ptr [ESP + 0x10]
0085aee4  INC ECX
0085aee5  AND ECX,0xff
0085aeeb  MOVZX EDX,byte ptr [ECX + EAX*0x1]
0085aeef  ADD EDI,EDX
0085aef1  MOV dword ptr [ESP + 0x18],EDX
0085aef5  AND EDI,0xff
0085aefb  MOVZX EDX,byte ptr [EDI + EAX*0x1]
0085aeff  MOV byte ptr [ECX + EAX*0x1],DL
0085af02  MOV dword ptr [ESP + 0x20],EDX
0085af06  MOV DL,byte ptr [ESP + 0x18]
0085af0a  MOV byte ptr [EDI + EAX*0x1],DL
0085af0d  MOV EDX,dword ptr [ESP + 0x20]
0085af11  MOV BL,byte ptr [ESI]
0085af13  MOV dword ptr [ESP + 0x10],EDI
0085af17  MOV EDI,dword ptr [ESP + 0x18]
0085af1b  ADD EDX,EDI
0085af1d  AND EDX,0xff
0085af23  MOV DL,byte ptr [EDX + EAX*0x1]
0085af26  XOR BL,DL
0085af28  MOV byte ptr [ESI],BL
0085af2a  INC ESI
0085af2b  DEC EBP
0085af2c  JNZ 0x0085aee0
0085af2e  POP EDI
0085af2f  POP ESI
0085af30  MOV byte ptr [EAX + 0x100],CL
0085af36  MOV CL,byte ptr [ESP + 0x8]
0085af3a  POP EBX
0085af3b  MOV byte ptr [EAX + 0x101],CL
0085af41  POP EBP
0085af42  POP ECX
0085af43  RET
0085af44  MOV byte ptr [EAX + 0x100],CL
0085af4a  MOV byte ptr [EAX + 0x101],DL
0085af50  POP EBP
0085af51  POP ECX
0085af52  RET
