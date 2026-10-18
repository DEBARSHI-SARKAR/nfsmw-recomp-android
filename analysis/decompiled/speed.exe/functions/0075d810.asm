0075d810  PUSH -0x1
0075d812  PUSH 0x881518
0075d817  MOV EAX,FS:[0x0]
0075d81d  PUSH EAX
0075d81e  MOV dword ptr FS:[0x0],ESP
0075d825  PUSH ECX
0075d826  MOV EAX,dword ptr [ESP + 0x18]
0075d82a  PUSH ESI
0075d82b  MOV ESI,ECX
0075d82d  MOV ECX,dword ptr [ESP + 0x18]
0075d831  PUSH EAX
0075d832  PUSH ECX
0075d833  MOV ECX,ESI
0075d835  MOV dword ptr [ESP + 0xc],ESI
0075d839  CALL 0x007591c0
0075d83e  MOV dword ptr [ESI],0x8b5274
0075d844  XOR EAX,EAX
0075d846  MOV dword ptr [ESI + 0x1b0],EAX
0075d84c  MOV dword ptr [ESI + 0x1b4],EAX
0075d852  MOV dword ptr [ESI + 0x1b8],EAX
0075d858  MOV ECX,0x3f800000
0075d85d  MOV dword ptr [ESI + 0x1bc],ECX
0075d863  MOV dword ptr [ESI + 0x70],ECX
0075d866  MOV dword ptr [ESI + 0x74],EAX
0075d869  MOV dword ptr [ESI + 0x78],EAX
0075d86c  MOV dword ptr [ESI + 0x7c],EAX
0075d86f  MOV dword ptr [ESI + 0x80],EAX
0075d875  MOV dword ptr [ESI + 0x84],ECX
0075d87b  MOV dword ptr [ESI + 0x88],EAX
0075d881  MOV dword ptr [ESI + 0x8c],EAX
0075d887  MOV dword ptr [ESI + 0x90],EAX
0075d88d  MOV dword ptr [ESI + 0x94],EAX
0075d893  MOV dword ptr [ESI + 0x98],ECX
0075d899  MOV dword ptr [ESI + 0x9c],EAX
0075d89f  MOV dword ptr [ESI + 0xa0],EAX
0075d8a5  MOV dword ptr [ESI + 0xa4],EAX
0075d8ab  MOV dword ptr [ESI + 0xa8],EAX
0075d8b1  MOV dword ptr [ESI + 0xac],ECX
0075d8b7  MOV dword ptr [ESI + 0xb0],ECX
0075d8bd  MOV dword ptr [ESI + 0xb4],EAX
0075d8c3  MOV dword ptr [ESI + 0xb8],EAX
0075d8c9  MOV dword ptr [ESI + 0xbc],EAX
0075d8cf  MOV dword ptr [ESI + 0xc0],EAX
0075d8d5  MOV dword ptr [ESI + 0xc4],ECX
0075d8db  MOV dword ptr [ESI + 0xc8],EAX
0075d8e1  MOV dword ptr [ESI + 0xcc],EAX
0075d8e7  MOV dword ptr [ESI + 0xd0],EAX
0075d8ed  MOV dword ptr [ESI + 0xd4],EAX
0075d8f3  MOV dword ptr [ESI + 0xd8],ECX
0075d8f9  MOV dword ptr [ESI + 0xdc],EAX
0075d8ff  MOV dword ptr [ESI + 0xe0],EAX
0075d905  MOV dword ptr [ESI + 0xe4],EAX
0075d90b  MOV dword ptr [ESI + 0xe8],EAX
0075d911  MOV dword ptr [ESI + 0xec],ECX
0075d917  MOV dword ptr [ESI + 0xf0],ECX
0075d91d  MOV dword ptr [ESI + 0xf4],EAX
0075d923  MOV dword ptr [ESI + 0xf8],EAX
0075d929  MOV dword ptr [ESI + 0xfc],EAX
0075d92f  MOV dword ptr [ESI + 0x100],EAX
0075d935  MOV dword ptr [ESI + 0x104],ECX
0075d93b  MOV dword ptr [ESI + 0x108],EAX
0075d941  MOV dword ptr [ESI + 0x10c],EAX
0075d947  MOV dword ptr [ESI + 0x110],EAX
0075d94d  MOV dword ptr [ESI + 0x114],EAX
0075d953  MOV dword ptr [ESI + 0x118],ECX
0075d959  MOV dword ptr [ESI + 0x11c],EAX
0075d95f  MOV dword ptr [ESI + 0x120],EAX
0075d965  MOV dword ptr [ESI + 0x124],EAX
0075d96b  MOV dword ptr [ESI + 0x128],EAX
0075d971  MOV dword ptr [ESP + 0x10],EAX
0075d975  MOV dword ptr [ESI + 0x12c],ECX
0075d97b  MOV dword ptr [ESI + 0x130],ECX
0075d981  MOV dword ptr [ESI + 0x134],EAX
0075d987  MOV dword ptr [ESI + 0x138],EAX
0075d98d  MOV dword ptr [ESI + 0x13c],EAX
0075d993  MOV dword ptr [ESI + 0x140],EAX
0075d999  MOV dword ptr [ESI + 0x144],ECX
0075d99f  MOV dword ptr [ESI + 0x148],EAX
0075d9a5  MOV dword ptr [ESI + 0x14c],EAX
0075d9ab  MOV dword ptr [ESI + 0x150],EAX
0075d9b1  MOV dword ptr [ESI + 0x154],EAX
0075d9b7  MOV dword ptr [ESI + 0x158],ECX
0075d9bd  MOV dword ptr [ESI + 0x15c],EAX
0075d9c3  MOV dword ptr [ESI + 0x160],EAX
0075d9c9  MOV dword ptr [ESI + 0x164],EAX
0075d9cf  MOV dword ptr [ESI + 0x168],EAX
0075d9d5  MOV dword ptr [ESI + 0x16c],ECX
0075d9db  MOV ECX,dword ptr [ESP + 0x20]
0075d9df  CMP byte ptr [ECX + 0xc],AL
0075d9e2  SETZ DL
0075d9e5  PUSH EAX
0075d9e6  MOV EAX,dword ptr [ECX + 0x8]
0075d9e9  MOV ECX,ESI
0075d9eb  PUSH EDX
0075d9ec  PUSH 0x5
0075d9ee  PUSH EAX
0075d9ef  CALL 0x0075d220
0075d9f4  MOV ECX,dword ptr [ESP + 0x8]
0075d9f8  MOV EAX,ESI
0075d9fa  POP ESI
0075d9fb  MOV dword ptr FS:[0x0],ECX
0075da02  ADD ESP,0x10
0075da05  RET 0xc
