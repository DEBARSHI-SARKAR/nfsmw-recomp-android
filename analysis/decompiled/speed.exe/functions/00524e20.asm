00524e20  MOV ECX,dword ptr [ESP + 0x4]
00524e24  SUB ESP,0x18
00524e27  TEST ECX,ECX
00524e29  JZ 0x00524eba
00524e2f  MOV EAX,dword ptr [ECX + 0x2c]
00524e32  MOV EDX,dword ptr [EAX + 0x1c]
00524e35  MOV dword ptr [ESP],EDX
00524e38  MOV EDX,dword ptr [EAX + 0x20]
00524e3b  MOV dword ptr [ESP + 0x4],EDX
00524e3f  MOV EDX,dword ptr [EAX + 0x24]
00524e42  MOV dword ptr [ESP + 0x8],EDX
00524e46  MOV EDX,dword ptr [EAX + 0x38]
00524e49  MOV EAX,dword ptr [EAX + 0x3c]
00524e4c  MOV dword ptr [ESP + 0x10],EAX
00524e50  MOV EAX,dword ptr [ECX + 0x18]
00524e53  DEC EAX
00524e54  CMP EAX,0xb
00524e57  MOV dword ptr [ESP + 0xc],EDX
00524e5b  JA 0x00524e9f
00524e5d  MOVZX EDX,byte ptr [EAX + 0x524ec8]
00524e64  JMP dword ptr [EDX*0x4 + 0x524ec0]
00524e6b  FLD float ptr [ESP + 0xc]
00524e6f  PUSH 0x0
00524e71  FMUL float ptr [0x008933d4]
00524e77  LEA EAX,[ESP + 0x4]
00524e7b  PUSH EAX
00524e7c  FSUBR float ptr [ESP + 0x28]
00524e80  FSTP float ptr [ESP + 0x8]
00524e84  FLD float ptr [ESP + 0x18]
00524e88  FMUL float ptr [0x008933d4]
00524e8e  FSUBR float ptr [ESP + 0x2c]
00524e92  FSTP float ptr [ESP + 0xc]
00524e96  CALL 0x005b8190
00524e9b  ADD ESP,0x18
00524e9e  RET
00524e9f  MOV EAX,dword ptr [ESP + 0x20]
00524ea3  MOV EDX,dword ptr [ESP + 0x24]
00524ea7  MOV dword ptr [ESP],EAX
00524eaa  PUSH 0x0
00524eac  LEA EAX,[ESP + 0x4]
00524eb0  PUSH EAX
00524eb1  MOV dword ptr [ESP + 0xc],EDX
00524eb5  CALL 0x005b8190
00524eba  ADD ESP,0x18
00524ebd  RET
