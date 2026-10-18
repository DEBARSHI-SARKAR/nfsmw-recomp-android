006c7cf0  PUSH EBP
006c7cf1  MOV EBP,ESP
006c7cf3  AND ESP,0xfffffff0
006c7cf6  SUB ESP,0x11c
006c7cfc  MOV EAX,dword ptr [EBP + 0xc]
006c7cff  MOV ECX,dword ptr [0x008fae94]
006c7d05  MOV EDX,dword ptr [0x008fae98]
006c7d0b  PUSH ESI
006c7d0c  MOV ESI,dword ptr [EAX]
006c7d0e  MOV EAX,dword ptr [EBP + 0x8]
006c7d11  ADD ESI,0x80
006c7d17  PUSH ESI
006c7d18  MOV dword ptr [ESP + 0x44],ECX
006c7d1c  PUSH EAX
006c7d1d  LEA ECX,[ESP + 0xa8]
006c7d24  PUSH ECX
006c7d25  MOV dword ptr [ESP + 0x1c],0x3f800000
006c7d2d  MOV dword ptr [ESP + 0x20],0x0
006c7d35  MOV dword ptr [ESP + 0x24],0x0
006c7d3d  MOV dword ptr [ESP + 0x28],0x0
006c7d45  MOV dword ptr [ESP + 0x2c],0x0
006c7d4d  MOV dword ptr [ESP + 0x30],0x3f800000
006c7d55  MOV dword ptr [ESP + 0x34],0x0
006c7d5d  MOV dword ptr [ESP + 0x38],0x0
006c7d65  MOV dword ptr [ESP + 0x3c],0x0
006c7d6d  MOV dword ptr [ESP + 0x40],0x0
006c7d75  MOV dword ptr [ESP + 0x44],0x3f800000
006c7d7d  MOV dword ptr [ESP + 0x48],0x0
006c7d85  MOV dword ptr [ESP + 0x54],0x0
006c7d8d  MOV dword ptr [ESP + 0x58],0x3f800000
006c7d95  MOV dword ptr [ESP + 0x50],EDX
006c7d99  CALL 0x007e7d5e
006c7d9e  LEA EDX,[ESP + 0x10]
006c7da2  PUSH EDX
006c7da3  LEA EAX,[ESP + 0xa4]
006c7daa  PUSH EAX
006c7dab  MOV ECX,EAX
006c7dad  PUSH ECX
006c7dae  CALL 0x007e7d5e
006c7db3  MOV ECX,dword ptr [0x00982c80]
006c7db9  MOV AL,byte ptr [ECX + 0x40]
006c7dbc  TEST AL,AL
006c7dbe  JZ 0x006c7dd8
006c7dc0  MOV EAX,dword ptr [ECX + 0x48]
006c7dc3  MOV ECX,dword ptr [ECX + 0x44]
006c7dc6  MOV ECX,dword ptr [ECX + 0x81c]
006c7dcc  LEA ESI,[ESP + 0xa0]
006c7dd3  JMP 0x006c7efb
006c7dd8  MOV EDX,dword ptr [0x00982a20]
006c7dde  MOV EAX,dword ptr [EDX + 0x4]
006c7de1  IMUL EAX,EAX,0x70
006c7de4  MOV ECX,dword ptr [EAX + 0x9195e0]
006c7dea  PUSH ECX
006c7deb  LEA EDX,[ESP + 0xe4]
006c7df2  PUSH EDX
006c7df3  CALL 0x006bde60
006c7df8  ADD ESP,0x8
006c7dfb  LEA EAX,[ESP + 0x10]
006c7dff  PUSH EAX
006c7e00  PUSH ESI
006c7e01  LEA ECX,[ESP + 0x68]
006c7e05  PUSH ECX
006c7e06  CALL 0x007e7d5e
006c7e0b  LEA EDX,[ESP + 0x60]
006c7e0f  PUSH EDX
006c7e10  LEA EAX,[ESP + 0xe4]
006c7e17  PUSH EAX
006c7e18  MOV ECX,EDX
006c7e1a  PUSH ECX
006c7e1b  CALL 0x007e7d5e
006c7e20  MOV ECX,dword ptr [0x00982c80]
006c7e26  MOV EAX,dword ptr [ECX + 0x48]
006c7e29  MOV ECX,dword ptr [ECX + 0x44]
006c7e2c  MOV ECX,dword ptr [ECX + 0x81c]
006c7e32  MOV EDX,dword ptr [EAX]
006c7e34  LEA ESI,[ESP + 0x60]
006c7e38  PUSH ESI
006c7e39  PUSH ECX
006c7e3a  PUSH EAX
006c7e3b  CALL dword ptr [EDX + 0x98]
006c7e41  FLD float ptr [ESP + 0x6c]
006c7e45  FMUL float ptr [0x00890ec4]
006c7e4b  MOV ECX,dword ptr [0x00982c80]
006c7e51  MOV dword ptr [ESP + 0x14],0x0
006c7e59  MOV dword ptr [ESP + 0x18],0x0
006c7e61  FSTP float ptr [ESP + 0x10]
006c7e65  MOV dword ptr [ESP + 0x1c],0x0
006c7e6d  FLD float ptr [ESP + 0x7c]
006c7e71  MOV dword ptr [ESP + 0x24],0x3f800000
006c7e79  FMUL float ptr [0x00890ec4]
006c7e7f  MOV dword ptr [ESP + 0x28],0x0
006c7e87  MOV dword ptr [ESP + 0x2c],0x0
006c7e8f  MOV dword ptr [ESP + 0x34],0x0
006c7e97  FSTP float ptr [ESP + 0x20]
006c7e9b  MOV dword ptr [ESP + 0x38],0x3f800000
006c7ea3  FLD float ptr [ESP + 0x8c]
006c7eaa  MOV dword ptr [ESP + 0x3c],0x0
006c7eb2  FMUL float ptr [0x00890ec4]
006c7eb8  MOV dword ptr [ESP + 0x44],0x0
006c7ec0  MOV dword ptr [ESP + 0x48],0x0
006c7ec8  MOV dword ptr [ESP + 0x4c],0x3f800000
006c7ed0  FSTP float ptr [ESP + 0x30]
006c7ed4  LEA ESI,[ESP + 0x10]
006c7ed8  FLD float ptr [ESP + 0x9c]
006c7edf  FMUL float ptr [0x00890ec4]
006c7ee5  FADD float ptr [0x008933d4]
006c7eeb  FSTP float ptr [ESP + 0x40]
006c7eef  MOV EAX,dword ptr [ECX + 0x48]
006c7ef2  MOV ECX,dword ptr [ECX + 0x44]
006c7ef5  MOV ECX,dword ptr [ECX + 0x77c]
006c7efb  MOV EDX,dword ptr [EAX]
006c7efd  PUSH ESI
006c7efe  PUSH ECX
006c7eff  PUSH EAX
006c7f00  CALL dword ptr [EDX + 0x98]
006c7f06  MOV ECX,dword ptr [0x00982c80]
006c7f0c  MOV dword ptr [ESP + 0x50],0x0
006c7f14  MOV dword ptr [ESP + 0x54],0x0
006c7f1c  MOV dword ptr [ESP + 0x58],0x0
006c7f24  MOV dword ptr [ESP + 0x5c],0x0
006c7f2c  MOV EAX,dword ptr [ECX + 0x48]
006c7f2f  MOV ECX,dword ptr [ECX + 0x44]
006c7f32  MOV ECX,dword ptr [ECX + 0x7cc]
006c7f38  MOV EDX,dword ptr [EAX]
006c7f3a  LEA ESI,[ESP + 0x50]
006c7f3e  PUSH ESI
006c7f3f  PUSH ECX
006c7f40  PUSH EAX
006c7f41  CALL dword ptr [EDX + 0x88]
006c7f47  POP ESI
006c7f48  MOV ESP,EBP
006c7f4a  POP EBP
006c7f4b  RET
