0047eed0  SUB ESP,0x40
0047eed3  MOV EAX,0x3f800000
0047eed8  PUSH EBX
0047eed9  XOR EBX,EBX
0047eedb  MOV dword ptr [ESI],EAX
0047eedd  MOV dword ptr [ESI + 0x4],EBX
0047eee0  MOV dword ptr [ESI + 0x8],EBX
0047eee3  MOV dword ptr [ESI + 0xc],EBX
0047eee6  MOV dword ptr [ESI + 0x10],EBX
0047eee9  MOV dword ptr [ESI + 0x14],EAX
0047eeec  MOV dword ptr [ESI + 0x18],EBX
0047eeef  MOV dword ptr [ESI + 0x1c],EBX
0047eef2  MOV dword ptr [ESI + 0x20],EBX
0047eef5  MOV dword ptr [ESI + 0x24],EBX
0047eef8  MOV dword ptr [ESI + 0x28],EAX
0047eefb  MOV dword ptr [ESI + 0x2c],EBX
0047eefe  MOV dword ptr [ESI + 0x30],EBX
0047ef01  MOV dword ptr [ESI + 0x34],EBX
0047ef04  MOV dword ptr [ESI + 0x38],EBX
0047ef07  MOV dword ptr [ESI + 0x3c],EAX
0047ef0a  CMP dword ptr [0x0092d884],EBX
0047ef10  JZ 0x0047ef67
0047ef12  MOV EAX,[0x0092d87c]
0047ef17  MOV ECX,dword ptr [EAX]
0047ef19  CMP ECX,EBX
0047ef1b  JZ 0x0047ef67
0047ef1d  MOV EDX,dword ptr [ECX]
0047ef1f  PUSH EDI
0047ef20  CALL dword ptr [EDX + 0x4]
0047ef23  MOV EDX,dword ptr [EAX]
0047ef25  MOV ECX,EAX
0047ef27  CALL dword ptr [EDX + 0x54]
0047ef2a  MOV EDI,EAX
0047ef2c  CMP EDI,EBX
0047ef2e  JZ 0x0047ef66
0047ef30  MOV EAX,dword ptr [EDI]
0047ef32  LEA ECX,[ESP + 0x8]
0047ef36  PUSH ECX
0047ef37  MOV ECX,EDI
0047ef39  CALL dword ptr [EAX + 0x40]
0047ef3c  LEA EDX,[ESP + 0x8]
0047ef40  PUSH EDX
0047ef41  PUSH ESI
0047ef42  CALL 0x0045e240
0047ef47  MOV EAX,dword ptr [EDI]
0047ef49  ADD ESP,0x8
0047ef4c  MOV ECX,EDI
0047ef4e  CALL dword ptr [EAX + 0x20]
0047ef51  FLD float ptr [EAX]
0047ef53  MOV ECX,dword ptr [EAX + 0x8]
0047ef56  FCHS
0047ef58  FLD float ptr [EAX + 0x4]
0047ef5b  MOV dword ptr [ESI + 0x30],ECX
0047ef5e  FXCH
0047ef60  FSTP float ptr [ESI + 0x34]
0047ef63  FSTP float ptr [ESI + 0x38]
0047ef66  POP EDI
0047ef67  POP EBX
0047ef68  ADD ESP,0x40
0047ef6b  RET
