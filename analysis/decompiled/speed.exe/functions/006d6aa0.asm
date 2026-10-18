006d6aa0  PUSH EBP
006d6aa1  MOV EBP,ESP
006d6aa3  AND ESP,0xfffffff0
006d6aa6  SUB ESP,0x98
006d6aac  PUSH ESI
006d6aad  MOV ESI,ECX
006d6aaf  PUSH EDI
006d6ab0  PUSH ESI
006d6ab1  CALL 0x006c6300
006d6ab6  MOV ECX,dword ptr [ESI + 0x44]
006d6ab9  MOV EAX,dword ptr [ECX + 0xc7c]
006d6abf  ADD ESP,0x4
006d6ac2  TEST EAX,EAX
006d6ac4  JZ 0x006d6b14
006d6ac6  MOV EAX,[0x009b392c]
006d6acb  MOV EDX,dword ptr [EAX + 0x40]
006d6ace  MOV dword ptr [ESP + 0x10],EDX
006d6ad2  MOV EDX,dword ptr [EAX + 0x44]
006d6ad5  MOV dword ptr [ESP + 0x14],EDX
006d6ad9  MOV EAX,dword ptr [EAX + 0x48]
006d6adc  MOV EDX,dword ptr [0x00982a20]
006d6ae2  MOV dword ptr [ESP + 0x18],EAX
006d6ae6  MOV EAX,dword ptr [EDX + 0x4]
006d6ae9  IMUL EAX,EAX,0x70
006d6aec  MOV EDX,dword ptr [EAX + 0x919648]
006d6af2  MOV EAX,dword ptr [EDX + 0x36a0]
006d6af8  MOV dword ptr [ESP + 0x1c],EAX
006d6afc  MOV ECX,dword ptr [ECX + 0xc7c]
006d6b02  MOV EAX,dword ptr [ESI + 0x48]
006d6b05  MOV EDX,dword ptr [EAX]
006d6b07  LEA EDI,[ESP + 0x10]
006d6b0b  PUSH EDI
006d6b0c  PUSH ECX
006d6b0d  PUSH EAX
006d6b0e  CALL dword ptr [EDX + 0x88]
006d6b14  MOV EDX,dword ptr [ESI + 0x44]
006d6b17  MOV ECX,dword ptr [EDX + 0xcf4]
006d6b1d  TEST ECX,ECX
006d6b1f  JZ 0x006d6b32
006d6b21  MOV EDI,dword ptr [0x008fadc0]
006d6b27  MOV EAX,dword ptr [ESI + 0x48]
006d6b2a  MOV EDX,dword ptr [EAX]
006d6b2c  PUSH EDI
006d6b2d  PUSH ECX
006d6b2e  PUSH EAX
006d6b2f  CALL dword ptr [EDX + 0x78]
006d6b32  PUSH ESI
006d6b33  CALL 0x006c6450
006d6b38  MOV EAX,[0x00901830]
006d6b3d  ADD ESP,0x4
006d6b40  TEST EAX,EAX
006d6b42  JLE 0x006d6cce
006d6b48  MOV EAX,dword ptr [ESI + 0x4]
006d6b4b  CMP EAX,0x12
006d6b4e  JA 0x006d6cce
006d6b54  MOVZX EAX,byte ptr [EAX + 0x6d6cdc]
006d6b5b  JMP dword ptr [EAX*0x4 + 0x6d6cd4]
006d6b62  MOV ECX,dword ptr [0x00982a20]
006d6b68  CMP dword ptr [ECX + 0x4],0x1
006d6b6c  JNZ 0x006d6cce
006d6b72  MOV EAX,[0x00982c08]
006d6b77  MOV ECX,dword ptr [0x00982cf8]
006d6b7d  TEST EAX,EAX
006d6b7f  MOV EAX,dword ptr [ESI + 0x48]
006d6b82  MOV EDX,dword ptr [EAX]
006d6b84  JNZ 0x006d6b8c
006d6b86  MOV ECX,dword ptr [0x00982cf0]
006d6b8c  PUSH ECX
006d6b8d  MOV ECX,dword ptr [ESI + 0x44]
006d6b90  MOV ECX,dword ptr [ECX + 0xc04]
006d6b96  PUSH ECX
006d6b97  PUSH EAX
006d6b98  CALL dword ptr [EDX + 0xd0]
006d6b9e  CALL 0x006c86b0
006d6ba3  MOV dword ptr [ESP + 0x8],EAX
006d6ba7  FILD dword ptr [ESP + 0x8]
006d6bab  MOV EAX,dword ptr [ESI + 0x48]
006d6bae  MOV EDX,dword ptr [EAX]
006d6bb0  FDIVR float ptr [0x0089096c]
006d6bb6  FSTP float ptr [ESP + 0x8]
006d6bba  MOV ECX,dword ptr [ESP + 0x8]
006d6bbe  PUSH ECX
006d6bbf  MOV ECX,dword ptr [ESI + 0x44]
006d6bc2  MOV ECX,dword ptr [ECX + 0xc2c]
006d6bc8  PUSH ECX
006d6bc9  PUSH EAX
006d6bca  CALL dword ptr [EDX + 0x78]
006d6bcd  CMP dword ptr [ESI + 0x4],0x12
006d6bd1  JNZ 0x006d6cce
006d6bd7  MOV EAX,dword ptr [ESI + 0x38]
006d6bda  TEST EAX,EAX
006d6bdc  JLE 0x006d6cce
006d6be2  CALL 0x006c86b0
006d6be7  MOV dword ptr [ESP + 0x8],EAX
006d6beb  FILD dword ptr [ESP + 0x8]
006d6bef  FDIVR float ptr [0x008933d4]
006d6bf5  FADD float ptr [0x008933d4]
006d6bfb  FSTP float ptr [ESP + 0xc]
006d6bff  CALL 0x006c86c0
006d6c04  MOV dword ptr [ESP + 0x8],EAX
006d6c08  FILD dword ptr [ESP + 0x8]
006d6c0c  MOV ECX,dword ptr [0x00919c70]
006d6c12  MOV EDX,dword ptr [ESP + 0xc]
006d6c16  LEA EAX,[ESP + 0x20]
006d6c1a  FDIVR float ptr [0x008933d4]
006d6c20  PUSH EAX
006d6c21  ADD ECX,0x40
006d6c24  MOV dword ptr [ESP + 0x54],EDX
006d6c28  PUSH ECX
006d6c29  LEA EDX,[ESP + 0x68]
006d6c2d  PUSH EDX
006d6c2e  MOV dword ptr [ESP + 0x2c],0x3f000000
006d6c36  MOV dword ptr [ESP + 0x30],0x0
006d6c3e  MOV dword ptr [ESP + 0x34],0x0
006d6c46  MOV dword ptr [ESP + 0x38],0x0
006d6c4e  MOV dword ptr [ESP + 0x3c],0x0
006d6c56  MOV dword ptr [ESP + 0x40],0xbf000000
006d6c5e  MOV dword ptr [ESP + 0x44],0x0
006d6c66  MOV dword ptr [ESP + 0x48],0x0
006d6c6e  MOV dword ptr [ESP + 0x4c],0x0
006d6c76  MOV dword ptr [ESP + 0x50],0x0
006d6c7e  MOV dword ptr [ESP + 0x54],0x3f800000
006d6c86  MOV dword ptr [ESP + 0x58],0x0
006d6c8e  MOV dword ptr [ESP + 0x64],0x0
006d6c96  MOV dword ptr [ESP + 0x68],0x3f800000
006d6c9e  FADD float ptr [0x008933d4]
006d6ca4  FSTP float ptr [ESP + 0x60]
006d6ca8  CALL 0x007e7d5e
006d6cad  MOV ECX,dword ptr [0x00982c80]
006d6cb3  MOV EAX,dword ptr [ECX + 0x48]
006d6cb6  MOV ECX,dword ptr [ECX + 0x44]
006d6cb9  MOV ECX,dword ptr [ECX + 0xc54]
006d6cbf  MOV EDX,dword ptr [EAX]
006d6cc1  LEA ESI,[ESP + 0x60]
006d6cc5  PUSH ESI
006d6cc6  PUSH ECX
006d6cc7  PUSH EAX
006d6cc8  CALL dword ptr [EDX + 0x98]
006d6cce  POP EDI
006d6ccf  POP ESI
006d6cd0  MOV ESP,EBP
006d6cd2  POP EBP
006d6cd3  RET
