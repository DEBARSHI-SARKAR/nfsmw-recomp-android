005e4df0  PUSH -0x1
005e4df2  PUSH 0x875188
005e4df7  MOV EAX,FS:[0x0]
005e4dfd  PUSH EAX
005e4dfe  MOV dword ptr FS:[0x0],ESP
005e4e05  SUB ESP,0x60
005e4e08  CALL 0x005e4cf0
005e4e0d  PUSH 0x0
005e4e0f  PUSH 0x0
005e4e11  PUSH EAX
005e4e12  LEA ECX,[ESP + 0x18]
005e4e16  CALL 0x005e2580
005e4e1b  PUSH 0x0
005e4e1d  PUSH 0x9f743a0e
005e4e22  LEA ECX,[ESP + 0x14]
005e4e26  MOV dword ptr [ESP + 0x70],0x0
005e4e2e  CALL 0x00454810
005e4e33  TEST EAX,EAX
005e4e35  JNZ 0x005e4e41
005e4e37  PUSH 0xc
005e4e39  CALL 0x006269b0
005e4e3e  ADD ESP,0x4
005e4e41  FLD float ptr [EAX]
005e4e43  PUSH ESI
005e4e44  FLD float ptr [EAX + 0x8]
005e4e47  PUSH EDI
005e4e48  FLD float ptr [EAX + 0x4]
005e4e4b  MOV EAX,dword ptr [ESP + 0x78]
005e4e4f  FCHS
005e4e51  MOV ESI,0x8a3028
005e4e56  FSTP float ptr [ESP + 0x8]
005e4e5a  MOV ECX,dword ptr [ESP + 0x8]
005e4e5e  MOV dword ptr [EAX],ECX
005e4e60  FSTP float ptr [ESP + 0xc]
005e4e64  MOV EDX,dword ptr [ESP + 0xc]
005e4e68  MOV dword ptr [EAX + 0x4],EDX
005e4e6b  FSTP float ptr [ESP + 0x10]
005e4e6f  MOV ECX,dword ptr [ESP + 0x10]
005e4e73  MOV dword ptr [EAX + 0x8],ECX
005e4e76  MOV ECX,0x10
005e4e7b  LEA EDI,[ESP + 0x28]
005e4e7f  MOVSD.REP ES:EDI,ESI
005e4e81  MOV ESI,dword ptr [ESP + 0x7c]
005e4e85  MOV dword ptr [ESP + 0x8],0x0
005e4e8d  MOV EAX,dword ptr [ESP + 0x8]
005e4e91  MOV EDX,ESI
005e4e93  MOV dword ptr [EDX],EAX
005e4e95  MOV dword ptr [ESP + 0xc],0x0
005e4e9d  MOV ECX,dword ptr [ESP + 0xc]
005e4ea1  MOV dword ptr [EDX + 0x4],ECX
005e4ea4  PUSH 0x0
005e4ea6  MOV dword ptr [ESP + 0x14],0x3f800000
005e4eae  MOV EAX,dword ptr [ESP + 0x14]
005e4eb2  PUSH 0x5a6a57c6
005e4eb7  LEA ECX,[ESP + 0x1c]
005e4ebb  MOV dword ptr [EDX + 0x8],EAX
005e4ebe  MOV dword ptr [ESP + 0x30],0x3f800000
005e4ec6  MOV dword ptr [ESP + 0x44],0x3f800000
005e4ece  MOV dword ptr [ESP + 0x58],0x3f800000
005e4ed6  MOV dword ptr [ESP + 0x6c],0x3f800000
005e4ede  MOV dword ptr [ESP + 0x68],0x0
005e4ee6  MOV dword ptr [ESP + 0x64],0x0
005e4eee  MOV dword ptr [ESP + 0x60],0x0
005e4ef6  MOV dword ptr [ESP + 0x5c],0x0
005e4efe  MOV dword ptr [ESP + 0x54],0x0
005e4f06  MOV dword ptr [ESP + 0x50],0x0
005e4f0e  MOV dword ptr [ESP + 0x4c],0x0
005e4f16  MOV dword ptr [ESP + 0x48],0x0
005e4f1e  MOV dword ptr [ESP + 0x40],0x0
005e4f26  MOV dword ptr [ESP + 0x3c],0x0
005e4f2e  MOV dword ptr [ESP + 0x38],0x0
005e4f36  MOV dword ptr [ESP + 0x34],0x0
005e4f3e  CALL 0x00454810
005e4f43  TEST EAX,EAX
005e4f45  JNZ 0x005e4f51
005e4f47  PUSH 0x4
005e4f49  CALL 0x006269b0
005e4f4e  ADD ESP,0x4
005e4f51  FLD float ptr [EAX]
005e4f53  LEA ECX,[ESP + 0x28]
005e4f57  FMUL float ptr [0x008a3874]
005e4f5d  PUSH ECX
005e4f5e  MOV EAX,ECX
005e4f60  FSTP float ptr [ESP + 0x7c]
005e4f64  MOV EDX,dword ptr [ESP + 0x7c]
005e4f68  PUSH EDX
005e4f69  PUSH EAX
005e4f6a  CALL 0x005c6bb0
005e4f6f  PUSH ESI
005e4f70  LEA ECX,[ESP + 0x38]
005e4f74  PUSH ECX
005e4f75  PUSH ESI
005e4f76  CALL 0x00401670
005e4f7b  ADD ESP,0x18
005e4f7e  LEA ECX,[ESP + 0x14]
005e4f82  MOV dword ptr [ESP + 0x70],0xffffffff
005e4f8a  CALL 0x0045a430
005e4f8f  MOV ECX,dword ptr [ESP + 0x68]
005e4f93  POP EDI
005e4f94  POP ESI
005e4f95  MOV dword ptr FS:[0x0],ECX
005e4f9c  ADD ESP,0x6c
005e4f9f  RET 0x8
