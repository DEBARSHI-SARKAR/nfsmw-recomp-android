0047ce80  MOV ECX,dword ptr [ECX + 0x80]
0047ce86  FLD float ptr [ECX + 0x14]
0047ce89  SUB ESP,0x1c
0047ce8c  FCOM float ptr [0x00890968]
0047ce92  FNSTSW AX
0047ce94  TEST AH,0x41
0047ce97  JNP 0x0047ceec
0047ce99  FST float ptr [ESP + 0x10]
0047ce9d  FDIVR float ptr [0x0089472c]
0047cea3  MOV dword ptr [ESP + 0x8],0x5
0047ceab  MOV dword ptr [ESP + 0xc],0x0
0047ceb3  MOV dword ptr [ESP + 0x18],0x8ee0cc
0047cebb  FSTP float ptr [ESP + 0x14]
0047cebf  MOV EAX,dword ptr [ECX + 0x10]
0047cec2  PUSH EAX
0047cec3  LEA ECX,[ESP + 0x4]
0047cec7  PUSH ECX
0047cec8  LEA ECX,[ESP + 0x10]
0047cecc  CALL 0x0046f4a0
0047ced1  FLD float ptr [ESP]
0047ced4  MOV EAX,dword ptr [ESP + 0x20]
0047ced8  FMUL float ptr [EAX]
0047ceda  FSTP float ptr [EAX]
0047cedc  FLD float ptr [ESP + 0x4]
0047cee0  FMUL float ptr [EAX + 0x8]
0047cee3  FSTP float ptr [EAX + 0x8]
0047cee6  ADD ESP,0x1c
0047cee9  RET 0x4
0047ceec  FSTP ST0
0047ceee  ADD ESP,0x1c
0047cef1  RET 0x4
