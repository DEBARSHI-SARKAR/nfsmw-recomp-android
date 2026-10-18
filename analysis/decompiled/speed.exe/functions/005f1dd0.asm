005f1dd0  MOV EAX,FS:[0x0]
005f1dd6  PUSH -0x1
005f1dd8  PUSH 0x875908
005f1ddd  PUSH EAX
005f1dde  MOV EAX,dword ptr [ESP + 0x14]
005f1de2  MOV dword ptr FS:[0x0],ESP
005f1de9  SUB ESP,0x48
005f1dec  PUSH EBP
005f1ded  MOV EBP,ECX
005f1def  MOV CL,byte ptr [EAX + 0x15]
005f1df2  TEST CL,CL
005f1df4  PUSH ESI
005f1df5  JZ 0x005f1e43
005f1df7  PUSH 0x1b
005f1df9  XOR ESI,ESI
005f1dfb  PUSH 0x892920
005f1e00  LEA ECX,[ESP + 0x14]
005f1e04  MOV dword ptr [ESP + 0x2c],0xf
005f1e0c  MOV dword ptr [ESP + 0x28],ESI
005f1e10  MOV byte ptr [ESP + 0x18],0x0
005f1e15  CALL 0x004303b0
005f1e1a  LEA EAX,[ESP + 0xc]
005f1e1e  PUSH EAX
005f1e1f  LEA ECX,[ESP + 0x2c]
005f1e23  MOV dword ptr [ESP + 0x5c],ESI
005f1e27  CALL 0x00432d50
005f1e2c  PUSH 0x8c9f78
005f1e31  LEA ECX,[ESP + 0x2c]
005f1e35  PUSH ECX
005f1e36  MOV dword ptr [ESP + 0x30],0x8bf2c0
005f1e3e  CALL 0x007c56b0
005f1e43  PUSH EBX
005f1e44  MOV EBX,EAX
005f1e46  PUSH EDI
005f1e47  LEA ECX,[ESP + 0x6c]
005f1e4b  MOV dword ptr [ESP + 0x10],EBX
005f1e4f  CALL 0x005dfa30
005f1e54  MOV EAX,dword ptr [EBX]
005f1e56  MOV CL,byte ptr [EAX + 0x15]
005f1e59  TEST CL,CL
005f1e5b  JZ 0x005f1e62
005f1e5d  MOV EDI,dword ptr [EBX + 0x8]
005f1e60  JMP 0x005f1e7b
005f1e62  MOV EDX,dword ptr [EBX + 0x8]
005f1e65  MOV CL,byte ptr [EDX + 0x15]
005f1e68  TEST CL,CL
005f1e6a  JZ 0x005f1e70
005f1e6c  MOV EDI,EAX
005f1e6e  JMP 0x005f1e7b
005f1e70  MOV ECX,dword ptr [ESP + 0x6c]
005f1e74  CMP ECX,EBX
005f1e76  MOV EDI,dword ptr [ECX + 0x8]
005f1e79  JNZ 0x005f1ee9
005f1e7b  MOV AL,byte ptr [EDI + 0x15]
005f1e7e  TEST AL,AL
005f1e80  MOV ESI,dword ptr [EBX + 0x4]
005f1e83  JNZ 0x005f1e88
005f1e85  MOV dword ptr [EDI + 0x4],ESI
005f1e88  MOV EAX,dword ptr [EBP + 0x4]
005f1e8b  CMP dword ptr [EAX + 0x4],EBX
005f1e8e  JNZ 0x005f1e95
005f1e90  MOV dword ptr [EAX + 0x4],EDI
005f1e93  JMP 0x005f1ea0
005f1e95  CMP dword ptr [ESI],EBX
005f1e97  JNZ 0x005f1e9d
005f1e99  MOV dword ptr [ESI],EDI
005f1e9b  JMP 0x005f1ea0
005f1e9d  MOV dword ptr [ESI + 0x8],EDI
005f1ea0  MOV EBX,dword ptr [EBP + 0x4]
005f1ea3  MOV EAX,dword ptr [EBX]
005f1ea5  CMP EAX,dword ptr [ESP + 0x10]
005f1ea9  JNZ 0x005f1ec1
005f1eab  MOV AL,byte ptr [EDI + 0x15]
005f1eae  TEST AL,AL
005f1eb0  JZ 0x005f1eb6
005f1eb2  MOV EAX,ESI
005f1eb4  JMP 0x005f1ebf
005f1eb6  PUSH EDI
005f1eb7  CALL 0x005ded50
005f1ebc  ADD ESP,0x4
005f1ebf  MOV dword ptr [EBX],EAX
005f1ec1  MOV EBX,dword ptr [EBP + 0x4]
005f1ec4  MOV ECX,dword ptr [ESP + 0x10]
005f1ec8  CMP dword ptr [EBX + 0x8],ECX
005f1ecb  JNZ 0x005f1f41
005f1ecd  MOV AL,byte ptr [EDI + 0x15]
005f1ed0  TEST AL,AL
005f1ed2  JZ 0x005f1edb
005f1ed4  MOV EAX,ESI
005f1ed6  MOV dword ptr [EBX + 0x8],EAX
005f1ed9  JMP 0x005f1f41
005f1edb  PUSH EDI
005f1edc  CALL 0x005ded30
005f1ee1  ADD ESP,0x4
005f1ee4  MOV dword ptr [EBX + 0x8],EAX
005f1ee7  JMP 0x005f1f41
005f1ee9  MOV dword ptr [EAX + 0x4],ECX
005f1eec  MOV EDX,dword ptr [EBX]
005f1eee  MOV dword ptr [ECX],EDX
005f1ef0  CMP ECX,dword ptr [EBX + 0x8]
005f1ef3  JNZ 0x005f1ef9
005f1ef5  MOV ESI,ECX
005f1ef7  JMP 0x005f1f14
005f1ef9  MOV AL,byte ptr [EDI + 0x15]
005f1efc  TEST AL,AL
005f1efe  MOV ESI,dword ptr [ECX + 0x4]
005f1f01  JNZ 0x005f1f06
005f1f03  MOV dword ptr [EDI + 0x4],ESI
005f1f06  MOV dword ptr [ESI],EDI
005f1f08  MOV EAX,dword ptr [EBX + 0x8]
005f1f0b  MOV dword ptr [ECX + 0x8],EAX
005f1f0e  MOV EDX,dword ptr [EBX + 0x8]
005f1f11  MOV dword ptr [EDX + 0x4],ECX
005f1f14  MOV EAX,dword ptr [EBP + 0x4]
005f1f17  CMP dword ptr [EAX + 0x4],EBX
005f1f1a  JNZ 0x005f1f21
005f1f1c  MOV dword ptr [EAX + 0x4],ECX
005f1f1f  JMP 0x005f1f2f
005f1f21  MOV EAX,dword ptr [EBX + 0x4]
005f1f24  CMP dword ptr [EAX],EBX
005f1f26  JNZ 0x005f1f2c
005f1f28  MOV dword ptr [EAX],ECX
005f1f2a  JMP 0x005f1f2f
005f1f2c  MOV dword ptr [EAX + 0x8],ECX
005f1f2f  MOV EAX,dword ptr [EBX + 0x4]
005f1f32  MOV dword ptr [ECX + 0x4],EAX
005f1f35  MOV DL,byte ptr [EBX + 0x14]
005f1f38  MOV AL,byte ptr [ECX + 0x14]
005f1f3b  MOV byte ptr [ECX + 0x14],DL
005f1f3e  MOV byte ptr [EBX + 0x14],AL
005f1f41  MOV EAX,dword ptr [ESP + 0x10]
005f1f45  MOV CL,byte ptr [EAX + 0x14]
005f1f48  MOV BL,0x1
005f1f4a  CMP CL,BL
005f1f4c  JNZ 0x005f2051
005f1f52  MOV ECX,dword ptr [EBP + 0x4]
005f1f55  CMP EDI,dword ptr [ECX + 0x4]
005f1f58  JZ 0x005f204e
005f1f5e  MOV EDI,EDI
005f1f60  CMP byte ptr [EDI + 0x14],BL
005f1f63  JNZ 0x005f204e
005f1f69  MOV EAX,dword ptr [ESI]
005f1f6b  CMP EDI,EAX
005f1f6d  JNZ 0x005f1fd6
005f1f6f  MOV EAX,dword ptr [ESI + 0x8]
005f1f72  MOV CL,byte ptr [EAX + 0x14]
005f1f75  TEST CL,CL
005f1f77  JNZ 0x005f1f8b
005f1f79  MOV byte ptr [EAX + 0x14],BL
005f1f7c  PUSH ESI
005f1f7d  MOV ECX,EBP
005f1f7f  MOV byte ptr [ESI + 0x14],0x0
005f1f83  CALL 0x005e6070
005f1f88  MOV EAX,dword ptr [ESI + 0x8]
005f1f8b  MOV CL,byte ptr [EAX + 0x15]
005f1f8e  TEST CL,CL
005f1f90  JNZ 0x005f2008
005f1f92  MOV EDX,dword ptr [EAX]
005f1f94  CMP byte ptr [EDX + 0x14],BL
005f1f97  JNZ 0x005f1fa1
005f1f99  MOV ECX,dword ptr [EAX + 0x8]
005f1f9c  CMP byte ptr [ECX + 0x14],BL
005f1f9f  JZ 0x005f2004
005f1fa1  MOV ECX,dword ptr [EAX + 0x8]
005f1fa4  CMP byte ptr [ECX + 0x14],BL
005f1fa7  JNZ 0x005f1fbd
005f1fa9  MOV EDX,dword ptr [EAX]
005f1fab  MOV byte ptr [EDX + 0x14],BL
005f1fae  PUSH EAX
005f1faf  MOV ECX,EBP
005f1fb1  MOV byte ptr [EAX + 0x14],0x0
005f1fb5  CALL 0x005ded90
005f1fba  MOV EAX,dword ptr [ESI + 0x8]
005f1fbd  MOV CL,byte ptr [ESI + 0x14]
005f1fc0  MOV byte ptr [EAX + 0x14],CL
005f1fc3  MOV byte ptr [ESI + 0x14],BL
005f1fc6  MOV EDX,dword ptr [EAX + 0x8]
005f1fc9  PUSH ESI
005f1fca  MOV ECX,EBP
005f1fcc  MOV byte ptr [EDX + 0x14],BL
005f1fcf  CALL 0x005e6070
005f1fd4  JMP 0x005f204e
005f1fd6  MOV CL,byte ptr [EAX + 0x14]
005f1fd9  TEST CL,CL
005f1fdb  JNZ 0x005f1fee
005f1fdd  MOV byte ptr [EAX + 0x14],BL
005f1fe0  PUSH ESI
005f1fe1  MOV ECX,EBP
005f1fe3  MOV byte ptr [ESI + 0x14],0x0
005f1fe7  CALL 0x005ded90
005f1fec  MOV EAX,dword ptr [ESI]
005f1fee  MOV CL,byte ptr [EAX + 0x15]
005f1ff1  TEST CL,CL
005f1ff3  JNZ 0x005f2008
005f1ff5  MOV EDX,dword ptr [EAX + 0x8]
005f1ff8  CMP byte ptr [EDX + 0x14],BL
005f1ffb  JNZ 0x005f201d
005f1ffd  MOV ECX,dword ptr [EAX]
005f1fff  CMP byte ptr [ECX + 0x14],BL
005f2002  JNZ 0x005f201d
005f2004  MOV byte ptr [EAX + 0x14],0x0
005f2008  MOV EDX,dword ptr [EBP + 0x4]
005f200b  MOV EAX,dword ptr [EDX + 0x4]
005f200e  MOV EDI,ESI
005f2010  CMP EDI,EAX
005f2012  MOV ESI,dword ptr [ESI + 0x4]
005f2015  JNZ 0x005f1f60
005f201b  JMP 0x005f204e
005f201d  MOV ECX,dword ptr [EAX]
005f201f  CMP byte ptr [ECX + 0x14],BL
005f2022  JNZ 0x005f2038
005f2024  MOV EDX,dword ptr [EAX + 0x8]
005f2027  MOV byte ptr [EDX + 0x14],BL
005f202a  PUSH EAX
005f202b  MOV ECX,EBP
005f202d  MOV byte ptr [EAX + 0x14],0x0
005f2031  CALL 0x005e6070
005f2036  MOV EAX,dword ptr [ESI]
005f2038  MOV CL,byte ptr [ESI + 0x14]
005f203b  MOV byte ptr [EAX + 0x14],CL
005f203e  MOV byte ptr [ESI + 0x14],BL
005f2041  MOV EDX,dword ptr [EAX]
005f2043  PUSH ESI
005f2044  MOV ECX,EBP
005f2046  MOV byte ptr [EDX + 0x14],BL
005f2049  CALL 0x005ded90
005f204e  MOV byte ptr [EDI + 0x14],BL
005f2051  MOV EAX,dword ptr [ESP + 0x10]
005f2055  PUSH 0x0
005f2057  PUSH 0x18
005f2059  PUSH EAX
005f205a  MOV ECX,0x925b30
005f205f  CALL 0x005d0370
005f2064  MOV EAX,dword ptr [EBP + 0x8]
005f2067  TEST EAX,EAX
005f2069  POP EDI
005f206a  POP EBX
005f206b  JBE 0x005f2071
005f206d  DEC EAX
005f206e  MOV dword ptr [EBP + 0x8],EAX
005f2071  MOV ECX,dword ptr [ESP + 0x64]
005f2075  MOV EAX,dword ptr [ESP + 0x60]
005f2079  MOV dword ptr [EAX],ECX
005f207b  MOV ECX,dword ptr [ESP + 0x50]
005f207f  POP ESI
005f2080  POP EBP
005f2081  MOV dword ptr FS:[0x0],ECX
005f2088  ADD ESP,0x54
005f208b  RET 0x8
