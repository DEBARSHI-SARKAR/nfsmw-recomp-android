0067caa0  PUSH -0x1
0067caa2  PUSH 0x87aec8
0067caa7  MOV EAX,FS:[0x0]
0067caad  PUSH EAX
0067caae  MOV dword ptr FS:[0x0],ESP
0067cab5  PUSH ECX
0067cab6  PUSH ESI
0067cab7  MOV ESI,ECX
0067cab9  PUSH EDI
0067caba  MOV dword ptr [ESP + 0x8],ESI
0067cabe  MOV dword ptr [ESI],0x8a9af0
0067cac4  MOV EAX,dword ptr [ESI + 0xc]
0067cac7  XOR EDI,EDI
0067cac9  CMP EAX,EDI
0067cacb  MOV dword ptr [ESP + 0x14],EDI
0067cacf  JLE 0x0067cada
0067cad1  MOV ECX,EAX
0067cad3  DEC ECX
0067cad4  DEC EAX
0067cad5  JNZ 0x0067cad3
0067cad7  MOV dword ptr [ESI + 0xc],ECX
0067cada  MOV EAX,dword ptr [ESI + 0x4]
0067cadd  CMP EAX,EDI
0067cadf  JZ 0x0067caf7
0067cae1  MOV ECX,dword ptr [ESI + 0x8]
0067cae4  PUSH ECX
0067cae5  PUSH EAX
0067cae6  MOV ECX,ESI
0067cae8  CALL dword ptr [0x008a9af8]
0067caee  MOV dword ptr [ESI + 0x4],EDI
0067caf1  MOV dword ptr [ESI + 0x8],EDI
0067caf4  MOV dword ptr [ESI + 0xc],EDI
0067caf7  MOV ECX,dword ptr [ESP + 0xc]
0067cafb  MOV dword ptr [ESI],0x8a9534
0067cb01  POP EDI
0067cb02  POP ESI
0067cb03  MOV dword ptr FS:[0x0],ECX
0067cb0a  ADD ESP,0x10
0067cb0d  RET
