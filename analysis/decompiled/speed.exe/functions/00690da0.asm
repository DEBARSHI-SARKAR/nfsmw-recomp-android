00690da0  FLD float ptr [ESP + 0x8]
00690da4  MOV EAX,dword ptr [ESP + 0xc]
00690da8  FCOMP float ptr [0x00890968]
00690dae  MOV EDX,dword ptr [ESP + 0x4]
00690db2  PUSH ESI
00690db3  MOV ESI,ECX
00690db5  MOV ECX,dword ptr [ESP + 0xc]
00690db9  MOV dword ptr [ESI + 0xe4],EAX
00690dbf  FNSTSW AX
00690dc1  MOV dword ptr [ESI + 0xd8],ECX
00690dc7  TEST AH,0x5
00690dca  MOV dword ptr [ESI + 0xe0],EDX
00690dd0  JP 0x00690dde
00690dd2  FLD float ptr [ESP + 0xc]
00690dd6  FCHS
00690dd8  FSTP float ptr [ESP + 0x10]
00690ddc  JMP 0x00690de6
00690dde  MOV EAX,dword ptr [ESP + 0xc]
00690de2  MOV dword ptr [ESP + 0x10],EAX
00690de6  MOV ECX,dword ptr [ESP + 0x10]
00690dea  MOV EDX,dword ptr [ESP + 0x8]
00690dee  PUSH ECX
00690def  PUSH EDX
00690df0  CALL 0x005cb5d0
00690df5  FSTP float ptr [ESI + 0xdc]
00690dfb  MOV AL,byte ptr [ESI + 0xc4]
00690e01  ADD ESP,0x8
00690e04  TEST AL,AL
00690e06  JZ 0x00690e14
00690e08  MOV dword ptr [ESI + 0xd0],0x0
00690e12  JMP 0x00690e2a
00690e14  FLD float ptr [ESP + 0xc]
00690e18  FADD float ptr [ESI + 0xc8]
00690e1e  FDIV float ptr [ESI + 0xcc]
00690e24  FSTP float ptr [ESI + 0xd0]
00690e2a  FLD float ptr [ESI + 0xcc]
00690e30  FMUL float ptr [ESI + 0xd0]
00690e36  FSUB float ptr [ESP + 0xc]
00690e3a  FSTP float ptr [ESI + 0xd4]
00690e40  POP ESI
00690e41  RET 0x10
