007cfeb0  PUSH EBP
007cfeb1  MOV EBP,ESP
007cfeb3  PUSH -0x1
007cfeb5  PUSH 0x8bcb90
007cfeba  PUSH 0x7cd5e4
007cfebf  MOV EAX,FS:[0x0]
007cfec5  PUSH EAX
007cfec6  MOV dword ptr FS:[0x0],ESP
007cfecd  ADD ESP,-0x38
007cfed0  PUSH EBX
007cfed1  PUSH ESI
007cfed2  PUSH EDI
007cfed3  MOV dword ptr [EBP + -0x18],ESP
007cfed6  MOV EAX,dword ptr [EBP + 0x18]
007cfed9  MOV dword ptr [EBP + -0x30],EAX
007cfedc  MOV dword ptr [EBP + -0x24],0x0
007cfee3  MOV ECX,dword ptr [EBP + 0xc]
007cfee6  MOV EDX,dword ptr [ECX + -0x4]
007cfee9  MOV dword ptr [EBP + -0x20],EDX
007cfeec  MOV EAX,dword ptr [EBP + 0x8]
007cfeef  MOV ECX,dword ptr [EAX + 0x18]
007cfef2  PUSH ECX
007cfef3  LEA EDX,[EBP + -0x2c]
007cfef6  PUSH EDX
007cfef7  CALL 0x007c5050
007cfefc  ADD ESP,0x8
007cfeff  MOV dword ptr [EBP + -0x1c],EAX
007cff02  CALL 0x007cd100
007cff07  MOV EAX,dword ptr [EAX + 0x7c]
007cff0a  MOV dword ptr [EBP + -0x38],EAX
007cff0d  CALL 0x007cd100
007cff12  MOV ECX,dword ptr [EAX + 0x80]
007cff18  MOV dword ptr [EBP + -0x34],ECX
007cff1b  CALL 0x007cd100
007cff20  MOV EDX,dword ptr [EBP + 0x8]
007cff23  MOV dword ptr [EAX + 0x7c],EDX
007cff26  CALL 0x007cd100
007cff2b  MOV ECX,dword ptr [EBP + 0x10]
007cff2e  MOV dword ptr [EAX + 0x80],ECX
007cff34  MOV dword ptr [EBP + -0x4],0x0
007cff3b  MOV dword ptr [EBP + -0x4],0x1
007cff42  MOV EDX,dword ptr [EBP + 0x20]
007cff45  PUSH EDX
007cff46  MOV EAX,dword ptr [EBP + 0x1c]
007cff49  PUSH EAX
007cff4a  MOV ECX,dword ptr [EBP + 0x18]
007cff4d  PUSH ECX
007cff4e  MOV EDX,dword ptr [EBP + 0x14]
007cff51  PUSH EDX
007cff52  MOV EAX,dword ptr [EBP + 0xc]
007cff55  PUSH EAX
007cff56  CALL 0x007c4d40
007cff5b  ADD ESP,0x14
007cff5e  MOV dword ptr [EBP + -0x30],EAX
007cff61  MOV dword ptr [EBP + -0x4],0x0
007cff68  JMP 0x007d0020
007d0020  MOV dword ptr [EBP + -0x4],0xffffffff
007d0027  CALL 0x007d0031
007d002c  JMP 0x007d00bd
