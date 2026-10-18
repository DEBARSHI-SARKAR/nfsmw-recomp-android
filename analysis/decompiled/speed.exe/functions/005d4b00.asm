005d4b00  SUB ESP,0x20
005d4b03  PUSH EBX
005d4b04  MOV EBX,dword ptr [ESP + 0x2c]
005d4b08  PUSH EBP
005d4b09  MOV EBP,dword ptr [ESP + 0x34]
005d4b0d  MOV EAX,EBP
005d4b0f  SUB EAX,EBX
005d4b11  SAR EAX,0x3
005d4b14  CDQ
005d4b15  PUSH ESI
005d4b16  SUB EAX,EDX
005d4b18  PUSH EDI
005d4b19  SAR EAX,0x1
005d4b1b  LEA EDI,[EBX + EAX*0x8]
005d4b1e  LEA EAX,[EBP + -0x8]
005d4b21  PUSH EAX
005d4b22  PUSH EDI
005d4b23  PUSH EBX
005d4b24  CALL 0x005d3740
005d4b29  ADD ESP,0xc
005d4b2c  CMP EBX,EDI
005d4b2e  MOV ECX,EDI
005d4b30  LEA ESI,[EDI + 0x8]
005d4b33  JNC 0x005d4b47
005d4b35  MOV EAX,dword ptr [ECX + -0x8]
005d4b38  MOV EDX,dword ptr [ECX]
005d4b3a  CMP EDX,EAX
005d4b3c  JA 0x005d4b47
005d4b3e  JC 0x005d4b47
005d4b40  ADD ECX,-0x8
005d4b43  CMP EBX,ECX
005d4b45  JC 0x005d4b35
005d4b47  CMP ESI,EBP
005d4b49  JNC 0x005d4b5f
005d4b4b  MOV EDX,dword ptr [ECX]
005d4b4d  LEA ECX,[ECX]
005d4b50  MOV EAX,dword ptr [ESI]
005d4b52  CMP EDX,EAX
005d4b54  JA 0x005d4b5f
005d4b56  JC 0x005d4b5f
005d4b58  ADD ESI,0x8
005d4b5b  CMP ESI,EBP
005d4b5d  JC 0x005d4b50
005d4b5f  MOV EAX,ESI
005d4b61  MOV EBX,ECX
005d4b63  CMP EAX,dword ptr [ESP + 0x3c]
005d4b67  JNC 0x005d4ba6
005d4b69  LEA ESP,[ESP]
005d4b70  MOV EDX,dword ptr [ECX]
005d4b72  MOV EDI,dword ptr [EAX]
005d4b74  CMP EDI,EDX
005d4b76  JA 0x005d4b9b
005d4b78  JC 0x005d4ba6
005d4b7a  MOV EDX,ESI
005d4b7c  MOV EBP,dword ptr [EDX + 0x4]
005d4b7f  MOV EDI,dword ptr [EDX]
005d4b81  MOV dword ptr [ESP + 0x1c],EBP
005d4b85  MOV EBP,dword ptr [EAX]
005d4b87  MOV dword ptr [EDX],EBP
005d4b89  MOV EBP,dword ptr [EAX + 0x4]
005d4b8c  MOV dword ptr [EDX + 0x4],EBP
005d4b8f  MOV EDX,dword ptr [ESP + 0x1c]
005d4b93  ADD ESI,0x8
005d4b96  MOV dword ptr [EAX],EDI
005d4b98  MOV dword ptr [EAX + 0x4],EDX
005d4b9b  MOV EDX,dword ptr [ESP + 0x3c]
005d4b9f  ADD EAX,0x8
005d4ba2  CMP EAX,EDX
005d4ba4  JC 0x005d4b70
005d4ba6  CMP EBX,dword ptr [ESP + 0x38]
005d4baa  JBE 0x005d4bec
005d4bac  LEA EDX,[EBX + -0x8]
005d4baf  NOP
005d4bb0  MOV EDI,dword ptr [EDX]
005d4bb2  MOV EBP,dword ptr [ECX]
005d4bb4  CMP EBP,EDI
005d4bb6  JA 0x005d4bda
005d4bb8  JC 0x005d4be8
005d4bba  MOV EBP,dword ptr [ECX + -0x4]
005d4bbd  MOV EDI,dword ptr [ECX + -0x8]
005d4bc0  SUB ECX,0x8
005d4bc3  MOV dword ptr [ESP + 0x24],EBP
005d4bc7  MOV EBP,dword ptr [EDX]
005d4bc9  MOV dword ptr [ECX],EBP
005d4bcb  MOV EBP,dword ptr [EDX + 0x4]
005d4bce  MOV dword ptr [ECX + 0x4],EBP
005d4bd1  MOV dword ptr [EDX],EDI
005d4bd3  MOV EDI,dword ptr [ESP + 0x24]
005d4bd7  MOV dword ptr [EDX + 0x4],EDI
005d4bda  MOV EDI,dword ptr [ESP + 0x38]
005d4bde  SUB EBX,0x8
005d4be1  SUB EDX,0x8
005d4be4  CMP EDI,EBX
005d4be6  JC 0x005d4bb0
005d4be8  CMP EBX,dword ptr [ESP + 0x38]
005d4bec  MOV EDX,dword ptr [ESP + 0x3c]
005d4bf0  JNZ 0x005d4c48
005d4bf2  CMP EAX,EDX
005d4bf4  JZ 0x005d4cad
005d4bfa  CMP ESI,EAX
005d4bfc  JZ 0x005d4c12
005d4bfe  MOV EBP,dword ptr [ESI]
005d4c00  MOV EDX,dword ptr [ECX]
005d4c02  MOV EDI,dword ptr [ECX + 0x4]
005d4c05  MOV dword ptr [ECX],EBP
005d4c07  MOV EBP,dword ptr [ESI + 0x4]
005d4c0a  MOV dword ptr [ECX + 0x4],EBP
005d4c0d  MOV dword ptr [ESI],EDX
005d4c0f  MOV dword ptr [ESI + 0x4],EDI
005d4c12  MOV EDI,ECX
005d4c14  MOV EBP,dword ptr [EDI]
005d4c16  MOV dword ptr [ESP + 0x10],EBP
005d4c1a  MOV EBP,dword ptr [EDI + 0x4]
005d4c1d  MOV EDX,EAX
005d4c1f  MOV dword ptr [ESP + 0x14],EBP
005d4c23  MOV EBP,dword ptr [EDX]
005d4c25  MOV dword ptr [EDI],EBP
005d4c27  MOV EBP,dword ptr [EDX + 0x4]
005d4c2a  MOV dword ptr [EDI + 0x4],EBP
005d4c2d  MOV EDI,dword ptr [ESP + 0x10]
005d4c31  MOV dword ptr [EDX],EDI
005d4c33  MOV EDI,dword ptr [ESP + 0x14]
005d4c37  ADD ESI,0x8
005d4c3a  ADD EAX,0x8
005d4c3d  ADD ECX,0x8
005d4c40  MOV dword ptr [EDX + 0x4],EDI
005d4c43  JMP 0x005d4b63
005d4c48  SUB EBX,0x8
005d4c4b  CMP EAX,EDX
005d4c4d  JNZ 0x005d4c87
005d4c4f  SUB ECX,0x8
005d4c52  CMP EBX,ECX
005d4c54  JZ 0x005d4c6a
005d4c56  MOV EBP,dword ptr [ECX]
005d4c58  MOV EDX,dword ptr [EBX]
005d4c5a  MOV EDI,dword ptr [EBX + 0x4]
005d4c5d  MOV dword ptr [EBX],EBP
005d4c5f  MOV EBP,dword ptr [ECX + 0x4]
005d4c62  MOV dword ptr [EBX + 0x4],EBP
005d4c65  MOV dword ptr [ECX],EDX
005d4c67  MOV dword ptr [ECX + 0x4],EDI
005d4c6a  MOV EBP,dword ptr [ESI + -0x8]
005d4c6d  MOV EDX,dword ptr [ECX]
005d4c6f  MOV EDI,dword ptr [ECX + 0x4]
005d4c72  SUB ESI,0x8
005d4c75  MOV dword ptr [ECX],EBP
005d4c77  MOV EBP,dword ptr [ESI + 0x4]
005d4c7a  MOV dword ptr [ECX + 0x4],EBP
005d4c7d  MOV dword ptr [ESI],EDX
005d4c7f  MOV dword ptr [ESI + 0x4],EDI
005d4c82  JMP 0x005d4b63
005d4c87  MOV EDX,EAX
005d4c89  MOV EBP,dword ptr [EDX + 0x4]
005d4c8c  MOV EDI,dword ptr [EDX]
005d4c8e  MOV dword ptr [ESP + 0x2c],EBP
005d4c92  MOV EBP,dword ptr [EBX]
005d4c94  MOV dword ptr [EDX],EBP
005d4c96  MOV EBP,dword ptr [EBX + 0x4]
005d4c99  MOV dword ptr [EDX + 0x4],EBP
005d4c9c  MOV EDX,dword ptr [ESP + 0x2c]
005d4ca0  ADD EAX,0x8
005d4ca3  MOV dword ptr [EBX],EDI
005d4ca5  MOV dword ptr [EBX + 0x4],EDX
005d4ca8  JMP 0x005d4b63
005d4cad  MOV EAX,dword ptr [ESP + 0x34]
005d4cb1  POP EDI
005d4cb2  MOV dword ptr [EAX + 0x4],ESI
005d4cb5  POP ESI
005d4cb6  POP EBP
005d4cb7  MOV dword ptr [EAX],ECX
005d4cb9  POP EBX
005d4cba  ADD ESP,0x20
005d4cbd  RET
