005f0980  PUSH -0x1
005f0982  PUSH 0x875848
005f0987  MOV EAX,FS:[0x0]
005f098d  PUSH EAX
005f098e  MOV dword ptr FS:[0x0],ESP
005f0995  SUB ESP,0x48
005f0998  PUSH EBX
005f0999  PUSH EBP
005f099a  MOV EBP,dword ptr [ESP + 0x64]
005f099e  MOV AL,byte ptr [EBP + 0x21]
005f09a1  TEST AL,AL
005f09a3  MOV EBX,ECX
005f09a5  PUSH ESI
005f09a6  MOV dword ptr [ESP + 0xc],EBX
005f09aa  JZ 0x005f09f8
005f09ac  PUSH 0x1b
005f09ae  XOR ESI,ESI
005f09b0  PUSH 0x892920
005f09b5  LEA ECX,[ESP + 0x18]
005f09b9  MOV dword ptr [ESP + 0x30],0xf
005f09c1  MOV dword ptr [ESP + 0x2c],ESI
005f09c5  MOV byte ptr [ESP + 0x1c],0x0
005f09ca  CALL 0x004303b0
005f09cf  LEA EAX,[ESP + 0x10]
005f09d3  PUSH EAX
005f09d4  LEA ECX,[ESP + 0x30]
005f09d8  MOV dword ptr [ESP + 0x60],ESI
005f09dc  CALL 0x00432d50
005f09e1  PUSH 0x8c9f78
005f09e6  LEA ECX,[ESP + 0x30]
005f09ea  PUSH ECX
005f09eb  MOV dword ptr [ESP + 0x34],0x8bf2c0
005f09f3  CALL 0x007c56b0
005f09f8  PUSH EDI
005f09f9  LEA ECX,[ESP + 0x6c]
005f09fd  CALL 0x005e66b0
005f0a02  MOV EAX,dword ptr [EBP]
005f0a05  MOV CL,byte ptr [EAX + 0x21]
005f0a08  TEST CL,CL
005f0a0a  JZ 0x005f0a11
005f0a0c  MOV EDI,dword ptr [EBP + 0x8]
005f0a0f  JMP 0x005f0a2a
005f0a11  MOV EDX,dword ptr [EBP + 0x8]
005f0a14  MOV CL,byte ptr [EDX + 0x21]
005f0a17  TEST CL,CL
005f0a19  JZ 0x005f0a1f
005f0a1b  MOV EDI,EAX
005f0a1d  JMP 0x005f0a2a
005f0a1f  MOV ECX,dword ptr [ESP + 0x6c]
005f0a23  CMP ECX,EBP
005f0a25  MOV EDI,dword ptr [ECX + 0x8]
005f0a28  JNZ 0x005f0a94
005f0a2a  MOV AL,byte ptr [EDI + 0x21]
005f0a2d  TEST AL,AL
005f0a2f  MOV ESI,dword ptr [EBP + 0x4]
005f0a32  JNZ 0x005f0a37
005f0a34  MOV dword ptr [EDI + 0x4],ESI
005f0a37  MOV EAX,dword ptr [EBX + 0x4]
005f0a3a  CMP dword ptr [EAX + 0x4],EBP
005f0a3d  JNZ 0x005f0a44
005f0a3f  MOV dword ptr [EAX + 0x4],EDI
005f0a42  JMP 0x005f0a4f
005f0a44  CMP dword ptr [ESI],EBP
005f0a46  JNZ 0x005f0a4c
005f0a48  MOV dword ptr [ESI],EDI
005f0a4a  JMP 0x005f0a4f
005f0a4c  MOV dword ptr [ESI + 0x8],EDI
005f0a4f  MOV EBX,dword ptr [EBX + 0x4]
005f0a52  CMP dword ptr [EBX],EBP
005f0a54  JNZ 0x005f0a6c
005f0a56  MOV AL,byte ptr [EDI + 0x21]
005f0a59  TEST AL,AL
005f0a5b  JZ 0x005f0a61
005f0a5d  MOV EAX,ESI
005f0a5f  JMP 0x005f0a6a
005f0a61  PUSH EDI
005f0a62  CALL 0x005dfd40
005f0a67  ADD ESP,0x4
005f0a6a  MOV dword ptr [EBX],EAX
005f0a6c  MOV EAX,dword ptr [ESP + 0x10]
005f0a70  MOV EBX,dword ptr [EAX + 0x4]
005f0a73  CMP dword ptr [EBX + 0x8],EBP
005f0a76  JNZ 0x005f0aed
005f0a78  MOV AL,byte ptr [EDI + 0x21]
005f0a7b  TEST AL,AL
005f0a7d  JZ 0x005f0a86
005f0a7f  MOV EAX,ESI
005f0a81  MOV dword ptr [EBX + 0x8],EAX
005f0a84  JMP 0x005f0aed
005f0a86  PUSH EDI
005f0a87  CALL 0x005e00e0
005f0a8c  ADD ESP,0x4
005f0a8f  MOV dword ptr [EBX + 0x8],EAX
005f0a92  JMP 0x005f0aed
005f0a94  MOV dword ptr [EAX + 0x4],ECX
005f0a97  MOV EDX,dword ptr [EBP]
005f0a9a  MOV dword ptr [ECX],EDX
005f0a9c  CMP ECX,dword ptr [EBP + 0x8]
005f0a9f  JNZ 0x005f0aa5
005f0aa1  MOV ESI,ECX
005f0aa3  JMP 0x005f0ac0
005f0aa5  MOV AL,byte ptr [EDI + 0x21]
005f0aa8  TEST AL,AL
005f0aaa  MOV ESI,dword ptr [ECX + 0x4]
005f0aad  JNZ 0x005f0ab2
005f0aaf  MOV dword ptr [EDI + 0x4],ESI
005f0ab2  MOV dword ptr [ESI],EDI
005f0ab4  MOV EAX,dword ptr [EBP + 0x8]
005f0ab7  MOV dword ptr [ECX + 0x8],EAX
005f0aba  MOV EDX,dword ptr [EBP + 0x8]
005f0abd  MOV dword ptr [EDX + 0x4],ECX
005f0ac0  MOV EAX,dword ptr [EBX + 0x4]
005f0ac3  CMP dword ptr [EAX + 0x4],EBP
005f0ac6  JNZ 0x005f0acd
005f0ac8  MOV dword ptr [EAX + 0x4],ECX
005f0acb  JMP 0x005f0adb
005f0acd  MOV EAX,dword ptr [EBP + 0x4]
005f0ad0  CMP dword ptr [EAX],EBP
005f0ad2  JNZ 0x005f0ad8
005f0ad4  MOV dword ptr [EAX],ECX
005f0ad6  JMP 0x005f0adb
005f0ad8  MOV dword ptr [EAX + 0x8],ECX
005f0adb  MOV EAX,dword ptr [EBP + 0x4]
005f0ade  MOV dword ptr [ECX + 0x4],EAX
005f0ae1  MOV DL,byte ptr [EBP + 0x20]
005f0ae4  MOV AL,byte ptr [ECX + 0x20]
005f0ae7  MOV byte ptr [ECX + 0x20],DL
005f0aea  MOV byte ptr [EBP + 0x20],AL
005f0aed  MOV AL,byte ptr [EBP + 0x20]
005f0af0  MOV BL,0x1
005f0af2  CMP AL,BL
005f0af4  JNZ 0x005f0c05
005f0afa  MOV ECX,dword ptr [ESP + 0x10]
005f0afe  MOV EAX,dword ptr [ECX + 0x4]
005f0b01  CMP EDI,dword ptr [EAX + 0x4]
005f0b04  JZ 0x005f0c02
005f0b0a  LEA EBX,[EBX]
005f0b10  CMP byte ptr [EDI + 0x20],BL
005f0b13  JNZ 0x005f0c02
005f0b19  MOV EAX,dword ptr [ESI]
005f0b1b  CMP EDI,EAX
005f0b1d  JNZ 0x005f0b88
005f0b1f  MOV EAX,dword ptr [ESI + 0x8]
005f0b22  MOV DL,byte ptr [EAX + 0x20]
005f0b25  TEST DL,DL
005f0b27  JNZ 0x005f0b3d
005f0b29  MOV byte ptr [EAX + 0x20],BL
005f0b2c  PUSH ESI
005f0b2d  MOV byte ptr [ESI + 0x20],0x0
005f0b31  CALL 0x005e6d00
005f0b36  MOV EAX,dword ptr [ESI + 0x8]
005f0b39  MOV ECX,dword ptr [ESP + 0x10]
005f0b3d  MOV DL,byte ptr [EAX + 0x21]
005f0b40  TEST DL,DL
005f0b42  JNZ 0x005f0bbc
005f0b44  MOV EDX,dword ptr [EAX]
005f0b46  CMP byte ptr [EDX + 0x20],BL
005f0b49  JNZ 0x005f0b53
005f0b4b  MOV EDX,dword ptr [EAX + 0x8]
005f0b4e  CMP byte ptr [EDX + 0x20],BL
005f0b51  JZ 0x005f0bb8
005f0b53  MOV EDX,dword ptr [EAX + 0x8]
005f0b56  CMP byte ptr [EDX + 0x20],BL
005f0b59  JNZ 0x005f0b71
005f0b5b  MOV EDX,dword ptr [EAX]
005f0b5d  MOV byte ptr [EDX + 0x20],BL
005f0b60  PUSH EAX
005f0b61  MOV byte ptr [EAX + 0x20],0x0
005f0b65  CALL 0x005e6d60
005f0b6a  MOV EAX,dword ptr [ESI + 0x8]
005f0b6d  MOV ECX,dword ptr [ESP + 0x10]
005f0b71  MOV DL,byte ptr [ESI + 0x20]
005f0b74  MOV byte ptr [EAX + 0x20],DL
005f0b77  MOV byte ptr [ESI + 0x20],BL
005f0b7a  MOV EAX,dword ptr [EAX + 0x8]
005f0b7d  PUSH ESI
005f0b7e  MOV byte ptr [EAX + 0x20],BL
005f0b81  CALL 0x005e6d00
005f0b86  JMP 0x005f0c02
005f0b88  MOV DL,byte ptr [EAX + 0x20]
005f0b8b  TEST DL,DL
005f0b8d  JNZ 0x005f0ba2
005f0b8f  MOV byte ptr [EAX + 0x20],BL
005f0b92  PUSH ESI
005f0b93  MOV byte ptr [ESI + 0x20],0x0
005f0b97  CALL 0x005e6d60
005f0b9c  MOV EAX,dword ptr [ESI]
005f0b9e  MOV ECX,dword ptr [ESP + 0x10]
005f0ba2  MOV DL,byte ptr [EAX + 0x21]
005f0ba5  TEST DL,DL
005f0ba7  JNZ 0x005f0bbc
005f0ba9  MOV EDX,dword ptr [EAX + 0x8]
005f0bac  CMP byte ptr [EDX + 0x20],BL
005f0baf  JNZ 0x005f0bd1
005f0bb1  MOV EDX,dword ptr [EAX]
005f0bb3  CMP byte ptr [EDX + 0x20],BL
005f0bb6  JNZ 0x005f0bd1
005f0bb8  MOV byte ptr [EAX + 0x20],0x0
005f0bbc  MOV EAX,dword ptr [ECX + 0x4]
005f0bbf  MOV EDX,dword ptr [EAX + 0x4]
005f0bc2  MOV EDI,ESI
005f0bc4  CMP EDI,EDX
005f0bc6  MOV ESI,dword ptr [ESI + 0x4]
005f0bc9  JNZ 0x005f0b10
005f0bcf  JMP 0x005f0c02
005f0bd1  MOV EDX,dword ptr [EAX]
005f0bd3  CMP byte ptr [EDX + 0x20],BL
005f0bd6  JNZ 0x005f0bee
005f0bd8  MOV EDX,dword ptr [EAX + 0x8]
005f0bdb  MOV byte ptr [EDX + 0x20],BL
005f0bde  PUSH EAX
005f0bdf  MOV byte ptr [EAX + 0x20],0x0
005f0be3  CALL 0x005e6d00
005f0be8  MOV EAX,dword ptr [ESI]
005f0bea  MOV ECX,dword ptr [ESP + 0x10]
005f0bee  MOV DL,byte ptr [ESI + 0x20]
005f0bf1  MOV byte ptr [EAX + 0x20],DL
005f0bf4  MOV byte ptr [ESI + 0x20],BL
005f0bf7  MOV EAX,dword ptr [EAX]
005f0bf9  PUSH ESI
005f0bfa  MOV byte ptr [EAX + 0x20],BL
005f0bfd  CALL 0x005e6d60
005f0c02  MOV byte ptr [EDI + 0x20],BL
005f0c05  MOV EAX,dword ptr [EBP + 0x14]
005f0c08  XOR ESI,ESI
005f0c0a  CMP EAX,ESI
005f0c0c  POP EDI
005f0c0d  JZ 0x005f0c27
005f0c0f  MOV ECX,dword ptr [EBP + 0x1c]
005f0c12  SUB ECX,EAX
005f0c14  SAR ECX,0x2
005f0c17  PUSH ESI
005f0c18  SHL ECX,0x2
005f0c1b  PUSH ECX
005f0c1c  PUSH EAX
005f0c1d  MOV ECX,0x925b30
005f0c22  CALL 0x005d0370
005f0c27  PUSH ESI
005f0c28  PUSH 0x24
005f0c2a  PUSH EBP
005f0c2b  MOV ECX,0x925b30
005f0c30  MOV dword ptr [EBP + 0x14],ESI
005f0c33  MOV dword ptr [EBP + 0x18],ESI
005f0c36  MOV dword ptr [EBP + 0x1c],ESI
005f0c39  CALL 0x005d0370
005f0c3e  MOV ECX,dword ptr [ESP + 0xc]
005f0c42  MOV EAX,dword ptr [ECX + 0x8]
005f0c45  CMP EAX,ESI
005f0c47  JBE 0x005f0c4d
005f0c49  DEC EAX
005f0c4a  MOV dword ptr [ECX + 0x8],EAX
005f0c4d  MOV EAX,dword ptr [ESP + 0x64]
005f0c51  MOV EDX,dword ptr [ESP + 0x68]
005f0c55  MOV ECX,dword ptr [ESP + 0x54]
005f0c59  POP ESI
005f0c5a  POP EBP
005f0c5b  MOV dword ptr [EAX],EDX
005f0c5d  POP EBX
005f0c5e  MOV dword ptr FS:[0x0],ECX
005f0c65  ADD ESP,0x54
005f0c68  RET 0x8
