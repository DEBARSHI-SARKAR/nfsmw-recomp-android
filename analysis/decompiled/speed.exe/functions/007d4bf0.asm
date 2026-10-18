007d4bf0  CMP dword ptr [EBP + -0x1c],0x0
007d4bf4  JZ 0x007d4bfb
007d4bf6  MOV EAX,dword ptr [EBP + -0x1c]
007d4bf9  JMP 0x007d4c30
007d4bfb  CMP dword ptr [EBP + 0x8],0x0
007d4bff  JNZ 0x007d4c08
007d4c01  MOV dword ptr [EBP + 0x8],0x1
007d4c08  CMP dword ptr [0x009c531c],0x1
007d4c0f  JZ 0x007d4c1d
007d4c11  MOV EDX,dword ptr [EBP + 0x8]
007d4c14  ADD EDX,0xf
007d4c17  AND EDX,0xfffffff0
007d4c1a  MOV dword ptr [EBP + 0x8],EDX
007d4c1d  MOV EAX,dword ptr [EBP + 0x8]
007d4c20  PUSH EAX
007d4c21  PUSH 0x0
007d4c23  MOV ECX,dword ptr [0x009c5318]
007d4c29  PUSH ECX
007d4c2a  CALL dword ptr [0x00890238]
007d4c30  MOV ECX,dword ptr [EBP + -0x10]
007d4c33  MOV dword ptr FS:[0x0],ECX
007d4c3a  POP EDI
007d4c3b  POP ESI
007d4c3c  POP EBX
007d4c3d  MOV ESP,EBP
007d4c3f  POP EBP
007d4c40  RET
