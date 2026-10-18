004c9a30  SUB ESP,0x20
004c9a33  PUSH EBX
004c9a34  MOV EBX,dword ptr [ESP + 0x2c]
004c9a38  PUSH EBP
004c9a39  MOV EBP,dword ptr [ESP + 0x34]
004c9a3d  MOV EAX,EBP
004c9a3f  SUB EAX,EBX
004c9a41  SAR EAX,0x3
004c9a44  CDQ
004c9a45  PUSH ESI
004c9a46  SUB EAX,EDX
004c9a48  PUSH EDI
004c9a49  SAR EAX,0x1
004c9a4b  LEA EDI,[EBX + EAX*0x8]
004c9a4e  LEA EAX,[EBP + -0x8]
004c9a51  PUSH EAX
004c9a52  PUSH EDI
004c9a53  PUSH EBX
004c9a54  CALL 0x004c7390
004c9a59  ADD ESP,0xc
004c9a5c  CMP EBX,EDI
004c9a5e  MOV ECX,EDI
004c9a60  LEA ESI,[EDI + 0x8]
004c9a63  JNC 0x004c9a77
004c9a65  MOV EAX,dword ptr [ECX + -0x8]
004c9a68  MOV EDX,dword ptr [ECX]
004c9a6a  CMP EDX,EAX
004c9a6c  JA 0x004c9a77
004c9a6e  JC 0x004c9a77
004c9a70  ADD ECX,-0x8
004c9a73  CMP EBX,ECX
004c9a75  JC 0x004c9a65
004c9a77  CMP ESI,EBP
004c9a79  JNC 0x004c9a8f
004c9a7b  MOV EDX,dword ptr [ECX]
004c9a7d  LEA ECX,[ECX]
004c9a80  MOV EAX,dword ptr [ESI]
004c9a82  CMP EDX,EAX
004c9a84  JA 0x004c9a8f
004c9a86  JC 0x004c9a8f
004c9a88  ADD ESI,0x8
004c9a8b  CMP ESI,EBP
004c9a8d  JC 0x004c9a80
004c9a8f  MOV EAX,ESI
004c9a91  MOV EBX,ECX
004c9a93  CMP EAX,dword ptr [ESP + 0x3c]
004c9a97  JNC 0x004c9ad6
004c9a99  LEA ESP,[ESP]
004c9aa0  MOV EDX,dword ptr [ECX]
004c9aa2  MOV EDI,dword ptr [EAX]
004c9aa4  CMP EDI,EDX
004c9aa6  JA 0x004c9acb
004c9aa8  JC 0x004c9ad6
004c9aaa  MOV EDX,ESI
004c9aac  MOV EBP,dword ptr [EDX + 0x4]
004c9aaf  MOV EDI,dword ptr [EDX]
004c9ab1  MOV dword ptr [ESP + 0x1c],EBP
004c9ab5  MOV EBP,dword ptr [EAX]
004c9ab7  MOV dword ptr [EDX],EBP
004c9ab9  MOV EBP,dword ptr [EAX + 0x4]
004c9abc  MOV dword ptr [EDX + 0x4],EBP
004c9abf  MOV EDX,dword ptr [ESP + 0x1c]
004c9ac3  ADD ESI,0x8
004c9ac6  MOV dword ptr [EAX],EDI
004c9ac8  MOV dword ptr [EAX + 0x4],EDX
004c9acb  MOV EDX,dword ptr [ESP + 0x3c]
004c9acf  ADD EAX,0x8
004c9ad2  CMP EAX,EDX
004c9ad4  JC 0x004c9aa0
004c9ad6  CMP EBX,dword ptr [ESP + 0x38]
004c9ada  JBE 0x004c9b1c
004c9adc  LEA EDX,[EBX + -0x8]
004c9adf  NOP
004c9ae0  MOV EDI,dword ptr [EDX]
004c9ae2  MOV EBP,dword ptr [ECX]
004c9ae4  CMP EBP,EDI
004c9ae6  JA 0x004c9b0a
004c9ae8  JC 0x004c9b18
004c9aea  MOV EBP,dword ptr [ECX + -0x4]
004c9aed  MOV EDI,dword ptr [ECX + -0x8]
004c9af0  SUB ECX,0x8
004c9af3  MOV dword ptr [ESP + 0x24],EBP
004c9af7  MOV EBP,dword ptr [EDX]
004c9af9  MOV dword ptr [ECX],EBP
004c9afb  MOV EBP,dword ptr [EDX + 0x4]
004c9afe  MOV dword ptr [ECX + 0x4],EBP
004c9b01  MOV dword ptr [EDX],EDI
004c9b03  MOV EDI,dword ptr [ESP + 0x24]
004c9b07  MOV dword ptr [EDX + 0x4],EDI
004c9b0a  MOV EDI,dword ptr [ESP + 0x38]
004c9b0e  SUB EBX,0x8
004c9b11  SUB EDX,0x8
004c9b14  CMP EDI,EBX
004c9b16  JC 0x004c9ae0
004c9b18  CMP EBX,dword ptr [ESP + 0x38]
004c9b1c  MOV EDX,dword ptr [ESP + 0x3c]
004c9b20  JNZ 0x004c9b78
004c9b22  CMP EAX,EDX
004c9b24  JZ 0x004c9bdd
004c9b2a  CMP ESI,EAX
004c9b2c  JZ 0x004c9b42
004c9b2e  MOV EBP,dword ptr [ESI]
004c9b30  MOV EDX,dword ptr [ECX]
004c9b32  MOV EDI,dword ptr [ECX + 0x4]
004c9b35  MOV dword ptr [ECX],EBP
004c9b37  MOV EBP,dword ptr [ESI + 0x4]
004c9b3a  MOV dword ptr [ECX + 0x4],EBP
004c9b3d  MOV dword ptr [ESI],EDX
004c9b3f  MOV dword ptr [ESI + 0x4],EDI
004c9b42  MOV EDI,ECX
004c9b44  MOV EBP,dword ptr [EDI]
004c9b46  MOV dword ptr [ESP + 0x10],EBP
004c9b4a  MOV EBP,dword ptr [EDI + 0x4]
004c9b4d  MOV EDX,EAX
004c9b4f  MOV dword ptr [ESP + 0x14],EBP
004c9b53  MOV EBP,dword ptr [EDX]
004c9b55  MOV dword ptr [EDI],EBP
004c9b57  MOV EBP,dword ptr [EDX + 0x4]
004c9b5a  MOV dword ptr [EDI + 0x4],EBP
004c9b5d  MOV EDI,dword ptr [ESP + 0x10]
004c9b61  MOV dword ptr [EDX],EDI
004c9b63  MOV EDI,dword ptr [ESP + 0x14]
004c9b67  ADD ESI,0x8
004c9b6a  ADD EAX,0x8
004c9b6d  ADD ECX,0x8
004c9b70  MOV dword ptr [EDX + 0x4],EDI
004c9b73  JMP 0x004c9a93
004c9b78  SUB EBX,0x8
004c9b7b  CMP EAX,EDX
004c9b7d  JNZ 0x004c9bb7
004c9b7f  SUB ECX,0x8
004c9b82  CMP EBX,ECX
004c9b84  JZ 0x004c9b9a
004c9b86  MOV EBP,dword ptr [ECX]
004c9b88  MOV EDX,dword ptr [EBX]
004c9b8a  MOV EDI,dword ptr [EBX + 0x4]
004c9b8d  MOV dword ptr [EBX],EBP
004c9b8f  MOV EBP,dword ptr [ECX + 0x4]
004c9b92  MOV dword ptr [EBX + 0x4],EBP
004c9b95  MOV dword ptr [ECX],EDX
004c9b97  MOV dword ptr [ECX + 0x4],EDI
004c9b9a  MOV EBP,dword ptr [ESI + -0x8]
004c9b9d  MOV EDX,dword ptr [ECX]
004c9b9f  MOV EDI,dword ptr [ECX + 0x4]
004c9ba2  SUB ESI,0x8
004c9ba5  MOV dword ptr [ECX],EBP
004c9ba7  MOV EBP,dword ptr [ESI + 0x4]
004c9baa  MOV dword ptr [ECX + 0x4],EBP
004c9bad  MOV dword ptr [ESI],EDX
004c9baf  MOV dword ptr [ESI + 0x4],EDI
004c9bb2  JMP 0x004c9a93
004c9bb7  MOV EDX,EAX
004c9bb9  MOV EBP,dword ptr [EDX + 0x4]
004c9bbc  MOV EDI,dword ptr [EDX]
004c9bbe  MOV dword ptr [ESP + 0x2c],EBP
004c9bc2  MOV EBP,dword ptr [EBX]
004c9bc4  MOV dword ptr [EDX],EBP
004c9bc6  MOV EBP,dword ptr [EBX + 0x4]
004c9bc9  MOV dword ptr [EDX + 0x4],EBP
004c9bcc  MOV EDX,dword ptr [ESP + 0x2c]
004c9bd0  ADD EAX,0x8
004c9bd3  MOV dword ptr [EBX],EDI
004c9bd5  MOV dword ptr [EBX + 0x4],EDX
004c9bd8  JMP 0x004c9a93
004c9bdd  MOV EAX,dword ptr [ESP + 0x34]
004c9be1  POP EDI
004c9be2  MOV dword ptr [EAX + 0x4],ESI
004c9be5  POP ESI
004c9be6  POP EBP
004c9be7  MOV dword ptr [EAX],ECX
004c9be9  POP EBX
004c9bea  ADD ESP,0x20
004c9bed  RET
