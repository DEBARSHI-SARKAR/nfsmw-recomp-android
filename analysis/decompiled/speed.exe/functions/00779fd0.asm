00779fd0  PUSH ESI
00779fd1  MOV ESI,ECX
00779fd3  CALL 0x00771d20
00779fd8  MOV dword ptr [ESI + 0x4],EAX
00779fdb  MOV byte ptr [EAX + 0x15],0x1
00779fdf  MOV EAX,dword ptr [ESI + 0x4]
00779fe2  MOV dword ptr [EAX + 0x4],EAX
00779fe5  MOV EAX,dword ptr [ESI + 0x4]
00779fe8  MOV dword ptr [EAX],EAX
00779fea  MOV EAX,dword ptr [ESI + 0x4]
00779fed  MOV dword ptr [EAX + 0x8],EAX
00779ff0  MOV dword ptr [ESI + 0x8],0x0
00779ff7  POP ESI
00779ff8  RET
