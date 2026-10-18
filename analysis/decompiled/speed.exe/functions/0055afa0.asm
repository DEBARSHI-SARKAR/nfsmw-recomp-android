0055afa0  MOV EDX,dword ptr [ESP + 0x4]
0055afa4  PUSH ESI
0055afa5  MOV ESI,ECX
0055afa7  MOV CL,byte ptr [ESP + 0xc]
0055afab  XOR EAX,EAX
0055afad  MOV dword ptr [ESI + 0xc],EDX
0055afb0  OR EDX,0xffffffff
0055afb3  CMP CL,AL
0055afb5  MOV dword ptr [ESI + 0x10],EDX
0055afb8  MOV dword ptr [ESI + 0x14],EDX
0055afbb  MOV DL,0x1
0055afbd  MOV dword ptr [ESI],0x89c3f8
0055afc3  MOV dword ptr [ESI + 0x4],EAX
0055afc6  MOV byte ptr [ESI + 0x8],CL
0055afc9  MOV byte ptr [ESI + 0x18],DL
0055afcc  MOV byte ptr [ESI + 0x9],AL
0055afcf  MOV dword ptr [ESI + 0x1c],EAX
0055afd2  MOV dword ptr [ESI + 0x2c],EAX
0055afd5  MOV dword ptr [ESI + 0x30],EAX
0055afd8  MOV dword ptr [ESI + 0x34],EAX
0055afdb  JZ 0x0055b005
0055afdd  PUSH ESI
0055afde  PUSH 0x55a4b0
0055afe3  MOV dword ptr [ESI + 0x4],0x7
0055afea  PUSH 0x180000
0055afef  MOV ECX,0x9aa9d0
0055aff4  MOV byte ptr [0x009aac81],DL
0055affa  CALL 0x00731040
0055afff  MOV EAX,ESI
0055b001  POP ESI
0055b002  RET 0x8
0055b005  PUSH EAX
0055b006  PUSH ESI
0055b007  PUSH 0x551040
0055b00c  PUSH 0x89c3e4
0055b011  CALL 0x00507dc0
0055b016  ADD ESP,0x10
0055b019  MOV EAX,ESI
0055b01b  POP ESI
0055b01c  RET 0x8
