0041dad0  SUB ESP,0xc
0041dad3  PUSH ESI
0041dad4  MOV ESI,dword ptr [ESP + 0x18]
0041dad8  PUSH EDI
0041dad9  MOV EDI,dword ptr [ESP + 0x20]
0041dadd  CMP ESI,EDI
0041dadf  JZ 0x0041db36
0041dae1  MOV EAX,dword ptr [ESI]
0041dae3  PUSH EAX
0041dae4  LEA ECX,[ESP + 0xc]
0041dae8  CALL 0x00413ee0
0041daed  MOV AL,byte ptr [ESP + 0x10]
0041daf1  TEST AL,AL
0041daf3  JZ 0x0041db2f
0041daf5  FLD float ptr [ESP + 0x8]
0041daf9  FCOMP float ptr [ESP + 0x24]
0041dafd  FNSTSW AX
0041daff  TEST AH,0x5
0041db02  JP 0x0041db0a
0041db04  FLD float ptr [ESP + 0x8]
0041db08  JMP 0x0041db0e
0041db0a  FLD float ptr [ESP + 0x24]
0041db0e  FSTP float ptr [ESP + 0x24]
0041db12  FLD float ptr [ESP + 0xc]
0041db16  FCOMP float ptr [ESP + 0x28]
0041db1a  FNSTSW AX
0041db1c  TEST AH,0x5
0041db1f  JP 0x0041db27
0041db21  FLD float ptr [ESP + 0xc]
0041db25  JMP 0x0041db2b
0041db27  FLD float ptr [ESP + 0x28]
0041db2b  FSTP float ptr [ESP + 0x28]
0041db2f  ADD ESI,0x4
0041db32  CMP ESI,EDI
0041db34  JNZ 0x0041dae1
0041db36  MOV EAX,dword ptr [ESP + 0x18]
0041db3a  MOV EDX,dword ptr [ESP + 0x24]
0041db3e  MOV ECX,EAX
0041db40  MOV dword ptr [ECX],EDX
0041db42  MOV EDX,dword ptr [ESP + 0x28]
0041db46  MOV dword ptr [ECX + 0x4],EDX
0041db49  MOV EDX,dword ptr [ESP + 0x2c]
0041db4d  POP EDI
0041db4e  MOV dword ptr [ECX + 0x8],EDX
0041db51  POP ESI
0041db52  ADD ESP,0xc
0041db55  RET
