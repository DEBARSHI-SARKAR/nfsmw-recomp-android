00492dc0  SUB ESP,0xc
00492dc3  PUSH EBX
00492dc4  MOV EBX,dword ptr [ESP + 0x14]
00492dc8  TEST EBX,EBX
00492dca  JZ 0x00492edb
00492dd0  PUSH EDI
00492dd1  MOV EDI,dword ptr [ESP + 0x20]
00492dd5  TEST EDI,EDI
00492dd7  JNZ 0x00492dde
00492dd9  MOV EDI,0xc
00492dde  PUSH ESI
00492ddf  MOV ESI,dword ptr [ESP + 0x2c]
00492de3  TEST ESI,ESI
00492de5  JNZ 0x00492dec
00492de7  MOV ESI,0xc
00492dec  MOV EDX,dword ptr [ESP + 0x28]
00492df0  MOV EAX,dword ptr [ESP + 0x20]
00492df4  CMP EAX,EDX
00492df6  JNZ 0x00492e7d
00492dfc  ADD EAX,0x4
00492dff  PUSH EBP
00492e00  FLD float ptr [ECX + 0x20]
00492e03  MOV EBX,EDX
00492e05  FMUL float ptr [EAX + 0x4]
00492e08  ADD EDX,ESI
00492e0a  FLD float ptr [EAX]
00492e0c  FMUL float ptr [ECX + 0x10]
00492e0f  FADDP
00492e11  FLD float ptr [ECX]
00492e13  FMUL float ptr [EAX + -0x4]
00492e16  FADDP
00492e18  FADD float ptr [ECX + 0x30]
00492e1b  FSTP float ptr [ESP + 0x10]
00492e1f  MOV EBP,dword ptr [ESP + 0x10]
00492e23  FLD float ptr [EAX]
00492e25  FMUL float ptr [ECX + 0x14]
00492e28  FLD float ptr [ECX + 0x4]
00492e2b  FMUL float ptr [EAX + -0x4]
00492e2e  FADDP
00492e30  FLD float ptr [ECX + 0x24]
00492e33  FMUL float ptr [EAX + 0x4]
00492e36  FADDP
00492e38  FADD float ptr [ECX + 0x34]
00492e3b  FSTP float ptr [ESP + 0x14]
00492e3f  FLD float ptr [ECX + 0x28]
00492e42  FMUL float ptr [EAX + 0x4]
00492e45  FLD float ptr [ECX + 0x18]
00492e48  FMUL float ptr [EAX]
00492e4a  FADDP
00492e4c  FLD float ptr [ECX + 0x8]
00492e4f  FMUL float ptr [EAX + -0x4]
00492e52  ADD EAX,EDI
00492e54  FADDP
00492e56  FADD float ptr [ECX + 0x38]
00492e59  MOV dword ptr [EBX],EBP
00492e5b  MOV EBP,dword ptr [ESP + 0x14]
00492e5f  MOV dword ptr [EBX + 0x4],EBP
00492e62  FSTP float ptr [ESP + 0x18]
00492e66  MOV EBP,dword ptr [ESP + 0x18]
00492e6a  MOV dword ptr [EBX + 0x8],EBP
00492e6d  DEC dword ptr [ESP + 0x20]
00492e71  JNZ 0x00492e00
00492e73  POP EBP
00492e74  POP ESI
00492e75  POP EDI
00492e76  POP EBX
00492e77  ADD ESP,0xc
00492e7a  RET 0x14
00492e7d  ADD EDX,0x8
00492e80  ADD EAX,0x4
00492e83  FLD float ptr [EAX + 0x4]
00492e86  FMUL float ptr [ECX + 0x20]
00492e89  FLD float ptr [EAX]
00492e8b  FMUL float ptr [ECX + 0x10]
00492e8e  FADDP
00492e90  FLD float ptr [EAX + -0x4]
00492e93  FMUL float ptr [ECX]
00492e95  FADDP
00492e97  FADD float ptr [ECX + 0x30]
00492e9a  FSTP float ptr [EDX + -0x8]
00492e9d  FLD float ptr [EAX + 0x4]
00492ea0  FMUL float ptr [ECX + 0x24]
00492ea3  FLD float ptr [EAX]
00492ea5  FMUL float ptr [ECX + 0x14]
00492ea8  FADDP
00492eaa  FLD float ptr [ECX + 0x4]
00492ead  FMUL float ptr [EAX + -0x4]
00492eb0  FADDP
00492eb2  FADD float ptr [ECX + 0x34]
00492eb5  FSTP float ptr [EDX + -0x4]
00492eb8  FLD float ptr [ECX + 0x28]
00492ebb  FMUL float ptr [EAX + 0x4]
00492ebe  FLD float ptr [EAX + -0x4]
00492ec1  FMUL float ptr [ECX + 0x8]
00492ec4  FADDP
00492ec6  FLD float ptr [EAX]
00492ec8  ADD EAX,EDI
00492eca  FMUL float ptr [ECX + 0x18]
00492ecd  FADDP
00492ecf  FADD float ptr [ECX + 0x38]
00492ed2  FSTP float ptr [EDX]
00492ed4  ADD EDX,ESI
00492ed6  DEC EBX
00492ed7  JNZ 0x00492e83
00492ed9  POP ESI
00492eda  POP EDI
00492edb  POP EBX
00492edc  ADD ESP,0xc
00492edf  RET 0x14
