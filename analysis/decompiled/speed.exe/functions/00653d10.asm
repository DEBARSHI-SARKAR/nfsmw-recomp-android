00653d10  MOVZX EDX,byte ptr [ECX + 0x7]
00653d14  FLD float ptr [0x00890968]
00653d1a  MOV EAX,dword ptr [ECX + 0x10]
00653d1d  SHL EDX,0x2
00653d20  PUSH ESI
00653d21  LEA ESI,[EDX + EAX*0x1]
00653d24  FLD float ptr [ESI]
00653d26  FUCOMPP
00653d28  FNSTSW AX
00653d2a  TEST AH,0x44
00653d2d  JP 0x00653d49
00653d2f  MOV EAX,dword ptr [ECX + 0x30]
00653d32  FLD float ptr [0x00890968]
00653d38  FLD float ptr [EDX + EAX*0x1]
00653d3b  FUCOMPP
00653d3d  FNSTSW AX
00653d3f  TEST AH,0x44
00653d42  JP 0x00653d49
00653d44  INC byte ptr [ECX + 0x6]
00653d47  JMP 0x00653d51
00653d49  FLD float ptr [ECX + 0x8]
00653d4c  FSUB float ptr [ESI]
00653d4e  FSTP float ptr [ECX + 0x8]
00653d51  FLD float ptr [ESP + 0x8]
00653d55  MOV EDX,dword ptr [ESP + 0x8]
00653d59  FADD float ptr [ECX + 0x8]
00653d5c  FSTP float ptr [ECX + 0x8]
00653d5f  MOV dword ptr [ESI],EDX
00653d61  MOVZX EAX,byte ptr [ECX + 0x7]
00653d65  FLD float ptr [ESP + 0xc]
00653d69  MOV EDX,dword ptr [ECX + 0x30]
00653d6c  POP ESI
00653d6d  FSTP float ptr [EDX + EAX*0x4]
00653d70  MOV EAX,dword ptr [ECX + 0x2c]
00653d73  MOV EDX,dword ptr [ECX + 0x30]
00653d76  FLD float ptr [ESP + 0x8]
00653d7a  FSUB float ptr [EDX + EAX*0x4]
00653d7d  FCOMP float ptr [ECX + 0x28]
00653d80  FNSTSW AX
00653d82  TEST AH,0x41
00653d85  JNZ 0x00653df1
00653d87  MOV EDX,dword ptr [ECX + 0x2c]
00653d8a  MOV EAX,dword ptr [ECX + 0x30]
00653d8d  SHL EDX,0x2
00653d90  FLD float ptr [EDX + EAX*0x1]
00653d93  FCOMP float ptr [0x00890968]
00653d99  FNSTSW AX
00653d9b  TEST AH,0x41
00653d9e  JNZ 0x00653dc4
00653da0  MOV EAX,dword ptr [ECX + 0x10]
00653da3  FLD float ptr [ECX + 0x8]
00653da6  FSUB float ptr [EAX + EDX*0x1]
00653da9  ADD EAX,EDX
00653dab  FSTP float ptr [ECX + 0x8]
00653dae  MOV dword ptr [EAX],0x0
00653db4  MOV EAX,dword ptr [ECX + 0x30]
00653db7  MOV EDX,dword ptr [ECX + 0x2c]
00653dba  MOV dword ptr [EAX + EDX*0x4],0x0
00653dc1  DEC byte ptr [ECX + 0x6]
00653dc4  MOV EAX,dword ptr [ECX + 0x2c]
00653dc7  MOVZX EDX,byte ptr [ECX + 0x5]
00653dcb  INC EAX
00653dcc  CMP EAX,EDX
00653dce  MOV dword ptr [ECX + 0x2c],EAX
00653dd1  JL 0x00653dda
00653dd3  MOV dword ptr [ECX + 0x2c],0x0
00653dda  MOV EAX,dword ptr [ECX + 0x2c]
00653ddd  FLD float ptr [ESP + 0x8]
00653de1  MOV EDX,dword ptr [ECX + 0x30]
00653de4  FSUB float ptr [EDX + EAX*0x4]
00653de7  FCOMP float ptr [ECX + 0x28]
00653dea  FNSTSW AX
00653dec  TEST AH,0x41
00653def  JZ 0x00653d87
00653df1  MOVZX EAX,byte ptr [ECX + 0x6]
00653df5  MOV dword ptr [ESP + 0x8],EAX
00653df9  MOV AL,byte ptr [ECX + 0x7]
00653dfc  MOV DL,byte ptr [ECX + 0x5]
00653dff  FILD dword ptr [ESP + 0x8]
00653e03  INC AL
00653e05  CMP AL,DL
00653e07  MOV byte ptr [ECX + 0x7],AL
00653e0a  FDIVR float ptr [ECX + 0x8]
00653e0d  FSTP float ptr [ECX + 0xc]
00653e10  JC 0x00653e16
00653e12  MOV byte ptr [ECX + 0x7],0x0
00653e16  RET 0x8
