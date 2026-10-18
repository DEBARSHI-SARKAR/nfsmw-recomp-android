00468a90  SUB ESP,0x20
00468a93  MOV EAX,dword ptr [ESP + 0x24]
00468a97  MOV EDX,dword ptr [EAX + 0x8]
00468a9a  FLD float ptr [EAX + 0x4]
00468a9d  MOV EAX,dword ptr [EAX]
00468a9f  FCHS
00468aa1  MOV dword ptr [ESP + 0x18],EAX
00468aa5  FSTP float ptr [ESP + 0x10]
00468aa9  MOV EAX,dword ptr [ESP + 0x28]
00468aad  FLD float ptr [EAX + 0x4]
00468ab0  MOV dword ptr [ESP + 0x14],EDX
00468ab4  MOV EDX,dword ptr [EAX + 0x8]
00468ab7  FCHS
00468ab9  MOV EAX,dword ptr [EAX]
00468abb  FSTP float ptr [ESP]
00468abe  MOV dword ptr [ESP + 0x4],EDX
00468ac2  LEA EDX,[ESP]
00468ac5  MOV dword ptr [ESP + 0x8],EAX
00468ac9  PUSH EDX
00468aca  LEA EAX,[ESP + 0x14]
00468ace  PUSH EAX
00468acf  CALL 0x004689e0
00468ad4  ADD ESP,0x20
00468ad7  RET 0x8
