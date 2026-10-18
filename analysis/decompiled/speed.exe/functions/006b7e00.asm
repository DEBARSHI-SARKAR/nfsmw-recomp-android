006b7e00  PUSH -0x1
006b7e02  PUSH 0x87dbfa
006b7e07  MOV EAX,FS:[0x0]
006b7e0d  PUSH EAX
006b7e0e  MOV dword ptr FS:[0x0],ESP
006b7e15  SUB ESP,0xc
006b7e18  PUSH EBP
006b7e19  PUSH ESI
006b7e1a  MOV ESI,ECX
006b7e1c  PUSH EDI
006b7e1d  LEA EAX,[ESI + 0x60]
006b7e20  LEA EBP,[ESI + 0x194]
006b7e26  LEA EDI,[ESI + 0x19c]
006b7e2c  MOV dword ptr [ESP + 0x14],ESI
006b7e30  MOV dword ptr [ESI],0x8acba8
006b7e36  MOV dword ptr [ESI + 0x8],0x8acb9c
006b7e3d  MOV dword ptr [ESI + 0x48],0x8acaf0
006b7e44  MOV dword ptr [ESI + 0x50],0x8aca48
006b7e4b  MOV dword ptr [ESI + 0x58],0x8aca40
006b7e52  MOV dword ptr [EAX],0x8aca08
006b7e58  MOV dword ptr [ESI + 0x64],0x8aca04
006b7e5f  MOV dword ptr [ESI + 0x68],0x8ac9f4
006b7e66  MOV dword ptr [ESI + 0x130],0x8ac9d4
006b7e70  MOV dword ptr [EBP],0x8ac9c0
006b7e77  MOV dword ptr [EDI],0x8ac9b0
006b7e7d  MOV CL,byte ptr [ESI + 0x1b0]
006b7e83  TEST CL,CL
006b7e85  MOV dword ptr [ESP + 0x20],0x2
006b7e8d  JZ 0x006b7e9f
006b7e8f  PUSH EAX
006b7e90  CALL 0x0048cd20
006b7e95  ADD ESP,0x4
006b7e98  MOV byte ptr [ESI + 0x1b0],0x0
006b7e9f  MOV ECX,dword ptr [ESI + 0x1a4]
006b7ea5  TEST ECX,ECX
006b7ea7  JZ 0x006b7eb5
006b7ea9  MOV EAX,dword ptr [ECX]
006b7eab  CALL dword ptr [EAX + 0x4]
006b7eae  MOV EDX,dword ptr [EAX]
006b7eb0  MOV ECX,EAX
006b7eb2  CALL dword ptr [EDX + 0x8]
006b7eb5  MOV EAX,dword ptr [ESI + 0x1ac]
006b7ebb  TEST EAX,EAX
006b7ebd  JZ 0x006b7ed1
006b7ebf  PUSH EAX
006b7ec0  MOV ECX,ESI
006b7ec2  CALL 0x006e9c90
006b7ec7  MOV dword ptr [ESI + 0x1ac],0x0
006b7ed1  LEA ECX,[EDI + 0x8]
006b7ed4  MOV byte ptr [ESP + 0x20],0x1
006b7ed9  MOV dword ptr [EDI],0x89187c
006b7edf  CALL 0x004258d0
006b7ee4  MOV dword ptr [EDI],0x890970
006b7eea  MOV ECX,dword ptr [EDI + 0x4]
006b7eed  PUSH EDI
006b7eee  CALL 0x005d5a50
006b7ef3  MOV dword ptr [EBP],0x890970
006b7efa  MOV ECX,dword ptr [EBP + 0x4]
006b7efd  PUSH EBP
006b7efe  MOV byte ptr [ESP + 0x24],0x0
006b7f03  CALL 0x005d5a50
006b7f08  MOV ECX,ESI
006b7f0a  MOV dword ptr [ESP + 0x20],0xffffffff
006b7f12  CALL 0x006b7d80
006b7f17  MOV ECX,dword ptr [ESP + 0x18]
006b7f1b  POP EDI
006b7f1c  POP ESI
006b7f1d  POP EBP
006b7f1e  MOV dword ptr FS:[0x0],ECX
006b7f25  ADD ESP,0x18
006b7f28  RET
