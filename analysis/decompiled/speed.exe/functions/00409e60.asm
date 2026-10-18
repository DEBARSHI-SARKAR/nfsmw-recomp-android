00409e60  PUSH ESI
00409e61  XOR EAX,EAX
00409e63  MOV byte ptr [ECX + 0x2c],AL
00409e66  MOV dword ptr [ECX + 0x1c],EAX
00409e69  MOV ESI,dword ptr [0x008a2fb4]
00409e6f  LEA EDX,[ECX + 0x10]
00409e72  MOV dword ptr [EDX],ESI
00409e74  MOV ESI,dword ptr [0x008a2fb8]
00409e7a  MOV dword ptr [EDX + 0x4],ESI
00409e7d  MOV ESI,dword ptr [0x008a2fbc]
00409e83  MOV dword ptr [EDX + 0x8],ESI
00409e86  MOV ESI,dword ptr [0x008a2fb4]
00409e8c  LEA EDX,[ECX + 0x20]
00409e8f  MOV dword ptr [EDX],ESI
00409e91  MOV ESI,dword ptr [0x008a2fb8]
00409e97  MOV dword ptr [EDX + 0x4],ESI
00409e9a  MOV ESI,dword ptr [0x008a2fbc]
00409ea0  MOV dword ptr [ECX + 0x3c],EAX
00409ea3  MOV dword ptr [EDX + 0x8],ESI
00409ea6  MOV EAX,[0x008a2fb4]
00409eab  ADD ECX,0x30
00409eae  MOV dword ptr [ECX],EAX
00409eb0  MOV EDX,dword ptr [0x008a2fb8]
00409eb6  MOV dword ptr [ECX + 0x4],EDX
00409eb9  MOV EAX,[0x008a2fbc]
00409ebe  MOV dword ptr [ECX + 0x8],EAX
00409ec1  POP ESI
00409ec2  RET
