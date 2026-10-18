0068fad0  SUB ESP,0xc
0068fad3  MOV EAX,dword ptr [ESP + 0x14]
0068fad7  PUSH EBX
0068fad8  PUSH ESI
0068fad9  MOV ESI,ECX
0068fadb  MOV ECX,dword ptr [ESI + EAX*0x4 + 0xb0]
0068fae2  MOV EBX,dword ptr [ESI + 0x98]
0068fae8  PUSH EDI
0068fae9  ADD ECX,0x4c
0068faec  TEST EBX,EBX
0068faee  MOV EDI,ECX
0068faf0  MOV ECX,dword ptr [EDI]
0068faf2  MOV EDX,dword ptr [EDI + 0x4]
0068faf5  MOV EDI,dword ptr [EDI + 0x8]
0068faf8  MOV dword ptr [ESP + 0xc],ECX
0068fafc  MOV dword ptr [ESP + 0x10],EDX
0068fb00  MOV dword ptr [ESP + 0x14],EDI
0068fb04  JNZ 0x0068fb1d
0068fb06  MOV EAX,dword ptr [ESP + 0x1c]
0068fb0a  MOV ESI,EAX
0068fb0c  MOV dword ptr [ESI],ECX
0068fb0e  MOV dword ptr [ESI + 0x4],EDX
0068fb11  MOV dword ptr [ESI + 0x8],EDI
0068fb14  POP EDI
0068fb15  POP ESI
0068fb16  POP EBX
0068fb17  ADD ESP,0xc
0068fb1a  RET 0x8
0068fb1d  MOV EDX,dword ptr [ESI]
0068fb1f  PUSH EAX
0068fb20  MOV ECX,ESI
0068fb22  CALL dword ptr [EDX + 0x68]
0068fb25  FSTP float ptr [ESP + 0x20]
0068fb29  MOV ECX,dword ptr [ESI + 0x98]
0068fb2f  MOV EAX,dword ptr [ECX]
0068fb31  CALL dword ptr [EAX + 0xa0]
0068fb37  FLD float ptr [ESP + 0x20]
0068fb3b  FMUL float ptr [EAX]
0068fb3d  POP EDI
0068fb3e  POP ESI
0068fb3f  POP EBX
0068fb40  FADD float ptr [ESP]
0068fb43  FSTP float ptr [ESP]
0068fb46  MOV EDX,dword ptr [ESP]
0068fb49  FLD float ptr [ESP + 0x14]
0068fb4d  FMUL float ptr [EAX + 0x4]
0068fb50  FADD float ptr [ESP + 0x4]
0068fb54  FSTP float ptr [ESP + 0x4]
0068fb58  FLD float ptr [ESP + 0x14]
0068fb5c  FMUL float ptr [EAX + 0x8]
0068fb5f  MOV EAX,dword ptr [ESP + 0x10]
0068fb63  MOV ECX,EAX
0068fb65  MOV dword ptr [ECX],EDX
0068fb67  MOV EDX,dword ptr [ESP + 0x4]
0068fb6b  FADD float ptr [ESP + 0x8]
0068fb6f  MOV dword ptr [ECX + 0x4],EDX
0068fb72  FSTP float ptr [ESP + 0x8]
0068fb76  MOV EDX,dword ptr [ESP + 0x8]
0068fb7a  MOV dword ptr [ECX + 0x8],EDX
0068fb7d  ADD ESP,0xc
0068fb80  RET 0x8
