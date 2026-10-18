005f79d0  MOV EAX,FS:[0x0]
005f79d6  PUSH -0x1
005f79d8  PUSH 0x875d08
005f79dd  PUSH EAX
005f79de  MOV dword ptr FS:[0x0],ESP
005f79e5  SUB ESP,0x44
005f79e8  PUSH ESI
005f79e9  PUSH EDI
005f79ea  MOV EDI,ECX
005f79ec  CMP dword ptr [EDI + 0x8],0xccccccb
005f79f3  JC 0x005f7a41
005f79f5  PUSH 0x13
005f79f7  XOR ESI,ESI
005f79f9  PUSH 0x892b50
005f79fe  LEA ECX,[ESP + 0x10]
005f7a02  MOV dword ptr [ESP + 0x28],0xf
005f7a0a  MOV dword ptr [ESP + 0x24],ESI
005f7a0e  MOV byte ptr [ESP + 0x14],0x0
005f7a13  CALL 0x004303b0
005f7a18  LEA EAX,[ESP + 0x8]
005f7a1c  PUSH EAX
005f7a1d  LEA ECX,[ESP + 0x28]
005f7a21  MOV dword ptr [ESP + 0x58],ESI
005f7a25  CALL 0x00432d50
005f7a2a  PUSH 0x8c9ca8
005f7a2f  LEA ECX,[ESP + 0x28]
005f7a33  PUSH ECX
005f7a34  MOV dword ptr [ESP + 0x2c],0x8bf290
005f7a3c  CALL 0x007c56b0
005f7a41  MOV EDX,dword ptr [ESP + 0x68]
005f7a45  MOV EAX,dword ptr [EDI + 0x4]
005f7a48  MOV ESI,dword ptr [ESP + 0x64]
005f7a4c  PUSH EBX
005f7a4d  PUSH 0x0
005f7a4f  PUSH EDX
005f7a50  PUSH EAX
005f7a51  PUSH ESI
005f7a52  PUSH EAX
005f7a53  MOV ECX,EDI
005f7a55  CALL 0x005f68c0
005f7a5a  MOV EBX,dword ptr [EDI + 0x8]
005f7a5d  MOV ECX,EAX
005f7a5f  MOV EAX,dword ptr [EDI + 0x4]
005f7a62  INC EBX
005f7a63  CMP ESI,EAX
005f7a65  MOV dword ptr [ESP + 0x6c],ECX
005f7a69  MOV dword ptr [EDI + 0x8],EBX
005f7a6c  JNZ 0x005f7a7e
005f7a6e  MOV dword ptr [EAX + 0x4],ECX
005f7a71  MOV EAX,dword ptr [EDI + 0x4]
005f7a74  MOV dword ptr [EAX],ECX
005f7a76  MOV EDX,dword ptr [EDI + 0x4]
005f7a79  MOV dword ptr [EDX + 0x8],ECX
005f7a7c  JMP 0x005f7aa1
005f7a7e  MOV AL,byte ptr [ESP + 0x64]
005f7a82  TEST AL,AL
005f7a84  JZ 0x005f7a93
005f7a86  MOV dword ptr [ESI],ECX
005f7a88  MOV EAX,dword ptr [EDI + 0x4]
005f7a8b  CMP ESI,dword ptr [EAX]
005f7a8d  JNZ 0x005f7aa1
005f7a8f  MOV dword ptr [EAX],ECX
005f7a91  JMP 0x005f7aa1
005f7a93  MOV dword ptr [ESI + 0x8],ECX
005f7a96  MOV EAX,dword ptr [EDI + 0x4]
005f7a99  CMP ESI,dword ptr [EAX + 0x8]
005f7a9c  JNZ 0x005f7aa1
005f7a9e  MOV dword ptr [EAX + 0x8],ECX
005f7aa1  MOV EDX,dword ptr [ECX + 0x4]
005f7aa4  CMP byte ptr [EDX + 0x20],0x0
005f7aa8  LEA EAX,[ECX + 0x4]
005f7aab  MOV ESI,ECX
005f7aad  MOV BL,0x1
005f7aaf  JNZ 0x005f7b5a
005f7ab5  PUSH EBP
005f7ab6  MOV ECX,dword ptr [EAX]
005f7ab8  MOV EBP,dword ptr [ECX + 0x4]
005f7abb  MOV EDX,dword ptr [EBP]
005f7abe  CMP ECX,EDX
005f7ac0  JNZ 0x005f7b12
005f7ac2  MOV EDX,dword ptr [EBP + 0x8]
005f7ac5  CMP byte ptr [EDX + 0x20],0x0
005f7ac9  JNZ 0x005f7ae3
005f7acb  MOV ECX,dword ptr [EAX]
005f7acd  MOV byte ptr [ECX + 0x20],BL
005f7ad0  MOV byte ptr [EDX + 0x20],BL
005f7ad3  MOV EDX,dword ptr [EAX]
005f7ad5  MOV ECX,dword ptr [EDX + 0x4]
005f7ad8  MOV byte ptr [ECX + 0x20],0x0
005f7adc  MOV EDX,dword ptr [EAX]
005f7ade  MOV ESI,dword ptr [EDX + 0x4]
005f7ae1  JMP 0x005f7b44
005f7ae3  CMP ESI,dword ptr [ECX + 0x8]
005f7ae6  JNZ 0x005f7af2
005f7ae8  MOV ESI,ECX
005f7aea  PUSH ESI
005f7aeb  MOV ECX,EDI
005f7aed  CALL 0x005e6d00
005f7af2  MOV EAX,dword ptr [ESI + 0x4]
005f7af5  MOV byte ptr [EAX + 0x20],BL
005f7af8  MOV ECX,dword ptr [ESI + 0x4]
005f7afb  MOV EDX,dword ptr [ECX + 0x4]
005f7afe  MOV byte ptr [EDX + 0x20],0x0
005f7b02  MOV EAX,dword ptr [ESI + 0x4]
005f7b05  MOV ECX,dword ptr [EAX + 0x4]
005f7b08  PUSH ECX
005f7b09  MOV ECX,EDI
005f7b0b  CALL 0x005e6d60
005f7b10  JMP 0x005f7b44
005f7b12  CMP byte ptr [EDX + 0x20],0x0
005f7b16  JZ 0x005f7acb
005f7b18  CMP ESI,dword ptr [ECX]
005f7b1a  JNZ 0x005f7b26
005f7b1c  MOV ESI,ECX
005f7b1e  PUSH ESI
005f7b1f  MOV ECX,EDI
005f7b21  CALL 0x005e6d60
005f7b26  MOV EAX,dword ptr [ESI + 0x4]
005f7b29  MOV byte ptr [EAX + 0x20],BL
005f7b2c  MOV ECX,dword ptr [ESI + 0x4]
005f7b2f  MOV EDX,dword ptr [ECX + 0x4]
005f7b32  MOV byte ptr [EDX + 0x20],0x0
005f7b36  MOV EAX,dword ptr [ESI + 0x4]
005f7b39  MOV ECX,dword ptr [EAX + 0x4]
005f7b3c  PUSH ECX
005f7b3d  MOV ECX,EDI
005f7b3f  CALL 0x005e6d00
005f7b44  MOV EDX,dword ptr [ESI + 0x4]
005f7b47  MOV CL,byte ptr [EDX + 0x20]
005f7b4a  TEST CL,CL
005f7b4c  LEA EAX,[ESI + 0x4]
005f7b4f  JZ 0x005f7ab6
005f7b55  MOV ECX,dword ptr [ESP + 0x70]
005f7b59  POP EBP
005f7b5a  MOV EAX,dword ptr [EDI + 0x4]
005f7b5d  MOV EDX,dword ptr [EAX + 0x4]
005f7b60  MOV EAX,dword ptr [ESP + 0x60]
005f7b64  MOV byte ptr [EDX + 0x20],BL
005f7b67  POP EBX
005f7b68  MOV dword ptr [EAX],ECX
005f7b6a  MOV ECX,dword ptr [ESP + 0x4c]
005f7b6e  POP EDI
005f7b6f  POP ESI
005f7b70  MOV dword ptr FS:[0x0],ECX
005f7b77  ADD ESP,0x50
005f7b7a  RET 0x10
