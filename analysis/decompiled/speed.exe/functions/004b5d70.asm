004b5d70  SUB ESP,0x14
004b5d73  MOV EAX,[0x00912134]
004b5d78  MOV dword ptr [ESP + 0xc],0x0
004b5d80  MOV dword ptr [ESP + 0x10],0x0
004b5d88  FLD float ptr [EAX + 0x4]
004b5d8b  FLD float ptr [0x00912828]
004b5d91  LEA ECX,[ESP + 0x4]
004b5d95  FSUB float ptr [EAX]
004b5d97  LEA EAX,[ESP + 0xc]
004b5d9b  PUSH EAX
004b5d9c  PUSH ECX
004b5d9d  FSTP float ptr [ESP + 0x14]
004b5da1  MOV dword ptr [ESP + 0xc],0x0
004b5da9  FLD float ptr [0x0091282c]
004b5daf  MOV dword ptr [ESP + 0x10],0x0
004b5db7  FSUB ST0,ST1
004b5db9  FSTP float ptr [ESP + 0x18]
004b5dbd  FSTP ST0
004b5dbf  CALL 0x0045f3c0
004b5dc4  MOV EAX,[0x00912130]
004b5dc9  FLD float ptr [ESP + 0x10]
004b5dcd  FMUL float ptr [EAX + 0x4]
004b5dd0  FLD float ptr [ESP + 0xc]
004b5dd4  FMUL float ptr [EAX]
004b5dd6  FADDP
004b5dd8  FSTP float ptr [ESP + 0x8]
004b5ddc  MOV EDX,dword ptr [ESP + 0x8]
004b5de0  PUSH EDX
004b5de1  CALL 0x0045dd10
004b5de6  FLD float ptr [ESP + 0x10]
004b5dea  MOV ECX,0x4000
004b5def  ADD ESP,0xc
004b5df2  SUB ECX,EAX
004b5df4  MOV EAX,[0x00912130]
004b5df9  MOV word ptr [0x00912138],CX
004b5e00  FMUL float ptr [EAX + 0x4]
004b5e03  FLD float ptr [ESP + 0x8]
004b5e07  FMUL float ptr [EAX]
004b5e09  FSUBP
004b5e0b  FCOMP float ptr [0x00890968]
004b5e11  FNSTSW AX
004b5e13  TEST AH,0x5
004b5e16  JP 0x004b5e2b
004b5e18  MOV EAX,[0x00912138]
004b5e1d  MOV EDX,0xffff
004b5e22  SUB EDX,EAX
004b5e24  MOV word ptr [0x00912138],DX
004b5e2b  ADD ESP,0x14
004b5e2e  RET
