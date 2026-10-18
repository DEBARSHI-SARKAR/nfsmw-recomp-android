006fa770  MOV EAX,FS:[0x0]
006fa776  PUSH -0x1
006fa778  PUSH 0x87f478
006fa77d  PUSH EAX
006fa77e  MOV dword ptr FS:[0x0],ESP
006fa785  SUB ESP,0x44
006fa788  PUSH ESI
006fa789  PUSH EDI
006fa78a  MOV EDI,ECX
006fa78c  CMP dword ptr [EDI + 0x8],0x1ffffffe
006fa793  JC 0x006fa7e1
006fa795  PUSH 0x13
006fa797  XOR ESI,ESI
006fa799  PUSH 0x892b50
006fa79e  LEA ECX,[ESP + 0x10]
006fa7a2  MOV dword ptr [ESP + 0x28],0xf
006fa7aa  MOV dword ptr [ESP + 0x24],ESI
006fa7ae  MOV byte ptr [ESP + 0x14],0x0
006fa7b3  CALL 0x004303b0
006fa7b8  LEA EAX,[ESP + 0x8]
006fa7bc  PUSH EAX
006fa7bd  LEA ECX,[ESP + 0x28]
006fa7c1  MOV dword ptr [ESP + 0x58],ESI
006fa7c5  CALL 0x00432d50
006fa7ca  PUSH 0x8c9ca8
006fa7cf  LEA ECX,[ESP + 0x28]
006fa7d3  PUSH ECX
006fa7d4  MOV dword ptr [ESP + 0x2c],0x8bf290
006fa7dc  CALL 0x007c56b0
006fa7e1  MOV EDX,dword ptr [ESP + 0x68]
006fa7e5  MOV EAX,dword ptr [EDI + 0x4]
006fa7e8  MOV ESI,dword ptr [ESP + 0x64]
006fa7ec  PUSH EBX
006fa7ed  PUSH 0x0
006fa7ef  PUSH EDX
006fa7f0  PUSH EAX
006fa7f1  PUSH ESI
006fa7f2  PUSH EAX
006fa7f3  MOV ECX,EDI
006fa7f5  CALL 0x006f3c70
006fa7fa  MOV EBX,dword ptr [EDI + 0x8]
006fa7fd  MOV ECX,EAX
006fa7ff  MOV EAX,dword ptr [EDI + 0x4]
006fa802  INC EBX
006fa803  CMP ESI,EAX
006fa805  MOV dword ptr [ESP + 0x6c],ECX
006fa809  MOV dword ptr [EDI + 0x8],EBX
006fa80c  JNZ 0x006fa81e
006fa80e  MOV dword ptr [EAX + 0x4],ECX
006fa811  MOV EAX,dword ptr [EDI + 0x4]
006fa814  MOV dword ptr [EAX],ECX
006fa816  MOV EDX,dword ptr [EDI + 0x4]
006fa819  MOV dword ptr [EDX + 0x8],ECX
006fa81c  JMP 0x006fa841
006fa81e  MOV AL,byte ptr [ESP + 0x64]
006fa822  TEST AL,AL
006fa824  JZ 0x006fa833
006fa826  MOV dword ptr [ESI],ECX
006fa828  MOV EAX,dword ptr [EDI + 0x4]
006fa82b  CMP ESI,dword ptr [EAX]
006fa82d  JNZ 0x006fa841
006fa82f  MOV dword ptr [EAX],ECX
006fa831  JMP 0x006fa841
006fa833  MOV dword ptr [ESI + 0x8],ECX
006fa836  MOV EAX,dword ptr [EDI + 0x4]
006fa839  CMP ESI,dword ptr [EAX + 0x8]
006fa83c  JNZ 0x006fa841
006fa83e  MOV dword ptr [EAX + 0x8],ECX
006fa841  MOV EDX,dword ptr [ECX + 0x4]
006fa844  CMP byte ptr [EDX + 0x14],0x0
006fa848  LEA EAX,[ECX + 0x4]
006fa84b  MOV ESI,ECX
006fa84d  MOV BL,0x1
006fa84f  JNZ 0x006fa8fa
006fa855  PUSH EBP
006fa856  MOV ECX,dword ptr [EAX]
006fa858  MOV EBP,dword ptr [ECX + 0x4]
006fa85b  MOV EDX,dword ptr [EBP]
006fa85e  CMP ECX,EDX
006fa860  JNZ 0x006fa8b2
006fa862  MOV EDX,dword ptr [EBP + 0x8]
006fa865  CMP byte ptr [EDX + 0x14],0x0
006fa869  JNZ 0x006fa883
006fa86b  MOV ECX,dword ptr [EAX]
006fa86d  MOV byte ptr [ECX + 0x14],BL
006fa870  MOV byte ptr [EDX + 0x14],BL
006fa873  MOV EDX,dword ptr [EAX]
006fa875  MOV ECX,dword ptr [EDX + 0x4]
006fa878  MOV byte ptr [ECX + 0x14],0x0
006fa87c  MOV EDX,dword ptr [EAX]
006fa87e  MOV ESI,dword ptr [EDX + 0x4]
006fa881  JMP 0x006fa8e4
006fa883  CMP ESI,dword ptr [ECX + 0x8]
006fa886  JNZ 0x006fa892
006fa888  MOV ESI,ECX
006fa88a  PUSH ESI
006fa88b  MOV ECX,EDI
006fa88d  CALL 0x006efc90
006fa892  MOV EAX,dword ptr [ESI + 0x4]
006fa895  MOV byte ptr [EAX + 0x14],BL
006fa898  MOV ECX,dword ptr [ESI + 0x4]
006fa89b  MOV EDX,dword ptr [ECX + 0x4]
006fa89e  MOV byte ptr [EDX + 0x14],0x0
006fa8a2  MOV EAX,dword ptr [ESI + 0x4]
006fa8a5  MOV ECX,dword ptr [EAX + 0x4]
006fa8a8  PUSH ECX
006fa8a9  MOV ECX,EDI
006fa8ab  CALL 0x006eb320
006fa8b0  JMP 0x006fa8e4
006fa8b2  CMP byte ptr [EDX + 0x14],0x0
006fa8b6  JZ 0x006fa86b
006fa8b8  CMP ESI,dword ptr [ECX]
006fa8ba  JNZ 0x006fa8c6
006fa8bc  MOV ESI,ECX
006fa8be  PUSH ESI
006fa8bf  MOV ECX,EDI
006fa8c1  CALL 0x006eb320
006fa8c6  MOV EAX,dword ptr [ESI + 0x4]
006fa8c9  MOV byte ptr [EAX + 0x14],BL
006fa8cc  MOV ECX,dword ptr [ESI + 0x4]
006fa8cf  MOV EDX,dword ptr [ECX + 0x4]
006fa8d2  MOV byte ptr [EDX + 0x14],0x0
006fa8d6  MOV EAX,dword ptr [ESI + 0x4]
006fa8d9  MOV ECX,dword ptr [EAX + 0x4]
006fa8dc  PUSH ECX
006fa8dd  MOV ECX,EDI
006fa8df  CALL 0x006efc90
006fa8e4  MOV EDX,dword ptr [ESI + 0x4]
006fa8e7  MOV CL,byte ptr [EDX + 0x14]
006fa8ea  TEST CL,CL
006fa8ec  LEA EAX,[ESI + 0x4]
006fa8ef  JZ 0x006fa856
006fa8f5  MOV ECX,dword ptr [ESP + 0x70]
006fa8f9  POP EBP
006fa8fa  MOV EAX,dword ptr [EDI + 0x4]
006fa8fd  MOV EDX,dword ptr [EAX + 0x4]
006fa900  MOV EAX,dword ptr [ESP + 0x60]
006fa904  MOV byte ptr [EDX + 0x14],BL
006fa907  POP EBX
006fa908  MOV dword ptr [EAX],ECX
006fa90a  MOV ECX,dword ptr [ESP + 0x4c]
006fa90e  POP EDI
006fa90f  POP ESI
006fa910  MOV dword ptr FS:[0x0],ECX
006fa917  ADD ESP,0x50
006fa91a  RET 0x10
