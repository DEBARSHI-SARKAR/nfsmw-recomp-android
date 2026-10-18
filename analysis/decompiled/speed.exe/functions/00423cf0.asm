00423cf0  SUB ESP,0x10
00423cf3  PUSH EBX
00423cf4  MOV EBX,dword ptr [ESP + 0x20]
00423cf8  MOV EAX,dword ptr [EBX + 0x4]
00423cfb  PUSH EDI
00423cfc  MOV EDI,dword ptr [EAX]
00423cfe  CMP EDI,EAX
00423d00  MOV dword ptr [ESP + 0x8],0x0
00423d08  JZ 0x00423ddf
00423d0e  PUSH ESI
00423d0f  MOV ESI,dword ptr [ESP + 0x20]
00423d13  MOV EAX,dword ptr [EDI + 0x8]
00423d16  MOV EAX,dword ptr [EAX + 0x14]
00423d19  TEST EAX,EAX
00423d1b  JZ 0x00423d78
00423d1d  MOV ECX,dword ptr [EAX + 0x4]
00423d20  PUSH 0x4039f0
00423d25  CALL 0x005d59f0
00423d2a  TEST EAX,EAX
00423d2c  SETNZ CL
00423d2f  TEST CL,CL
00423d31  JZ 0x00423d78
00423d33  MOV EDX,dword ptr [EAX]
00423d35  MOV ECX,EAX
00423d37  CALL dword ptr [EDX + 0x20]
00423d3a  MOV ECX,dword ptr [EAX]
00423d3c  MOV EDX,dword ptr [EAX + 0x4]
00423d3f  MOV EAX,dword ptr [EAX + 0x8]
00423d42  MOV dword ptr [ESP + 0x10],ECX
00423d46  FLD float ptr [ESP + 0x10]
00423d4a  FADD float ptr [ESI]
00423d4c  MOV dword ptr [ESP + 0x14],EDX
00423d50  MOV dword ptr [ESP + 0x18],EAX
00423d54  FSTP float ptr [ESI]
00423d56  FLD float ptr [ESP + 0x14]
00423d5a  FADD float ptr [ESI + 0x4]
00423d5d  FSTP float ptr [ESI + 0x4]
00423d60  FLD float ptr [ESP + 0x18]
00423d64  FADD float ptr [ESI + 0x8]
00423d67  FSTP float ptr [ESI + 0x8]
00423d6a  FLD float ptr [ESP + 0xc]
00423d6e  FADD float ptr [0x0089096c]
00423d74  FSTP float ptr [ESP + 0xc]
00423d78  MOV EDI,dword ptr [EDI]
00423d7a  CMP EDI,dword ptr [EBX + 0x4]
00423d7d  JNZ 0x00423d13
00423d7f  FLD float ptr [ESP + 0xc]
00423d83  FCOMP float ptr [0x00890968]
00423d89  FNSTSW AX
00423d8b  TEST AH,0x41
00423d8e  JNZ 0x00423dde
00423d90  FLD float ptr [0x0089096c]
00423d96  MOV EAX,dword ptr [ESP + 0x24]
00423d9a  FDIV float ptr [ESP + 0xc]
00423d9e  PUSH ESI
00423d9f  PUSH ESI
00423da0  FLD ST0
00423da2  FMUL float ptr [ESI]
00423da4  FST float ptr [ESI]
00423da6  FLD ST1
00423da8  FMUL float ptr [ESI + 0x4]
00423dab  FST float ptr [ESP + 0x30]
00423daf  FSTP float ptr [ESI + 0x4]
00423db2  FXCH
00423db4  FMUL float ptr [ESI + 0x8]
00423db7  FST float ptr [ESP + 0x14]
00423dbb  FSTP float ptr [ESI + 0x8]
00423dbe  FSUB float ptr [EAX]
00423dc0  FSTP float ptr [ESI]
00423dc2  FLD float ptr [ESP + 0x30]
00423dc6  FSUB float ptr [EAX + 0x4]
00423dc9  FSTP float ptr [ESI + 0x4]
00423dcc  FLD float ptr [ESP + 0x14]
00423dd0  FSUB float ptr [EAX + 0x8]
00423dd3  FSTP float ptr [ESI + 0x8]
00423dd6  CALL 0x0040fe20
00423ddb  ADD ESP,0x8
00423dde  POP ESI
00423ddf  POP EDI
00423de0  POP EBX
00423de1  ADD ESP,0x10
00423de4  RET
