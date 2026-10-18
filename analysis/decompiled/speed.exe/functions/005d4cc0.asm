005d4cc0  SUB ESP,0x20
005d4cc3  PUSH EBX
005d4cc4  MOV EBX,dword ptr [ESP + 0x2c]
005d4cc8  PUSH EBP
005d4cc9  MOV EBP,dword ptr [ESP + 0x34]
005d4ccd  MOV EAX,EBP
005d4ccf  SUB EAX,EBX
005d4cd1  SAR EAX,0x3
005d4cd4  CDQ
005d4cd5  PUSH ESI
005d4cd6  SUB EAX,EDX
005d4cd8  PUSH EDI
005d4cd9  SAR EAX,0x1
005d4cdb  LEA EDI,[EBX + EAX*0x8]
005d4cde  LEA EAX,[EBP + -0x8]
005d4ce1  PUSH EAX
005d4ce2  PUSH EDI
005d4ce3  PUSH EBX
005d4ce4  CALL 0x005d37d0
005d4ce9  ADD ESP,0xc
005d4cec  CMP EBX,EDI
005d4cee  MOV ECX,EDI
005d4cf0  LEA ESI,[EDI + 0x8]
005d4cf3  JNC 0x005d4d07
005d4cf5  MOV EAX,dword ptr [ECX + -0x8]
005d4cf8  MOV EDX,dword ptr [ECX]
005d4cfa  CMP EDX,EAX
005d4cfc  JA 0x005d4d07
005d4cfe  JC 0x005d4d07
005d4d00  ADD ECX,-0x8
005d4d03  CMP EBX,ECX
005d4d05  JC 0x005d4cf5
005d4d07  CMP ESI,EBP
005d4d09  JNC 0x005d4d1f
005d4d0b  MOV EDX,dword ptr [ECX]
005d4d0d  LEA ECX,[ECX]
005d4d10  MOV EAX,dword ptr [ESI]
005d4d12  CMP EDX,EAX
005d4d14  JA 0x005d4d1f
005d4d16  JC 0x005d4d1f
005d4d18  ADD ESI,0x8
005d4d1b  CMP ESI,EBP
005d4d1d  JC 0x005d4d10
005d4d1f  MOV EAX,ESI
005d4d21  MOV EBX,ECX
005d4d23  CMP EAX,dword ptr [ESP + 0x3c]
005d4d27  JNC 0x005d4d66
005d4d29  LEA ESP,[ESP]
005d4d30  MOV EDX,dword ptr [ECX]
005d4d32  MOV EDI,dword ptr [EAX]
005d4d34  CMP EDI,EDX
005d4d36  JA 0x005d4d5b
005d4d38  JC 0x005d4d66
005d4d3a  MOV EDX,ESI
005d4d3c  MOV EBP,dword ptr [EDX + 0x4]
005d4d3f  MOV EDI,dword ptr [EDX]
005d4d41  MOV dword ptr [ESP + 0x1c],EBP
005d4d45  MOV EBP,dword ptr [EAX]
005d4d47  MOV dword ptr [EDX],EBP
005d4d49  MOV EBP,dword ptr [EAX + 0x4]
005d4d4c  MOV dword ptr [EDX + 0x4],EBP
005d4d4f  MOV EDX,dword ptr [ESP + 0x1c]
005d4d53  ADD ESI,0x8
005d4d56  MOV dword ptr [EAX],EDI
005d4d58  MOV dword ptr [EAX + 0x4],EDX
005d4d5b  MOV EDX,dword ptr [ESP + 0x3c]
005d4d5f  ADD EAX,0x8
005d4d62  CMP EAX,EDX
005d4d64  JC 0x005d4d30
005d4d66  CMP EBX,dword ptr [ESP + 0x38]
005d4d6a  JBE 0x005d4dac
005d4d6c  LEA EDX,[EBX + -0x8]
005d4d6f  NOP
005d4d70  MOV EDI,dword ptr [EDX]
005d4d72  MOV EBP,dword ptr [ECX]
005d4d74  CMP EBP,EDI
005d4d76  JA 0x005d4d9a
005d4d78  JC 0x005d4da8
005d4d7a  MOV EBP,dword ptr [ECX + -0x4]
005d4d7d  MOV EDI,dword ptr [ECX + -0x8]
005d4d80  SUB ECX,0x8
005d4d83  MOV dword ptr [ESP + 0x24],EBP
005d4d87  MOV EBP,dword ptr [EDX]
005d4d89  MOV dword ptr [ECX],EBP
005d4d8b  MOV EBP,dword ptr [EDX + 0x4]
005d4d8e  MOV dword ptr [ECX + 0x4],EBP
005d4d91  MOV dword ptr [EDX],EDI
005d4d93  MOV EDI,dword ptr [ESP + 0x24]
005d4d97  MOV dword ptr [EDX + 0x4],EDI
005d4d9a  MOV EDI,dword ptr [ESP + 0x38]
005d4d9e  SUB EBX,0x8
005d4da1  SUB EDX,0x8
005d4da4  CMP EDI,EBX
005d4da6  JC 0x005d4d70
005d4da8  CMP EBX,dword ptr [ESP + 0x38]
005d4dac  MOV EDX,dword ptr [ESP + 0x3c]
005d4db0  JNZ 0x005d4e08
005d4db2  CMP EAX,EDX
005d4db4  JZ 0x005d4e6d
005d4dba  CMP ESI,EAX
005d4dbc  JZ 0x005d4dd2
005d4dbe  MOV EBP,dword ptr [ESI]
005d4dc0  MOV EDX,dword ptr [ECX]
005d4dc2  MOV EDI,dword ptr [ECX + 0x4]
005d4dc5  MOV dword ptr [ECX],EBP
005d4dc7  MOV EBP,dword ptr [ESI + 0x4]
005d4dca  MOV dword ptr [ECX + 0x4],EBP
005d4dcd  MOV dword ptr [ESI],EDX
005d4dcf  MOV dword ptr [ESI + 0x4],EDI
005d4dd2  MOV EDI,ECX
005d4dd4  MOV EBP,dword ptr [EDI]
005d4dd6  MOV dword ptr [ESP + 0x10],EBP
005d4dda  MOV EBP,dword ptr [EDI + 0x4]
005d4ddd  MOV EDX,EAX
005d4ddf  MOV dword ptr [ESP + 0x14],EBP
005d4de3  MOV EBP,dword ptr [EDX]
005d4de5  MOV dword ptr [EDI],EBP
005d4de7  MOV EBP,dword ptr [EDX + 0x4]
005d4dea  MOV dword ptr [EDI + 0x4],EBP
005d4ded  MOV EDI,dword ptr [ESP + 0x10]
005d4df1  MOV dword ptr [EDX],EDI
005d4df3  MOV EDI,dword ptr [ESP + 0x14]
005d4df7  ADD ESI,0x8
005d4dfa  ADD EAX,0x8
005d4dfd  ADD ECX,0x8
005d4e00  MOV dword ptr [EDX + 0x4],EDI
005d4e03  JMP 0x005d4d23
005d4e08  SUB EBX,0x8
005d4e0b  CMP EAX,EDX
005d4e0d  JNZ 0x005d4e47
005d4e0f  SUB ECX,0x8
005d4e12  CMP EBX,ECX
005d4e14  JZ 0x005d4e2a
005d4e16  MOV EBP,dword ptr [ECX]
005d4e18  MOV EDX,dword ptr [EBX]
005d4e1a  MOV EDI,dword ptr [EBX + 0x4]
005d4e1d  MOV dword ptr [EBX],EBP
005d4e1f  MOV EBP,dword ptr [ECX + 0x4]
005d4e22  MOV dword ptr [EBX + 0x4],EBP
005d4e25  MOV dword ptr [ECX],EDX
005d4e27  MOV dword ptr [ECX + 0x4],EDI
005d4e2a  MOV EBP,dword ptr [ESI + -0x8]
005d4e2d  MOV EDX,dword ptr [ECX]
005d4e2f  MOV EDI,dword ptr [ECX + 0x4]
005d4e32  SUB ESI,0x8
005d4e35  MOV dword ptr [ECX],EBP
005d4e37  MOV EBP,dword ptr [ESI + 0x4]
005d4e3a  MOV dword ptr [ECX + 0x4],EBP
005d4e3d  MOV dword ptr [ESI],EDX
005d4e3f  MOV dword ptr [ESI + 0x4],EDI
005d4e42  JMP 0x005d4d23
005d4e47  MOV EDX,EAX
005d4e49  MOV EBP,dword ptr [EDX + 0x4]
005d4e4c  MOV EDI,dword ptr [EDX]
005d4e4e  MOV dword ptr [ESP + 0x2c],EBP
005d4e52  MOV EBP,dword ptr [EBX]
005d4e54  MOV dword ptr [EDX],EBP
005d4e56  MOV EBP,dword ptr [EBX + 0x4]
005d4e59  MOV dword ptr [EDX + 0x4],EBP
005d4e5c  MOV EDX,dword ptr [ESP + 0x2c]
005d4e60  ADD EAX,0x8
005d4e63  MOV dword ptr [EBX],EDI
005d4e65  MOV dword ptr [EBX + 0x4],EDX
005d4e68  JMP 0x005d4d23
005d4e6d  MOV EAX,dword ptr [ESP + 0x34]
005d4e71  POP EDI
005d4e72  MOV dword ptr [EAX + 0x4],ESI
005d4e75  POP ESI
005d4e76  POP EBP
005d4e77  MOV dword ptr [EAX],ECX
005d4e79  POP EBX
005d4e7a  ADD ESP,0x20
005d4e7d  RET
