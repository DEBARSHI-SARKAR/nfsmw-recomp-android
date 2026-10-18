004689e0  SUB ESP,0x80
004689e6  MOV EAX,dword ptr [ESP + 0x84]
004689ed  MOV ECX,dword ptr [EAX]
004689ef  MOV EDX,dword ptr [EAX + 0x4]
004689f2  MOV dword ptr [ESP + 0x8],ECX
004689f6  MOV ECX,dword ptr [EAX + 0x8]
004689f9  MOV dword ptr [ESP + 0xc],EDX
004689fd  FLD float ptr [ESP + 0xc]
00468a01  MOV EDX,dword ptr [EAX + 0xc]
00468a04  FADD float ptr [0x00894594]
00468a0a  MOV EAX,dword ptr [ESP + 0x88]
00468a11  MOV dword ptr [ESP + 0x10],ECX
00468a15  MOV ECX,dword ptr [EAX]
00468a17  FSTP float ptr [ESP + 0xc]
00468a1b  MOV dword ptr [ESP + 0x14],EDX
00468a1f  MOV EDX,dword ptr [EAX + 0x4]
00468a22  MOV dword ptr [ESP + 0x1c],EDX
00468a26  FLD float ptr [ESP + 0x1c]
00468a2a  FADD float ptr [0x00894594]
00468a30  MOV dword ptr [ESP + 0x18],ECX
00468a34  MOV ECX,dword ptr [EAX + 0x8]
00468a37  MOV EDX,dword ptr [EAX + 0xc]
00468a3a  MOV dword ptr [ESP + 0x20],ECX
00468a3e  FSTP float ptr [ESP + 0x1c]
00468a42  LEA ECX,[ESP + 0x28]
00468a46  MOV dword ptr [ESP + 0x24],EDX
00468a4a  CALL 0x004048c0
00468a4f  PUSH 0x3
00468a51  LEA EAX,[ESP + 0x2c]
00468a55  PUSH EAX
00468a56  LEA ECX,[ESP + 0x10]
00468a5a  PUSH ECX
00468a5b  LEA ECX,[ESP + 0xc]
00468a5f  MOV dword ptr [ESP + 0xc],0x0
00468a67  MOV dword ptr [ESP + 0x10],0x3
00468a6f  CALL 0x007854b0
00468a74  MOV AL,byte ptr [ESP + 0x79]
00468a78  TEST AL,AL
00468a7a  SETNZ AL
00468a7d  ADD ESP,0x80
00468a83  RET 0x8
