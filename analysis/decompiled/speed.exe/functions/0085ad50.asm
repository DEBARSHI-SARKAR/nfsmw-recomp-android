0085ad50  MOV ECX,dword ptr [ESP + 0x10]
0085ad54  SUB ESP,0xc
0085ad57  CMP ECX,0x1
0085ad5a  JGE 0x0085ad61
0085ad5c  MOV ECX,0x1
0085ad61  PUSH EBP
0085ad62  PUSH ESI
0085ad63  MOV ESI,dword ptr [ESP + 0x18]
0085ad67  MOV byte ptr [ESI + 0x100],0x0
0085ad6e  MOV byte ptr [ESI + 0x101],0x0
0085ad75  XOR EAX,EAX
0085ad77  MOV byte ptr [EAX + ESI*0x1],AL
0085ad7a  INC EAX
0085ad7b  CMP EAX,0x100
0085ad80  JC 0x0085ad77
0085ad82  MOV EBP,dword ptr [ESP + 0x20]
0085ad86  TEST EBP,EBP
0085ad88  JLE 0x0085ae9c
0085ad8e  PUSH EBX
0085ad8f  XOR BL,BL
0085ad91  TEST ECX,ECX
0085ad93  JLE 0x0085ae9b
0085ad99  MOV EAX,0x1
0085ad9e  SUB EAX,ESI
0085ada0  MOV dword ptr [ESP + 0xc],EAX
0085ada4  MOV EAX,0x2
0085ada9  SUB EAX,ESI
0085adab  MOV dword ptr [ESP + 0x10],EAX
0085adaf  MOV EAX,0x3
0085adb4  SUB EAX,ESI
0085adb6  PUSH EDI
0085adb7  MOV EDI,dword ptr [ESP + 0x24]
0085adbb  MOV dword ptr [ESP + 0x18],EAX
0085adbf  MOV dword ptr [ESP + 0x28],ECX
0085adc3  XOR EAX,EAX
0085adc5  MOV dword ptr [ESP + 0x20],EAX
0085adc9  MOV ECX,ESI
0085adcb  JMP 0x0085add0
0085add0  MOV DL,byte ptr [ECX]
0085add2  MOV byte ptr [ESP + 0x2c],DL
0085add6  XOR EDX,EDX
0085add8  DIV EBP
0085adda  MOV AL,byte ptr [EDX + EDI*0x1]
0085addd  ADD AL,byte ptr [ESP + 0x2c]
0085ade1  ADD BL,AL
0085ade3  MOVZX EDX,BL
0085ade6  LEA EAX,[EDX + ESI*0x1]
0085ade9  MOV DL,byte ptr [EAX]
0085adeb  MOV byte ptr [ECX],DL
0085aded  MOV DL,byte ptr [ESP + 0x2c]
0085adf1  MOV byte ptr [EAX],DL
0085adf3  MOV AL,byte ptr [ECX + 0x1]
0085adf6  MOV EDX,dword ptr [ESP + 0x10]
0085adfa  MOV byte ptr [ESP + 0x2c],AL
0085adfe  LEA EAX,[EDX + ECX*0x1]
0085ae01  XOR EDX,EDX
0085ae03  DIV EBP
0085ae05  MOV AL,byte ptr [EDX + EDI*0x1]
0085ae08  ADD AL,byte ptr [ESP + 0x2c]
0085ae0c  ADD BL,AL
0085ae0e  MOVZX EDX,BL
0085ae11  LEA EAX,[EDX + ESI*0x1]
0085ae14  MOV DL,byte ptr [EAX]
0085ae16  MOV byte ptr [ECX + 0x1],DL
0085ae19  MOV DL,byte ptr [ESP + 0x2c]
0085ae1d  MOV byte ptr [EAX],DL
0085ae1f  MOV AL,byte ptr [ECX + 0x2]
0085ae22  MOV EDX,dword ptr [ESP + 0x14]
0085ae26  MOV byte ptr [ESP + 0x2c],AL
0085ae2a  LEA EAX,[EDX + ECX*0x1]
0085ae2d  XOR EDX,EDX
0085ae2f  DIV EBP
0085ae31  MOV AL,byte ptr [EDX + EDI*0x1]
0085ae34  ADD AL,byte ptr [ESP + 0x2c]
0085ae38  ADD BL,AL
0085ae3a  MOVZX EDX,BL
0085ae3d  LEA EAX,[EDX + ESI*0x1]
0085ae40  MOV DL,byte ptr [EAX]
0085ae42  MOV byte ptr [ECX + 0x2],DL
0085ae45  MOV DL,byte ptr [ESP + 0x2c]
0085ae49  MOV byte ptr [EAX],DL
0085ae4b  MOV AL,byte ptr [ECX + 0x3]
0085ae4e  MOV EDX,dword ptr [ESP + 0x18]
0085ae52  MOV byte ptr [ESP + 0x2c],AL
0085ae56  LEA EAX,[EDX + ECX*0x1]
0085ae59  XOR EDX,EDX
0085ae5b  DIV EBP
0085ae5d  ADD ECX,0x4
0085ae60  MOV AL,byte ptr [EDX + EDI*0x1]
0085ae63  ADD AL,byte ptr [ESP + 0x2c]
0085ae67  ADD BL,AL
0085ae69  MOVZX EDX,BL
0085ae6c  LEA EAX,[EDX + ESI*0x1]
0085ae6f  MOV DL,byte ptr [EAX]
0085ae71  MOV byte ptr [ECX + -0x1],DL
0085ae74  MOV DL,byte ptr [ESP + 0x2c]
0085ae78  MOV byte ptr [EAX],DL
0085ae7a  MOV EAX,dword ptr [ESP + 0x20]
0085ae7e  ADD EAX,0x4
0085ae81  CMP EAX,0x100
0085ae86  MOV dword ptr [ESP + 0x20],EAX
0085ae8a  JC 0x0085add0
0085ae90  DEC dword ptr [ESP + 0x28]
0085ae94  JNZ 0x0085adc3
0085ae9a  POP EDI
0085ae9b  POP EBX
0085ae9c  POP ESI
0085ae9d  POP EBP
0085ae9e  ADD ESP,0xc
0085aea1  RET
