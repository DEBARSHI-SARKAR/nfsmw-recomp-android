0042ede0  PUSH -0x1
0042ede2  PUSH 0x868368
0042ede7  MOV EAX,FS:[0x0]
0042eded  PUSH EAX
0042edee  MOV dword ptr FS:[0x0],ESP
0042edf5  SUB ESP,0x10
0042edf8  MOV EAX,dword ptr [ESP + 0x24]
0042edfc  PUSH EBX
0042edfd  PUSH ESI
0042edfe  PUSH EDI
0042edff  MOV EDI,dword ptr [ESP + 0x2c]
0042ee03  PUSH EAX
0042ee04  MOV ESI,ECX
0042ee06  PUSH EDI
0042ee07  MOV dword ptr [ESP + 0x14],ESI
0042ee0b  CALL 0x00418d90
0042ee10  XOR EBX,EBX
0042ee12  MOV EDX,EBX
0042ee14  LEA ECX,[ESI + 0x68]
0042ee17  MOV dword ptr [ECX],EDX
0042ee19  MOV dword ptr [ESI],0x891090
0042ee1f  MOV dword ptr [ESI + 0x8],0x891088
0042ee26  MOV dword ptr [ESI + 0x58],EBX
0042ee29  MOV dword ptr [ESI + 0x5c],EBX
0042ee2c  MOV dword ptr [ESI + 0x60],EBX
0042ee2f  MOV byte ptr [ESI + 0x64],BL
0042ee32  MOV byte ptr [ESI + 0x65],BL
0042ee35  MOV dword ptr [ESP + 0x14],0xccbebc20
0042ee3d  MOV EAX,dword ptr [ESP + 0x14]
0042ee41  MOV dword ptr [ECX + 0x4],EAX
0042ee44  MOV dword ptr [ECX + 0x8],EDX
0042ee47  MOV dword ptr [ESI + 0x78],EBX
0042ee4a  MOV dword ptr [ESI + 0x7c],EBX
0042ee4d  MOV dword ptr [ESI + 0x80],EBX
0042ee53  MOV dword ptr [ESI + 0x84],EBX
0042ee59  MOV dword ptr [ESI + 0x88],EBX
0042ee5f  MOV dword ptr [ESI + 0x8c],EBX
0042ee65  MOV dword ptr [ESI + 0x90],0x3f800000
0042ee6f  MOV dword ptr [ESI + 0x94],EBX
0042ee75  MOV dword ptr [ESI + 0x98],EBX
0042ee7b  MOV dword ptr [ESI + 0x9c],EBX
0042ee81  MOV dword ptr [ESI + 0xa0],EBX
0042ee87  MOV dword ptr [ESI + 0xa4],EBX
0042ee8d  MOV dword ptr [ESI + 0xa8],EBX
0042ee93  MOV dword ptr [ESI + 0xac],EBX
0042ee99  MOV ECX,dword ptr [EDI]
0042ee9b  MOV EAX,dword ptr [ECX]
0042ee9d  MOV dword ptr [ESP + 0x24],EBX
0042eea1  MOV dword ptr [ESP + 0x10],EBX
0042eea5  MOV dword ptr [ESP + 0x18],EBX
0042eea9  CALL dword ptr [EAX + 0x54]
0042eeac  MOV dword ptr [ESI + 0x48],EAX
0042eeaf  MOV EAX,dword ptr [EDI]
0042eeb1  MOV ECX,dword ptr [EAX + 0x4]
0042eeb4  PUSH 0x404020
0042eeb9  CALL 0x005d59f0
0042eebe  MOV dword ptr [ESI + 0x4c],EAX
0042eec1  MOV EAX,dword ptr [EDI]
0042eec3  MOV ECX,dword ptr [EAX + 0x4]
0042eec6  PUSH 0x403f90
0042eecb  CALL 0x005d59f0
0042eed0  MOV dword ptr [ESI + 0x50],EAX
0042eed3  MOV EAX,dword ptr [EDI]
0042eed5  MOV ECX,dword ptr [EAX + 0x4]
0042eed8  PUSH 0x405240
0042eedd  CALL 0x005d59f0
0042eee2  MOV dword ptr [ESI + 0x54],EAX
0042eee5  MOV EDI,dword ptr [EDI]
0042eee7  MOV ECX,dword ptr [EDI + 0x4]
0042eeea  PUSH 0x4037e0
0042eeef  CALL 0x005d59f0
0042eef4  MOV dword ptr [ESI + 0x74],EAX
0042eef7  MOV ECX,ESI
0042eef9  MOV byte ptr [ESI + 0x67],BL
0042eefc  CALL 0x00428450
0042ef01  MOV ECX,dword ptr [ESP + 0x1c]
0042ef05  POP EDI
0042ef06  MOV EAX,ESI
0042ef08  POP ESI
0042ef09  POP EBX
0042ef0a  MOV dword ptr FS:[0x0],ECX
0042ef11  ADD ESP,0x1c
0042ef14  RET 0x8
