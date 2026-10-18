0054fc90  PUSH -0x1
0054fc92  PUSH 0x8707d8
0054fc97  MOV EAX,FS:[0x0]
0054fc9d  PUSH EAX
0054fc9e  MOV dword ptr FS:[0x0],ESP
0054fca5  PUSH ECX
0054fca6  MOV EAX,dword ptr [ESP + 0x14]
0054fcaa  PUSH EBX
0054fcab  PUSH ESI
0054fcac  MOV ESI,ECX
0054fcae  PUSH EAX
0054fcaf  MOV dword ptr [ESP + 0xc],ESI
0054fcb3  CALL 0x0059bc40
0054fcb8  XOR EBX,EBX
0054fcba  MOV ECX,0x9b42a4
0054fcbf  MOV dword ptr [ESP + 0x14],EBX
0054fcc3  MOV dword ptr [ESI],0x89ead4
0054fcc9  MOV byte ptr [ESI + 0x148],BL
0054fccf  CALL 0x007a0f50
0054fcd4  CALL 0x0078aed0
0054fcd9  MOV ECX,dword ptr [0x0091ca68]
0054fcdf  CMP ECX,EBX
0054fce1  JZ 0x0054fce9
0054fce3  MOV EDX,dword ptr [ECX]
0054fce5  PUSH 0x1
0054fce7  CALL dword ptr [EDX]
0054fce9  MOV EAX,[0x0091cae0]
0054fcee  MOV dword ptr [0x0091ca68],EBX
0054fcf4  MOV dword ptr [0x0091ca60],EBX
0054fcfa  MOV byte ptr [0x0091ca64],BL
0054fd00  MOV dword ptr [0x0091ca5c],EBX
0054fd06  MOV byte ptr [0x0091ca65],BL
0054fd0c  MOV ECX,ESI
0054fd0e  MOV byte ptr [EAX + 0x1],BL
0054fd11  CALL 0x00544e50
0054fd16  MOV ECX,dword ptr [ESP + 0xc]
0054fd1a  MOV EAX,ESI
0054fd1c  POP ESI
0054fd1d  POP EBX
0054fd1e  MOV dword ptr FS:[0x0],ECX
0054fd25  ADD ESP,0x10
0054fd28  RET 0x4
