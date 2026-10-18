005e5a90  PUSH EBP
005e5a91  MOV EBP,ESP
005e5a93  AND ESP,0xfffffff0
005e5a96  SUB ESP,0x5c
005e5a99  PUSH ESI
005e5a9a  MOV ESI,ECX
005e5a9c  MOV AL,byte ptr [ESI + 0x2]
005e5a9f  SHR AL,0x2
005e5aa2  TEST AL,0x1
005e5aa4  JZ 0x005e5bab
005e5aaa  MOV ECX,dword ptr [ESI + 0x10]
005e5aad  MOV EDX,dword ptr [ESI + 0x14]
005e5ab0  MOV EAX,dword ptr [ESI + 0x18]
005e5ab3  MOV dword ptr [ESP + 0x10],ECX
005e5ab7  XOR ECX,ECX
005e5ab9  MOV CX,word ptr [ESI + 0x1c]
005e5abd  MOV dword ptr [ESP + 0x14],EDX
005e5ac1  LEA EDX,[ESP + 0x20]
005e5ac5  MOV dword ptr [ESP + 0x18],EAX
005e5ac9  MOV EAX,EDX
005e5acb  MOV dword ptr [ESP + 0x20],0x3f800000
005e5ad3  MOV dword ptr [ESP + 0x24],0x0
005e5adb  PUSH ECX
005e5adc  PUSH EDX
005e5add  PUSH EAX
005e5ade  MOV dword ptr [ESP + 0x34],0x0
005e5ae6  MOV dword ptr [ESP + 0x38],0x0
005e5aee  MOV dword ptr [ESP + 0x3c],0x0
005e5af6  MOV dword ptr [ESP + 0x40],0x3f800000
005e5afe  MOV dword ptr [ESP + 0x44],0x0
005e5b06  MOV dword ptr [ESP + 0x48],0x0
005e5b0e  MOV dword ptr [ESP + 0x4c],0x0
005e5b16  MOV dword ptr [ESP + 0x50],0x0
005e5b1e  MOV dword ptr [ESP + 0x54],0x3f800000
005e5b26  MOV dword ptr [ESP + 0x58],0x0
005e5b2e  MOV dword ptr [ESP + 0x5c],0x0
005e5b36  MOV dword ptr [ESP + 0x60],0x0
005e5b3e  MOV dword ptr [ESP + 0x64],0x0
005e5b46  MOV dword ptr [ESP + 0x68],0x3f800000
005e5b4e  CALL 0x006bdd20
005e5b53  MOV ECX,dword ptr [ESP + 0x1c]
005e5b57  MOV EDX,dword ptr [ESP + 0x20]
005e5b5b  MOV EAX,dword ptr [ESP + 0x24]
005e5b5f  MOV dword ptr [ESP + 0x5c],ECX
005e5b63  MOV ECX,dword ptr [ESI + 0x8]
005e5b66  ADD ESP,0xc
005e5b69  TEST ECX,ECX
005e5b6b  MOV dword ptr [ESP + 0x54],EDX
005e5b6f  MOV dword ptr [ESP + 0x58],EAX
005e5b73  MOV dword ptr [ESP + 0x5c],0x3f800000
005e5b7b  JZ 0x005e5b9a
005e5b7d  LEA EDX,[ESP + 0x20]
005e5b81  PUSH EDX
005e5b82  CALL 0x005e29f0
005e5b87  MOV AL,byte ptr [ESI + 0x2]
005e5b8a  SHR AL,0x3
005e5b8d  NOT AL
005e5b8f  TEST AL,0x1
005e5b91  JZ 0x005e5b9a
005e5b93  MOV ECX,dword ptr [ESI + 0x8]
005e5b96  MOV byte ptr [ECX + 0x28],0x0
005e5b9a  MOV ECX,dword ptr [ESI + 0xc]
005e5b9d  TEST ECX,ECX
005e5b9f  JZ 0x005e5bab
005e5ba1  LEA EDX,[ESP + 0x20]
005e5ba5  PUSH EDX
005e5ba6  CALL 0x00503bc0
005e5bab  POP ESI
005e5bac  MOV ESP,EBP
005e5bae  POP EBP
005e5baf  RET
