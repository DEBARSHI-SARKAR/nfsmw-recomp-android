004c9cb0  PUSH -0x1
004c9cb2  PUSH 0x86c064
004c9cb7  MOV EAX,FS:[0x0]
004c9cbd  PUSH EAX
004c9cbe  MOV dword ptr FS:[0x0],ESP
004c9cc5  SUB ESP,0x44
004c9cc8  PUSH EBX
004c9cc9  PUSH ESI
004c9cca  MOV ESI,ECX
004c9ccc  PUSH EDI
004c9ccd  MOV dword ptr [ESP + 0xc],ESI
004c9cd1  CALL 0x004c0a90
004c9cd6  PUSH 0x4aba50
004c9cdb  XOR EBX,EBX
004c9cdd  PUSH 0x4b8900
004c9ce2  MOV dword ptr [ESI + 0x50],EBX
004c9ce5  MOV dword ptr [ESI + 0x54],EBX
004c9ce8  MOV dword ptr [ESI + 0x58],EBX
004c9ceb  PUSH 0x4
004c9ced  PUSH 0x44
004c9cef  LEA EAX,[ESI + 0xbc]
004c9cf5  MOV EDI,0x1
004c9cfa  PUSH EAX
004c9cfb  MOV dword ptr [ESP + 0x6c],EBX
004c9cff  MOV dword ptr [ESI + 0x60],EBX
004c9d02  MOV dword ptr [ESI + 0x80],EBX
004c9d08  MOV dword ptr [ESI + 0xa0],EBX
004c9d0e  MOV byte ptr [ESI + 0xb0],BL
004c9d14  MOV dword ptr [ESI + 0xb4],EDI
004c9d1a  MOV dword ptr [ESI + 0xb8],EBX
004c9d20  CALL 0x007c90a0
004c9d25  MOV ECX,dword ptr [ESP + 0x60]
004c9d29  MOV word ptr [ESI + 0x1cc],BX
004c9d30  MOV word ptr [ESI + 0x1ce],BX
004c9d37  MOV dword ptr [ESI + 0x1d0],EBX
004c9d3d  MOV dword ptr [ESI + 0x1d4],EBX
004c9d43  MOV dword ptr [ESI + 0x1d8],EBX
004c9d49  MOV dword ptr [ESI + 0x1dc],EBX
004c9d4f  MOV dword ptr [ESI + 0x1e0],EBX
004c9d55  MOV dword ptr [ESI + 0x1e4],EBX
004c9d5b  MOV dword ptr [ESI + 0x1e8],EBX
004c9d61  PUSH EBX
004c9d62  MOV dword ptr [ESI + 0x1f0],EDI
004c9d68  PUSH EBX
004c9d69  MOV dword ptr [ESI + 0x1ec],EBX
004c9d6f  LEA EDI,[ESI + 0x200]
004c9d75  PUSH ECX
004c9d76  MOV ECX,EDI
004c9d78  MOV byte ptr [ESP + 0x64],0x1
004c9d7d  MOV dword ptr [ESI + 0x1f4],0xffffffff
004c9d87  MOV byte ptr [ESI + 0x1f8],BL
004c9d8d  CALL 0x004ab1c0
004c9d92  PUSH EBX
004c9d93  PUSH EBX
004c9d94  LEA ECX,[ESI + 0x214]
004c9d9a  PUSH EBX
004c9d9b  MOV byte ptr [ESP + 0x64],0x2
004c9da0  CALL 0x004ab370
004c9da5  MOV EDX,dword ptr [ESP + 0x64]
004c9da9  MOV EAX,dword ptr [ESP + 0x68]
004c9dad  MOV ECX,dword ptr [ESP + 0x6c]
004c9db1  MOV dword ptr [ESI + 0x230],EAX
004c9db7  MOV dword ptr [ESI + 0x228],EDX
004c9dbd  MOV byte ptr [ESI + 0x22c],0x1
004c9dc4  MOV byte ptr [ESI + 0x22d],BL
004c9dca  MOV dword ptr [ESI + 0x234],ECX
004c9dd0  MOV dword ptr [ESI + 0x238],EBX
004c9dd6  MOV dword ptr [ESI + 0x23c],EBX
004c9ddc  MOV dword ptr [ESI + 0x240],EBX
004c9de2  MOV dword ptr [ESI + 0x244],EBX
004c9de8  MOV dword ptr [ESI + 0x248],EBX
004c9dee  MOV dword ptr [ESI + 0x250],0xffffffff
004c9df8  MOV dword ptr [ESI + 0x254],EBX
004c9dfe  MOV dword ptr [ESI + 0x258],0x2
004c9e08  FLD float ptr [ESI + 0x50]
004c9e0b  FLD float ptr [ESI + 0x54]
004c9e0e  MOV EDX,dword ptr [ESI + 0x58]
004c9e11  FXCH
004c9e13  MOV byte ptr [ESP + 0x58],0x3
004c9e18  FSTP float ptr [ESI + 0x70]
004c9e1b  MOV dword ptr [ESP + 0x60],EDX
004c9e1f  MOV EAX,EDX
004c9e21  FSTP float ptr [ESI + 0x74]
004c9e24  MOV dword ptr [ESI + 0x78],EAX
004c9e27  MOV EAX,0x3f800000
004c9e2c  PUSH EDI
004c9e2d  LEA ECX,[ESP + 0x2c]
004c9e31  MOV dword ptr [ESI + 0x10],EAX
004c9e34  MOV dword ptr [ESI + 0x14],EBX
004c9e37  MOV dword ptr [ESI + 0x18],EBX
004c9e3a  MOV dword ptr [ESI + 0x1c],EBX
004c9e3d  MOV dword ptr [ESI + 0x20],EBX
004c9e40  MOV dword ptr [ESI + 0x24],EAX
004c9e43  MOV dword ptr [ESI + 0x28],EBX
004c9e46  MOV dword ptr [ESI + 0x2c],EBX
004c9e49  MOV dword ptr [ESI + 0x30],EBX
004c9e4c  MOV dword ptr [ESI + 0x34],EBX
004c9e4f  MOV dword ptr [ESI + 0x38],EAX
004c9e52  MOV dword ptr [ESI + 0x3c],EBX
004c9e55  MOV dword ptr [ESI + 0x40],EBX
004c9e58  MOV dword ptr [ESI + 0x44],EBX
004c9e5b  MOV dword ptr [ESI + 0x48],EBX
004c9e5e  MOV dword ptr [ESI + 0x4c],EAX
004c9e61  CALL 0x00403c30
004c9e66  PUSH EBX
004c9e67  PUSH 0xf1f5fbc7
004c9e6c  LEA ECX,[ESP + 0x30]
004c9e70  MOV byte ptr [ESP + 0x60],0x4
004c9e75  CALL 0x00454810
004c9e7a  CMP EAX,EBX
004c9e7c  JNZ 0x004c9e88
004c9e7e  PUSH 0xc
004c9e80  CALL 0x006269b0
004c9e85  ADD ESP,0x4
004c9e88  PUSH EBX
004c9e89  PUSH EBX
004c9e8a  PUSH EAX
004c9e8b  LEA ECX,[ESP + 0x20]
004c9e8f  CALL 0x004ab2c0
004c9e94  PUSH EBX
004c9e95  PUSH 0x7a7a3e5
004c9e9a  LEA ECX,[ESP + 0x30]
004c9e9e  MOV byte ptr [ESP + 0x60],0x5
004c9ea3  CALL 0x00454810
004c9ea8  CMP EAX,EBX
004c9eaa  JNZ 0x004c9eb6
004c9eac  PUSH 0xc
004c9eae  CALL 0x006269b0
004c9eb3  ADD ESP,0x4
004c9eb6  PUSH EBX
004c9eb7  PUSH EBX
004c9eb8  PUSH EAX
004c9eb9  LEA ECX,[ESP + 0x48]
004c9ebd  CALL 0x004ab5d0
004c9ec2  MOV ECX,dword ptr [ESP + 0x44]
004c9ec6  MOV byte ptr [ESP + 0x58],0x6
004c9ecb  CALL 0x00452940
004c9ed0  DEC EAX
004c9ed1  MOV dword ptr [ESI + 0x1fc],EAX
004c9ed7  CMP dword ptr [ESI + 0x228],EBX
004c9edd  JNZ 0x004c9f4d
004c9edf  PUSH EBX
004c9ee0  PUSH 0xb12ccb69
004c9ee5  MOV ECX,EDI
004c9ee7  CALL 0x00454810
004c9eec  CMP EAX,EBX
004c9eee  JNZ 0x004c9efa
004c9ef0  PUSH 0x4
004c9ef2  CALL 0x006269b0
004c9ef7  ADD ESP,0x4
004c9efa  MOV EDX,dword ptr [EAX]
004c9efc  MOV EAX,dword ptr [ESI + 0x208]
004c9f02  MOV ECX,dword ptr [EAX + 0x28]
004c9f05  MOV EAX,0x4
004c9f0a  SUB EAX,ECX
004c9f0c  CMP EAX,EBX
004c9f0e  JG 0x004c9f14
004c9f10  XOR EAX,EAX
004c9f12  JMP 0x004c9f1e
004c9f14  CMP EAX,0x4
004c9f17  MOV ECX,0x4
004c9f1c  JG 0x004c9f20
004c9f1e  MOV ECX,EAX
004c9f20  CMP EDX,EBX
004c9f22  JLE 0x004c9ffa
004c9f28  CMP EDX,0x4
004c9f2b  MOV EAX,EDX
004c9f2d  JLE 0x004c9f34
004c9f2f  MOV EAX,0x4
004c9f34  ADD EAX,ECX
004c9f36  CMP EAX,EBX
004c9f38  JLE 0x004c9f46
004c9f3a  MOV EBX,EAX
004c9f3c  CMP EAX,0x4
004c9f3f  MOV EAX,0x4
004c9f44  JG 0x004c9f48
004c9f46  MOV EAX,EBX
004c9f48  MOV [0x00913c48],EAX
004c9f4d  MOV ECX,dword ptr [0x00913c48]
004c9f53  PUSH ECX
004c9f54  PUSH ESI
004c9f55  CALL 0x004d5a90
004c9f5a  PUSH EAX
004c9f5b  PUSH 0x50eab0e6
004c9f60  CALL 0x00456050
004c9f65  ADD ESP,0x10
004c9f68  PUSH EAX
004c9f69  LEA ECX,[ESI + 0x214]
004c9f6f  CALL 0x0045a760
004c9f74  LEA EDX,[ESP + 0x10]
004c9f78  PUSH EDX
004c9f79  LEA EAX,[ESP + 0x18]
004c9f7d  PUSH EAX
004c9f7e  CALL 0x0066c3a0
004c9f83  FSTP float ptr [ESI]
004c9f85  MOV EAX,dword ptr [ESP + 0x24]
004c9f89  MOV ECX,dword ptr [EAX + 0x54]
004c9f8c  MOV dword ptr [ESI + 0x4],ECX
004c9f8f  MOV EDX,dword ptr [EAX + 0x5c]
004c9f92  MOV dword ptr [ESI + 0x8],EDX
004c9f95  MOV EAX,dword ptr [EAX + 0x58]
004c9f98  MOV dword ptr [ESI + 0xc],EAX
004c9f9b  MOV EAX,dword ptr [ESI + 0x228]
004c9fa1  ADD ESP,0x8
004c9fa4  CMP EAX,0x3
004c9fa7  JZ 0x004c9fb3
004c9fa9  CMP EAX,0x4
004c9fac  JLE 0x004c9fba
004c9fae  CMP EAX,0x6
004c9fb1  JG 0x004c9fba
004c9fb3  MOV byte ptr [ESI + 0x22d],0x1
004c9fba  LEA ECX,[ESP + 0x3c]
004c9fbe  MOV byte ptr [ESP + 0x58],0x5
004c9fc3  CALL 0x0045a430
004c9fc8  LEA ECX,[ESP + 0x14]
004c9fcc  MOV byte ptr [ESP + 0x58],0x4
004c9fd1  CALL 0x0045a430
004c9fd6  LEA ECX,[ESP + 0x28]
004c9fda  MOV byte ptr [ESP + 0x58],0x3
004c9fdf  CALL 0x0045a430
004c9fe4  MOV ECX,dword ptr [ESP + 0x50]
004c9fe8  POP EDI
004c9fe9  MOV EAX,ESI
004c9feb  POP ESI
004c9fec  POP EBX
004c9fed  MOV dword ptr FS:[0x0],ECX
004c9ff4  ADD ESP,0x50
004c9ff7  RET 0x10
004c9ffa  XOR EAX,EAX
004c9ffc  JMP 0x004c9f34
