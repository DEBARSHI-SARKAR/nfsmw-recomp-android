006d0b00  PUSH EBP
006d0b01  MOV EBP,ESP
006d0b03  AND ESP,0xfffffff0
006d0b06  SUB ESP,0xa8
006d0b0c  CMP dword ptr [0x00925e90],0x3
006d0b13  PUSH ESI
006d0b14  MOV ESI,dword ptr [EBP + 0x8]
006d0b17  PUSH EDI
006d0b18  MOV EDI,dword ptr [ESI + 0x40]
006d0b1b  JNZ 0x006d0c56
006d0b21  CALL 0x00738840
006d0b26  TEST EAX,EAX
006d0b28  JZ 0x006d0c56
006d0b2e  MOV EAX,[0x009b27ec]
006d0b33  CMP EAX,0x9b27ec
006d0b38  JZ 0x006d0dba
006d0b3e  MOV ECX,dword ptr [ESI + 0x4]
006d0b41  ADD ECX,-0x7
006d0b44  CMP ECX,dword ptr [EAX + 0x31c]
006d0b4a  JNZ 0x006d0c44
006d0b50  MOV EDX,dword ptr [EAX + 0x57c]
006d0b56  TEST EDX,EDX
006d0b58  JNZ 0x006d0c44
006d0b5e  FLD float ptr [EAX + 0x330]
006d0b64  MOV EDX,dword ptr [EAX + 0x338]
006d0b6a  FLD float ptr [EAX + 0x334]
006d0b70  MOV dword ptr [ESP + 0x48],EDX
006d0b74  MOV EDX,dword ptr [EAX + 0x350]
006d0b7a  FXCH
006d0b7c  FMUL float ptr [0x008adfa0]
006d0b82  MOV dword ptr [ESP + 0x20],EDX
006d0b86  MOV EDX,dword ptr [EAX + 0x354]
006d0b8c  MOV dword ptr [ESP + 0x24],EDX
006d0b90  MOV EDX,dword ptr [EAX + 0x358]
006d0b96  FSTP float ptr [ESP + 0x60]
006d0b9a  MOV dword ptr [ESP + 0x28],EDX
006d0b9e  FMUL float ptr [0x008adfa0]
006d0ba4  MOV EDX,dword ptr [EAX + 0x320]
006d0baa  FLD float ptr [ESP + 0x48]
006d0bae  MOV dword ptr [ESP + 0x10],EDX
006d0bb2  FMUL float ptr [0x008adfa0]
006d0bb8  MOV EDX,dword ptr [EAX + 0x324]
006d0bbe  FLD float ptr [ESP + 0x60]
006d0bc2  MOV dword ptr [ESP + 0x14],EDX
006d0bc6  FADD float ptr [ESP + 0x10]
006d0bca  MOV EDX,dword ptr [EAX + 0x328]
006d0bd0  MOV dword ptr [ESP + 0x18],EDX
006d0bd4  MOV EDX,dword ptr [EAX + 0x330]
006d0bda  FSTP float ptr [ESP + 0x10]
006d0bde  MOV dword ptr [ESP + 0x30],EDX
006d0be2  FXCH
006d0be4  MOV EDX,dword ptr [EAX + 0x334]
006d0bea  FADD float ptr [ESP + 0x14]
006d0bee  MOV dword ptr [ESP + 0x34],EDX
006d0bf2  MOV EDX,dword ptr [EAX + 0x338]
006d0bf8  MOV dword ptr [ESP + 0x38],EDX
006d0bfc  FSTP float ptr [ESP + 0x14]
006d0c00  FADD float ptr [ESP + 0x18]
006d0c04  FLD float ptr [ESP + 0x20]
006d0c08  FMUL float ptr [0x008adfa4]
006d0c0e  FLD float ptr [ESP + 0x24]
006d0c12  FMUL float ptr [0x008adfa4]
006d0c18  FLD float ptr [ESP + 0x28]
006d0c1c  FMUL float ptr [0x008adfa4]
006d0c22  FSTP float ptr [ESP + 0x58]
006d0c26  FXCH
006d0c28  FADD float ptr [ESP + 0x10]
006d0c2c  FSTP float ptr [ESP + 0x10]
006d0c30  FADD float ptr [ESP + 0x14]
006d0c34  FSTP float ptr [ESP + 0x14]
006d0c38  FLD float ptr [ESP + 0x58]
006d0c3c  FADD ST0,ST1
006d0c3e  FSTP float ptr [ESP + 0x18]
006d0c42  FSTP ST0
006d0c44  MOV EAX,dword ptr [EAX]
006d0c46  CMP EAX,0x9b27ec
006d0c4b  JNZ 0x006d0b44
006d0c51  JMP 0x006d0dba
006d0c56  CMP dword ptr [0x00925e90],0x6
006d0c5d  JNZ 0x006d0dba
006d0c63  MOV EAX,[0x009b0858]
006d0c68  MOV ESI,dword ptr [EBP + 0xc]
006d0c6b  CMP ESI,dword ptr [EAX + 0xc]
006d0c6e  JGE 0x006d0dba
006d0c74  PUSH ESI
006d0c75  MOV ECX,0x904fb8
006d0c7a  CALL 0x00733c30
006d0c7f  MOV ECX,dword ptr [0x009b0858]
006d0c85  PUSH EAX
006d0c86  CALL 0x00740420
006d0c8b  MOV ECX,dword ptr [0x00000000]
006d0c91  MOV EDX,dword ptr [0x00000004]
006d0c97  MOV EAX,[0x00000008]
006d0c9c  MOV dword ptr [ESP + 0x10],ECX
006d0ca0  PUSH ESI
006d0ca1  MOV ECX,0x904fb8
006d0ca6  MOV dword ptr [ESP + 0x18],EDX
006d0caa  MOV dword ptr [ESP + 0x1c],EAX
006d0cae  CALL 0x00733c30
006d0cb3  MOV ECX,dword ptr [0x009b0858]
006d0cb9  PUSH EAX
006d0cba  CALL 0x00740420
006d0cbf  FLD float ptr [0x00000004]
006d0cc5  FLD float ptr [0x00000008]
006d0ccb  MOV ECX,dword ptr [0x00000000]
006d0cd1  FXCH
006d0cd3  MOV dword ptr [ESP + 0x30],ECX
006d0cd7  FSTP float ptr [ESP + 0x34]
006d0cdb  PUSH ESI
006d0cdc  MOV ECX,0x904fb8
006d0ce1  FSTP float ptr [ESP + 0x3c]
006d0ce5  CALL 0x00733c30
006d0cea  MOV ECX,dword ptr [0x009b0858]
006d0cf0  PUSH EAX
006d0cf1  CALL 0x00740420
006d0cf6  MOV ECX,dword ptr [0x00000008]
006d0cfc  MOV EDX,dword ptr [0x00000000]
006d0d02  MOV EAX,[0x00000004]
006d0d07  MOV dword ptr [ESP + 0x28],ECX
006d0d0b  PUSH ESI
006d0d0c  MOV ECX,0x904fb8
006d0d11  MOV dword ptr [ESP + 0x24],EDX
006d0d15  MOV dword ptr [ESP + 0x28],EAX
006d0d19  CALL 0x00733c30
006d0d1e  MOV ECX,dword ptr [0x009b0858]
006d0d24  PUSH EAX
006d0d25  CALL 0x00740420
006d0d2a  FLD float ptr [0x00000000]
006d0d30  FLD float ptr [0x00000004]
006d0d36  MOV EDX,dword ptr [0x00000008]
006d0d3c  FLD float ptr [ESP + 0x20]
006d0d40  MOV dword ptr [ESP + 0x68],EDX
006d0d44  FMUL float ptr [0x00890968]
006d0d4a  FLD float ptr [ESP + 0x24]
006d0d4e  FMUL float ptr [0x00890968]
006d0d54  FLD float ptr [ESP + 0x28]
006d0d58  FMUL float ptr [0x00890968]
006d0d5e  FSTP float ptr [ESP + 0x58]
006d0d62  FXCH
006d0d64  FADD float ptr [ESP + 0x10]
006d0d68  FSTP float ptr [ESP + 0x10]
006d0d6c  FADD float ptr [ESP + 0x14]
006d0d70  FSTP float ptr [ESP + 0x14]
006d0d74  FLD float ptr [ESP + 0x58]
006d0d78  FADD float ptr [ESP + 0x18]
006d0d7c  FSTP float ptr [ESP + 0x18]
006d0d80  FXCH
006d0d82  FMUL float ptr [0x008adfa4]
006d0d88  FSTP float ptr [ESP + 0x50]
006d0d8c  FMUL float ptr [0x008adfa4]
006d0d92  FLD float ptr [ESP + 0x68]
006d0d96  FMUL float ptr [0x008adfa4]
006d0d9c  FLD float ptr [ESP + 0x50]
006d0da0  FADD float ptr [ESP + 0x10]
006d0da4  FSTP float ptr [ESP + 0x10]
006d0da8  FXCH
006d0daa  FADD float ptr [ESP + 0x14]
006d0dae  FSTP float ptr [ESP + 0x14]
006d0db2  FADD float ptr [ESP + 0x18]
006d0db6  FSTP float ptr [ESP + 0x18]
006d0dba  FLD float ptr [ESP + 0x38]
006d0dbe  LEA EAX,[ESP + 0x30]
006d0dc2  FSUB float ptr [0x00890cd4]
006d0dc8  PUSH EAX
006d0dc9  MOV ECX,EAX
006d0dcb  PUSH ECX
006d0dcc  FSTP float ptr [ESP + 0x40]
006d0dd0  MOV dword ptr [ESP + 0x28],0x0
006d0dd8  MOV dword ptr [ESP + 0x2c],0x0
006d0de0  MOV dword ptr [ESP + 0x30],0x3f800000
006d0de8  CALL 0x0045f490
006d0ded  FLD float ptr [ESP + 0x38]
006d0df1  FADD float ptr [ESP + 0x18]
006d0df5  LEA EDX,[ESP + 0x28]
006d0df9  PUSH EDX
006d0dfa  LEA EAX,[ESP + 0x4c]
006d0dfe  FSTP float ptr [ESP + 0x4c]
006d0e02  PUSH EAX
006d0e03  FLD float ptr [ESP + 0x44]
006d0e07  LEA ECX,[ESP + 0x20]
006d0e0b  FADD float ptr [ESP + 0x24]
006d0e0f  PUSH ECX
006d0e10  LEA EDX,[ESP + 0x84]
006d0e17  PUSH EDX
006d0e18  FSTP float ptr [ESP + 0x5c]
006d0e1c  FLD float ptr [ESP + 0x50]
006d0e20  FADD float ptr [ESP + 0x30]
006d0e24  FSTP float ptr [ESP + 0x60]
006d0e28  CALL 0x006cf0a0
006d0e2d  ADD ESP,0x18
006d0e30  PUSH 0x0
006d0e32  LEA EAX,[ESP + 0x74]
006d0e36  PUSH EAX
006d0e37  MOV ECX,EDI
006d0e39  CALL 0x004700d0
006d0e3e  MOV EAX,[0x00911020]
006d0e43  TEST EAX,EAX
006d0e45  JNZ 0x006d0e64
006d0e47  MOV dword ptr [EDI + 0x2b0],0x0
006d0e51  MOV EAX,[0x00911020]
006d0e56  TEST EAX,EAX
006d0e58  JNZ 0x006d0e64
006d0e5a  MOV dword ptr [EDI + 0xb4],0x0
006d0e64  MOV dword ptr [EDI + 0xbc],0x3f800000
006d0e6e  MOV ECX,dword ptr [0x008f9348]
006d0e74  MOV dword ptr [EDI + 0xc0],ECX
006d0e7a  MOV EAX,[0x00911020]
006d0e7f  TEST EAX,EAX
006d0e81  JNZ 0x006d0e8c
006d0e83  MOV word ptr [EDI + 0xc4],0x65db
006d0e8c  POP EDI
006d0e8d  POP ESI
006d0e8e  MOV ESP,EBP
006d0e90  POP EBP
006d0e91  RET
