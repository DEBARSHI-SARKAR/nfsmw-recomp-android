005f1b10  MOV EAX,FS:[0x0]
005f1b16  PUSH -0x1
005f1b18  PUSH 0x8758e8
005f1b1d  PUSH EAX
005f1b1e  MOV EAX,dword ptr [ESP + 0x14]
005f1b22  MOV dword ptr FS:[0x0],ESP
005f1b29  SUB ESP,0x48
005f1b2c  PUSH EBP
005f1b2d  MOV EBP,ECX
005f1b2f  MOV CL,byte ptr [EAX + 0x15]
005f1b32  TEST CL,CL
005f1b34  PUSH ESI
005f1b35  JZ 0x005f1b83
005f1b37  PUSH 0x1b
005f1b39  XOR ESI,ESI
005f1b3b  PUSH 0x892920
005f1b40  LEA ECX,[ESP + 0x14]
005f1b44  MOV dword ptr [ESP + 0x2c],0xf
005f1b4c  MOV dword ptr [ESP + 0x28],ESI
005f1b50  MOV byte ptr [ESP + 0x18],0x0
005f1b55  CALL 0x004303b0
005f1b5a  LEA EAX,[ESP + 0xc]
005f1b5e  PUSH EAX
005f1b5f  LEA ECX,[ESP + 0x2c]
005f1b63  MOV dword ptr [ESP + 0x5c],ESI
005f1b67  CALL 0x00432d50
005f1b6c  PUSH 0x8c9f78
005f1b71  LEA ECX,[ESP + 0x2c]
005f1b75  PUSH ECX
005f1b76  MOV dword ptr [ESP + 0x30],0x8bf2c0
005f1b7e  CALL 0x007c56b0
005f1b83  PUSH EBX
005f1b84  MOV EBX,EAX
005f1b86  PUSH EDI
005f1b87  LEA ECX,[ESP + 0x6c]
005f1b8b  MOV dword ptr [ESP + 0x10],EBX
005f1b8f  CALL 0x005dfad0
005f1b94  MOV EAX,dword ptr [EBX]
005f1b96  MOV CL,byte ptr [EAX + 0x15]
005f1b99  TEST CL,CL
005f1b9b  JZ 0x005f1ba2
005f1b9d  MOV EDI,dword ptr [EBX + 0x8]
005f1ba0  JMP 0x005f1bbb
005f1ba2  MOV EDX,dword ptr [EBX + 0x8]
005f1ba5  MOV CL,byte ptr [EDX + 0x15]
005f1ba8  TEST CL,CL
005f1baa  JZ 0x005f1bb0
005f1bac  MOV EDI,EAX
005f1bae  JMP 0x005f1bbb
005f1bb0  MOV ECX,dword ptr [ESP + 0x6c]
005f1bb4  CMP ECX,EBX
005f1bb6  MOV EDI,dword ptr [ECX + 0x8]
005f1bb9  JNZ 0x005f1c29
005f1bbb  MOV AL,byte ptr [EDI + 0x15]
005f1bbe  TEST AL,AL
005f1bc0  MOV ESI,dword ptr [EBX + 0x4]
005f1bc3  JNZ 0x005f1bc8
005f1bc5  MOV dword ptr [EDI + 0x4],ESI
005f1bc8  MOV EAX,dword ptr [EBP + 0x4]
005f1bcb  CMP dword ptr [EAX + 0x4],EBX
005f1bce  JNZ 0x005f1bd5
005f1bd0  MOV dword ptr [EAX + 0x4],EDI
005f1bd3  JMP 0x005f1be0
005f1bd5  CMP dword ptr [ESI],EBX
005f1bd7  JNZ 0x005f1bdd
005f1bd9  MOV dword ptr [ESI],EDI
005f1bdb  JMP 0x005f1be0
005f1bdd  MOV dword ptr [ESI + 0x8],EDI
005f1be0  MOV EBX,dword ptr [EBP + 0x4]
005f1be3  MOV EAX,dword ptr [EBX]
005f1be5  CMP EAX,dword ptr [ESP + 0x10]
005f1be9  JNZ 0x005f1c01
005f1beb  MOV AL,byte ptr [EDI + 0x15]
005f1bee  TEST AL,AL
005f1bf0  JZ 0x005f1bf6
005f1bf2  MOV EAX,ESI
005f1bf4  JMP 0x005f1bff
005f1bf6  PUSH EDI
005f1bf7  CALL 0x005deb70
005f1bfc  ADD ESP,0x4
005f1bff  MOV dword ptr [EBX],EAX
005f1c01  MOV EBX,dword ptr [EBP + 0x4]
005f1c04  MOV ECX,dword ptr [ESP + 0x10]
005f1c08  CMP dword ptr [EBX + 0x8],ECX
005f1c0b  JNZ 0x005f1c81
005f1c0d  MOV AL,byte ptr [EDI + 0x15]
005f1c10  TEST AL,AL
005f1c12  JZ 0x005f1c1b
005f1c14  MOV EAX,ESI
005f1c16  MOV dword ptr [EBX + 0x8],EAX
005f1c19  JMP 0x005f1c81
005f1c1b  PUSH EDI
005f1c1c  CALL 0x005deb50
005f1c21  ADD ESP,0x4
005f1c24  MOV dword ptr [EBX + 0x8],EAX
005f1c27  JMP 0x005f1c81
005f1c29  MOV dword ptr [EAX + 0x4],ECX
005f1c2c  MOV EDX,dword ptr [EBX]
005f1c2e  MOV dword ptr [ECX],EDX
005f1c30  CMP ECX,dword ptr [EBX + 0x8]
005f1c33  JNZ 0x005f1c39
005f1c35  MOV ESI,ECX
005f1c37  JMP 0x005f1c54
005f1c39  MOV AL,byte ptr [EDI + 0x15]
005f1c3c  TEST AL,AL
005f1c3e  MOV ESI,dword ptr [ECX + 0x4]
005f1c41  JNZ 0x005f1c46
005f1c43  MOV dword ptr [EDI + 0x4],ESI
005f1c46  MOV dword ptr [ESI],EDI
005f1c48  MOV EAX,dword ptr [EBX + 0x8]
005f1c4b  MOV dword ptr [ECX + 0x8],EAX
005f1c4e  MOV EDX,dword ptr [EBX + 0x8]
005f1c51  MOV dword ptr [EDX + 0x4],ECX
005f1c54  MOV EAX,dword ptr [EBP + 0x4]
005f1c57  CMP dword ptr [EAX + 0x4],EBX
005f1c5a  JNZ 0x005f1c61
005f1c5c  MOV dword ptr [EAX + 0x4],ECX
005f1c5f  JMP 0x005f1c6f
005f1c61  MOV EAX,dword ptr [EBX + 0x4]
005f1c64  CMP dword ptr [EAX],EBX
005f1c66  JNZ 0x005f1c6c
005f1c68  MOV dword ptr [EAX],ECX
005f1c6a  JMP 0x005f1c6f
005f1c6c  MOV dword ptr [EAX + 0x8],ECX
005f1c6f  MOV EAX,dword ptr [EBX + 0x4]
005f1c72  MOV dword ptr [ECX + 0x4],EAX
005f1c75  MOV DL,byte ptr [EBX + 0x14]
005f1c78  MOV AL,byte ptr [ECX + 0x14]
005f1c7b  MOV byte ptr [ECX + 0x14],DL
005f1c7e  MOV byte ptr [EBX + 0x14],AL
005f1c81  MOV EAX,dword ptr [ESP + 0x10]
005f1c85  MOV CL,byte ptr [EAX + 0x14]
005f1c88  MOV BL,0x1
005f1c8a  CMP CL,BL
005f1c8c  JNZ 0x005f1d91
005f1c92  MOV ECX,dword ptr [EBP + 0x4]
005f1c95  CMP EDI,dword ptr [ECX + 0x4]
005f1c98  JZ 0x005f1d8e
005f1c9e  MOV EDI,EDI
005f1ca0  CMP byte ptr [EDI + 0x14],BL
005f1ca3  JNZ 0x005f1d8e
005f1ca9  MOV EAX,dword ptr [ESI]
005f1cab  CMP EDI,EAX
005f1cad  JNZ 0x005f1d16
005f1caf  MOV EAX,dword ptr [ESI + 0x8]
005f1cb2  MOV CL,byte ptr [EAX + 0x14]
005f1cb5  TEST CL,CL
005f1cb7  JNZ 0x005f1ccb
005f1cb9  MOV byte ptr [EAX + 0x14],BL
005f1cbc  PUSH ESI
005f1cbd  MOV ECX,EBP
005f1cbf  MOV byte ptr [ESI + 0x14],0x0
005f1cc3  CALL 0x005e5f20
005f1cc8  MOV EAX,dword ptr [ESI + 0x8]
005f1ccb  MOV CL,byte ptr [EAX + 0x15]
005f1cce  TEST CL,CL
005f1cd0  JNZ 0x005f1d48
005f1cd2  MOV EDX,dword ptr [EAX]
005f1cd4  CMP byte ptr [EDX + 0x14],BL
005f1cd7  JNZ 0x005f1ce1
005f1cd9  MOV ECX,dword ptr [EAX + 0x8]
005f1cdc  CMP byte ptr [ECX + 0x14],BL
005f1cdf  JZ 0x005f1d44
005f1ce1  MOV ECX,dword ptr [EAX + 0x8]
005f1ce4  CMP byte ptr [ECX + 0x14],BL
005f1ce7  JNZ 0x005f1cfd
005f1ce9  MOV EDX,dword ptr [EAX]
005f1ceb  MOV byte ptr [EDX + 0x14],BL
005f1cee  PUSH EAX
005f1cef  MOV ECX,EBP
005f1cf1  MOV byte ptr [EAX + 0x14],0x0
005f1cf5  CALL 0x005debb0
005f1cfa  MOV EAX,dword ptr [ESI + 0x8]
005f1cfd  MOV CL,byte ptr [ESI + 0x14]
005f1d00  MOV byte ptr [EAX + 0x14],CL
005f1d03  MOV byte ptr [ESI + 0x14],BL
005f1d06  MOV EDX,dword ptr [EAX + 0x8]
005f1d09  PUSH ESI
005f1d0a  MOV ECX,EBP
005f1d0c  MOV byte ptr [EDX + 0x14],BL
005f1d0f  CALL 0x005e5f20
005f1d14  JMP 0x005f1d8e
005f1d16  MOV CL,byte ptr [EAX + 0x14]
005f1d19  TEST CL,CL
005f1d1b  JNZ 0x005f1d2e
005f1d1d  MOV byte ptr [EAX + 0x14],BL
005f1d20  PUSH ESI
005f1d21  MOV ECX,EBP
005f1d23  MOV byte ptr [ESI + 0x14],0x0
005f1d27  CALL 0x005debb0
005f1d2c  MOV EAX,dword ptr [ESI]
005f1d2e  MOV CL,byte ptr [EAX + 0x15]
005f1d31  TEST CL,CL
005f1d33  JNZ 0x005f1d48
005f1d35  MOV EDX,dword ptr [EAX + 0x8]
005f1d38  CMP byte ptr [EDX + 0x14],BL
005f1d3b  JNZ 0x005f1d5d
005f1d3d  MOV ECX,dword ptr [EAX]
005f1d3f  CMP byte ptr [ECX + 0x14],BL
005f1d42  JNZ 0x005f1d5d
005f1d44  MOV byte ptr [EAX + 0x14],0x0
005f1d48  MOV EDX,dword ptr [EBP + 0x4]
005f1d4b  MOV EAX,dword ptr [EDX + 0x4]
005f1d4e  MOV EDI,ESI
005f1d50  CMP EDI,EAX
005f1d52  MOV ESI,dword ptr [ESI + 0x4]
005f1d55  JNZ 0x005f1ca0
005f1d5b  JMP 0x005f1d8e
005f1d5d  MOV ECX,dword ptr [EAX]
005f1d5f  CMP byte ptr [ECX + 0x14],BL
005f1d62  JNZ 0x005f1d78
005f1d64  MOV EDX,dword ptr [EAX + 0x8]
005f1d67  MOV byte ptr [EDX + 0x14],BL
005f1d6a  PUSH EAX
005f1d6b  MOV ECX,EBP
005f1d6d  MOV byte ptr [EAX + 0x14],0x0
005f1d71  CALL 0x005e5f20
005f1d76  MOV EAX,dword ptr [ESI]
005f1d78  MOV CL,byte ptr [ESI + 0x14]
005f1d7b  MOV byte ptr [EAX + 0x14],CL
005f1d7e  MOV byte ptr [ESI + 0x14],BL
005f1d81  MOV EDX,dword ptr [EAX]
005f1d83  PUSH ESI
005f1d84  MOV ECX,EBP
005f1d86  MOV byte ptr [EDX + 0x14],BL
005f1d89  CALL 0x005debb0
005f1d8e  MOV byte ptr [EDI + 0x14],BL
005f1d91  MOV EAX,dword ptr [ESP + 0x10]
005f1d95  PUSH 0x0
005f1d97  PUSH 0x18
005f1d99  PUSH EAX
005f1d9a  MOV ECX,0x925b30
005f1d9f  CALL 0x005d0370
005f1da4  MOV EAX,dword ptr [EBP + 0x8]
005f1da7  TEST EAX,EAX
005f1da9  POP EDI
005f1daa  POP EBX
005f1dab  JBE 0x005f1db1
005f1dad  DEC EAX
005f1dae  MOV dword ptr [EBP + 0x8],EAX
005f1db1  MOV ECX,dword ptr [ESP + 0x64]
005f1db5  MOV EAX,dword ptr [ESP + 0x60]
005f1db9  MOV dword ptr [EAX],ECX
005f1dbb  MOV ECX,dword ptr [ESP + 0x50]
005f1dbf  POP ESI
005f1dc0  POP EBP
005f1dc1  MOV dword ptr FS:[0x0],ECX
005f1dc8  ADD ESP,0x54
005f1dcb  RET 0x8
