004fef50  SUB ESP,0x58
004fef53  MOV EAX,dword ptr [ESP + 0x68]
004fef57  MOV ECX,dword ptr [EAX + 0x8]
004fef5a  MOV EDX,dword ptr [EAX + 0x4]
004fef5d  MOV EAX,dword ptr [EAX]
004fef5f  PUSH EBX
004fef60  MOV EBX,dword ptr [ESP + 0x60]
004fef64  PUSH ESI
004fef65  PUSH EDI
004fef66  PUSH ECX
004fef67  MOVZX ECX,word ptr [EBX + 0x6a]
004fef6b  MOV dword ptr [ESP + 0x78],ECX
004fef6f  PUSH EDX
004fef70  PUSH EAX
004fef71  FILD dword ptr [ESP + 0x80]
004fef78  PUSH ECX
004fef79  LEA EDX,[ESP + 0x34]
004fef7d  FMUL float ptr [0x00894958]
004fef83  FSTP float ptr [ESP]
004fef86  PUSH EDX
004fef87  CALL 0x005cfa60
004fef8c  MOV ESI,dword ptr [ESP + 0x8c]
004fef93  MOV ECX,dword ptr [ESP + 0x84]
004fef9a  PUSH ESI
004fef9b  LEA EAX,[ESP + 0x3c]
004fef9f  PUSH EAX
004fefa0  PUSH ECX
004fefa1  CALL 0x00486610
004fefa6  MOV EDI,dword ptr [ESP + 0x9c]
004fefad  MOV EAX,dword ptr [ESP + 0x8c]
004fefb4  PUSH EDI
004fefb5  LEA EDX,[ESP + 0x48]
004fefb9  PUSH EDX
004fefba  PUSH EAX
004fefbb  CALL 0x00486610
004fefc0  FLD float ptr [EDI]
004fefc2  MOV EAX,dword ptr [EBX + 0xc]
004fefc5  MOV ECX,dword ptr [EDI + 0x4]
004fefc8  MOV EDX,dword ptr [EDI + 0x8]
004fefcb  MOV dword ptr [ESP + 0xa0],EAX
004fefd2  FMUL float ptr [ESP + 0xa0]
004fefd9  MOV dword ptr [ESP + 0x3c],ECX
004fefdd  FLD float ptr [ESP + 0x3c]
004fefe1  MOV dword ptr [ESP + 0x40],EDX
004fefe5  FMUL float ptr [ESP + 0xa0]
004fefec  ADD ESP,0x2c
004fefef  FLD float ptr [ESP + 0x14]
004feff3  FMUL float ptr [ESP + 0x74]
004feff7  FSTP float ptr [ESP + 0x20]
004feffb  MOV ECX,dword ptr [ESP + 0x20]
004fefff  FXCH
004ff001  MOV dword ptr [ESP + 0x14],ECX
004ff005  FSTP float ptr [ESP + 0xc]
004ff009  MOV EDX,dword ptr [ESP + 0xc]
004ff00d  MOV dword ptr [EDI],EDX
004ff00f  FSTP float ptr [ESP + 0x10]
004ff013  MOV EAX,dword ptr [ESP + 0x10]
004ff017  MOV dword ptr [EDI + 0x4],EAX
004ff01a  MOV dword ptr [EDI + 0x8],ECX
004ff01d  FLD float ptr [ESI]
004ff01f  MOV ECX,dword ptr [EBX + 0xc]
004ff022  MOV EDX,dword ptr [ESI + 0x4]
004ff025  MOV EAX,dword ptr [ESI + 0x8]
004ff028  MOV dword ptr [ESP + 0x74],ECX
004ff02c  FMUL float ptr [ESP + 0x74]
004ff030  MOV dword ptr [ESP + 0x10],EDX
004ff034  FLD float ptr [ESP + 0x10]
004ff038  MOV dword ptr [ESP + 0x14],EAX
004ff03c  FMUL float ptr [ESP + 0x74]
004ff040  FLD float ptr [ESP + 0x14]
004ff044  FMUL float ptr [ESP + 0x74]
004ff048  FSTP float ptr [ESP + 0x20]
004ff04c  MOV EDX,dword ptr [ESP + 0x20]
004ff050  FXCH
004ff052  MOV dword ptr [ESP + 0x14],EDX
004ff056  FSTP float ptr [ESP + 0xc]
004ff05a  MOV EAX,dword ptr [ESP + 0xc]
004ff05e  MOV dword ptr [ESI],EAX
004ff060  FSTP float ptr [ESP + 0x10]
004ff064  MOV ECX,dword ptr [ESP + 0x10]
004ff068  MOV dword ptr [ESI + 0x4],ECX
004ff06b  MOV dword ptr [ESI + 0x8],EDX
004ff06e  POP EDI
004ff06f  POP ESI
004ff070  POP EBX
004ff071  ADD ESP,0x58
004ff074  RET
