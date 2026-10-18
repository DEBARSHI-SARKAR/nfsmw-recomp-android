005f7d80  PUSH -0x1
005f7d82  PUSH 0x875dbc
005f7d87  MOV EAX,FS:[0x0]
005f7d8d  PUSH EAX
005f7d8e  MOV dword ptr FS:[0x0],ESP
005f7d95  PUSH ECX
005f7d96  PUSH EBX
005f7d97  PUSH EBP
005f7d98  PUSH ESI
005f7d99  MOV ESI,ECX
005f7d9b  PUSH EDI
005f7d9c  LEA EDI,[ESI + 0x8]
005f7d9f  PUSH 0x1
005f7da1  MOV ECX,EDI
005f7da3  MOV dword ptr [ESP + 0x14],ESI
005f7da7  CALL 0x005d8660
005f7dac  XOR EBX,EBX
005f7dae  MOV EAX,ESI
005f7db0  NEG EAX
005f7db2  SBB EAX,EAX
005f7db4  AND EAX,EDI
005f7db6  PUSH EAX
005f7db7  MOV ECX,ESI
005f7db9  MOV dword ptr [ESP + 0x20],EBX
005f7dbd  CALL 0x0042e340
005f7dc2  MOV EAX,dword ptr [ESP + 0x24]
005f7dc6  LEA EBP,[ESI + 0x7c]
005f7dc9  MOV dword ptr [ESI],0x8a3ab4
005f7dcf  MOV dword ptr [ESI + 0x18],EAX
005f7dd2  MOV dword ptr [ESI + 0x1c],EBX
005f7dd5  MOV dword ptr [ESI + 0x20],EBX
005f7dd8  MOV dword ptr [ESI + 0x24],EBX
005f7ddb  MOV dword ptr [ESI + 0x28],EBX
005f7dde  MOV dword ptr [ESI + 0x2c],EBX
005f7de1  MOV dword ptr [ESI + 0x30],EBX
005f7de4  MOV dword ptr [ESI + 0x34],EBX
005f7de7  MOV dword ptr [ESI + 0x3c],EBX
005f7dea  MOV dword ptr [ESI + 0x40],EBX
005f7ded  MOV dword ptr [ESI + 0x48],EBX
005f7df0  MOV dword ptr [ESI + 0x4c],EBX
005f7df3  MOV dword ptr [ESI + 0x50],EBX
005f7df6  MOV dword ptr [ESI + 0x54],EBX
005f7df9  MOV dword ptr [ESI + 0x58],EBX
005f7dfc  MOV dword ptr [ESI + 0x5c],EBX
005f7dff  MOV dword ptr [ESI + 0x60],EBX
005f7e02  MOV dword ptr [ESI + 0x64],EBX
005f7e05  MOV dword ptr [ESI + 0x68],EBX
005f7e08  MOV dword ptr [ESI + 0x6c],EBX
005f7e0b  MOV dword ptr [ESI + 0x70],EBX
005f7e0e  MOV dword ptr [ESI + 0x74],EBX
005f7e11  MOV dword ptr [ESI + 0x78],EBX
005f7e14  MOV dword ptr [EBP + 0x4],EBX
005f7e17  MOV dword ptr [EBP + 0x8],EBX
005f7e1a  MOV dword ptr [EBP + 0xc],EBX
005f7e1d  LEA EDI,[ESI + 0x8c]
005f7e23  MOV ECX,EDI
005f7e25  MOV byte ptr [ESP + 0x1c],0x2
005f7e2a  CALL 0x005e6a30
005f7e2f  MOV dword ptr [EDI + 0x4],EAX
005f7e32  MOV byte ptr [EAX + 0x15],0x1
005f7e36  MOV EAX,dword ptr [EDI + 0x4]
005f7e39  MOV dword ptr [EAX + 0x4],EAX
005f7e3c  MOV EAX,dword ptr [EDI + 0x4]
005f7e3f  MOV dword ptr [EAX],EAX
005f7e41  MOV EAX,dword ptr [EDI + 0x4]
005f7e44  MOV dword ptr [EAX + 0x8],EAX
005f7e47  MOV dword ptr [EDI + 0x8],EBX
005f7e4a  LEA EDI,[ESI + 0x98]
005f7e50  MOV ECX,EDI
005f7e52  MOV byte ptr [ESP + 0x1c],0x3
005f7e57  CALL 0x005e6b90
005f7e5c  MOV dword ptr [EDI + 0x4],EAX
005f7e5f  MOV byte ptr [EAX + 0x21],0x1
005f7e63  MOV EAX,dword ptr [EDI + 0x4]
005f7e66  MOV dword ptr [EAX + 0x4],EAX
005f7e69  MOV EAX,dword ptr [EDI + 0x4]
005f7e6c  MOV dword ptr [EAX],EAX
005f7e6e  MOV EAX,dword ptr [EDI + 0x4]
005f7e71  MOV dword ptr [EAX + 0x8],EAX
005f7e74  MOV dword ptr [EDI + 0x8],EBX
005f7e77  MOV byte ptr [ESP + 0x1c],0x4
005f7e7c  MOV dword ptr [ESI + 0xa4],EBX
005f7e82  LEA EDI,[ESI + 0x12c]
005f7e88  MOV ECX,EDI
005f7e8a  MOV dword ptr [ESI + 0xa8],EBX
005f7e90  MOV dword ptr [ESI + 0xac],EBX
005f7e96  MOV dword ptr [ESI + 0xb0],EBX
005f7e9c  MOV dword ptr [ESI + 0xb4],EBX
005f7ea2  MOV dword ptr [ESI + 0x108],EBX
005f7ea8  MOV dword ptr [ESI + 0x10c],EBX
005f7eae  MOV byte ptr [ESI + 0x110],BL
005f7eb4  MOV byte ptr [ESI + 0x111],BL
005f7eba  MOV dword ptr [ESI + 0x114],EBX
005f7ec0  MOV byte ptr [ESI + 0x118],BL
005f7ec6  MOV dword ptr [ESI + 0x11c],EBX
005f7ecc  MOV dword ptr [ESI + 0x120],EBX
005f7ed2  MOV dword ptr [ESI + 0x124],EBX
005f7ed8  MOV dword ptr [ESI + 0x128],EBX
005f7ede  CALL 0x005e6c40
005f7ee3  MOV dword ptr [EDI + 0x4],EAX
005f7ee6  MOV byte ptr [EAX + 0x15],0x1
005f7eea  MOV EAX,dword ptr [EDI + 0x4]
005f7eed  MOV dword ptr [EAX + 0x4],EAX
005f7ef0  MOV EAX,dword ptr [EDI + 0x4]
005f7ef3  MOV dword ptr [EAX],EAX
005f7ef5  MOV EAX,dword ptr [EDI + 0x4]
005f7ef8  MOV dword ptr [EAX + 0x8],EAX
005f7efb  MOV dword ptr [EDI + 0x8],EBX
005f7efe  LEA EDI,[ESI + 0x138]
005f7f04  MOV ECX,EDI
005f7f06  MOV byte ptr [ESP + 0x1c],0x5
005f7f0b  CALL 0x005e6c40
005f7f10  MOV dword ptr [EDI + 0x4],EAX
005f7f13  MOV byte ptr [EAX + 0x15],0x1
005f7f17  MOV EAX,dword ptr [EDI + 0x4]
005f7f1a  MOV dword ptr [EAX + 0x4],EAX
005f7f1d  MOV EAX,dword ptr [EDI + 0x4]
005f7f20  MOV dword ptr [EAX],EAX
005f7f22  MOV EAX,dword ptr [EDI + 0x4]
005f7f25  MOV dword ptr [EAX + 0x8],EAX
005f7f28  MOV dword ptr [EDI + 0x8],EBX
005f7f2b  PUSH 0x5ddef0
005f7f30  PUSH 0x5e5040
005f7f35  PUSH 0x8
005f7f37  PUSH 0x24
005f7f39  LEA ECX,[ESI + 0x144]
005f7f3f  PUSH ECX
005f7f40  MOV byte ptr [ESP + 0x30],0x6
005f7f45  CALL 0x007c90a0
005f7f4a  LEA EDI,[ESI + 0x2a4]
005f7f50  MOV ECX,EDI
005f7f52  MOV byte ptr [ESP + 0x1c],0x7
005f7f57  CALL 0x005e60d0
005f7f5c  MOV dword ptr [EDI + 0x4],EAX
005f7f5f  MOV dword ptr [EDI + 0x8],EBX
005f7f62  MOV byte ptr [ESI + 0x2b4],BL
005f7f68  MOV byte ptr [ESI + 0x2b5],BL
005f7f6e  MOV dword ptr [ESI + 0x2b8],EBX
005f7f74  MOV dword ptr [ESI + 0x2bc],EBX
005f7f7a  MOV dword ptr [ESI + 0x2c0],EBX
005f7f80  MOV dword ptr [ESI + 0x2c4],EBX
005f7f86  MOV byte ptr [ESI + 0x2c8],BL
005f7f8c  MOV byte ptr [ESI + 0x2c9],BL
005f7f92  MOV byte ptr [ESI + 0x2ca],BL
005f7f98  MOV byte ptr [ESI + 0x2cb],BL
005f7f9e  MOV byte ptr [ESI + 0x2cc],BL
005f7fa4  MOV byte ptr [ESI + 0x2cd],BL
005f7faa  MOV byte ptr [ESI + 0x2ce],BL
005f7fb0  MOV byte ptr [ESI + 0x2cf],BL
005f7fb6  MOV byte ptr [ESI + 0x2d0],BL
005f7fbc  MOV dword ptr [ESI + 0x2d4],EBX
005f7fc2  MOV ECX,dword ptr [0x0090dcbc]
005f7fc8  PUSH 0x5cea9d46
005f7fcd  MOV byte ptr [ESP + 0x20],0x8
005f7fd2  CALL 0x00455bc0
005f7fd7  MOV dword ptr [ESI + 0x54],EAX
005f7fda  MOV ECX,dword ptr [0x0090dcbc]
005f7fe0  PUSH 0xe4c3d904
005f7fe5  CALL 0x00455bc0
005f7fea  MOV dword ptr [ESI + 0x58],EAX
005f7fed  MOV dword ptr [ESI + 0x38],EBX
005f7ff0  XOR EAX,EAX
005f7ff2  MOV dword ptr [ESI + 0x44],EBX
005f7ff5  MOV ECX,0x10
005f7ffa  LEA EDI,[ESI + 0x264]
005f8000  STOSD.REP ES:EDI
005f8002  MOV ECX,0x14
005f8007  LEA EDI,[ESI + 0xb8]
005f800d  STOSD.REP ES:EDI
005f800f  PUSH 0x10
005f8011  MOV ECX,EBP
005f8013  CALL 0x005f1a10
005f8018  PUSH EBX
005f8019  PUSH 0x4000
005f801e  CALL 0x00465a70
005f8023  ADD ESP,0x8
005f8026  MOV ECX,ESI
005f8028  MOV dword ptr [ESI + 0x120],EAX
005f802e  MOV dword ptr [ESI + 0x124],EAX
005f8034  MOV dword ptr [ESI + 0x128],0x4000
005f803e  CALL 0x005f7730
005f8043  MOV ECX,dword ptr [ESP + 0x14]
005f8047  POP EDI
005f8048  MOV EAX,ESI
005f804a  POP ESI
005f804b  POP EBP
005f804c  POP EBX
005f804d  MOV dword ptr FS:[0x0],ECX
005f8054  ADD ESP,0x10
005f8057  RET 0x4
