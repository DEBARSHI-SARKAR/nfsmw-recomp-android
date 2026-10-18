0047aa20  PUSH -0x1
0047aa22  PUSH 0x86a428
0047aa27  MOV EAX,FS:[0x0]
0047aa2d  PUSH EAX
0047aa2e  MOV dword ptr FS:[0x0],ESP
0047aa35  PUSH ECX
0047aa36  MOV EAX,dword ptr [ESP + 0x14]
0047aa3a  PUSH ESI
0047aa3b  PUSH 0x6
0047aa3d  MOV ESI,ECX
0047aa3f  PUSH EAX
0047aa40  MOV dword ptr [ESP + 0xc],ESI
0047aa44  CALL 0x00470890
0047aa49  MOV ECX,dword ptr [ESP + 0x1c]
0047aa4d  MOV DL,byte ptr [ESP + 0x20]
0047aa51  XOR EAX,EAX
0047aa53  MOV dword ptr [ESI + 0xa0],ECX
0047aa59  MOV dword ptr [ESI],0x894d10
0047aa5f  MOV dword ptr [ESI + 0xa4],EAX
0047aa65  MOV dword ptr [ESI + 0xa8],EAX
0047aa6b  MOV dword ptr [ESI + 0xac],EAX
0047aa71  MOV dword ptr [ESI + 0xb0],EAX
0047aa77  MOV dword ptr [ESI + 0xc4],EAX
0047aa7d  MOV dword ptr [ESI + 0xc8],0x3f800000
0047aa87  MOV word ptr [ESI + 0xcc],AX
0047aa8e  MOV word ptr [ESI + 0xce],0x1
0047aa97  MOV dword ptr [ESI + 0xb4],EAX
0047aa9d  MOV dword ptr [ESI + 0xb8],EAX
0047aaa3  MOV dword ptr [ESI + 0xbc],EAX
0047aaa9  MOV dword ptr [ESI + 0xc0],EAX
0047aaaf  MOV ECX,ESI
0047aab1  MOV dword ptr [ESP + 0x10],EAX
0047aab5  MOV byte ptr [ESI + 0xd0],DL
0047aabb  MOV dword ptr [ESI + 0xd4],EAX
0047aac1  CALL 0x004745e0
0047aac6  MOV ECX,dword ptr [ESP + 0x8]
0047aaca  MOV EAX,ESI
0047aacc  POP ESI
0047aacd  MOV dword ptr FS:[0x0],ECX
0047aad4  ADD ESP,0x10
0047aad7  RET 0xc
