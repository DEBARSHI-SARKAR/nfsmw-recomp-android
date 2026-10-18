00828c2a  PUSH EBP
00828c2b  MOV EBP,ESP
00828c2d  PUSH ECX
00828c2e  PUSH ECX
00828c2f  MOV EAX,dword ptr [ECX + 0x98]
00828c35  MOV dword ptr [EBP + -0x8],EAX
00828c38  MOV EAX,dword ptr [ECX + 0x9c]
00828c3e  MOV ECX,dword ptr [EBP + -0x8]
00828c41  MOV dword ptr [EBP + -0x4],EAX
00828c44  MOV EAX,dword ptr [EBP + 0x8]
00828c47  MOV dword ptr [EAX],ECX
00828c49  MOV ECX,dword ptr [EBP + -0x4]
00828c4c  MOV dword ptr [EAX + 0x4],ECX
00828c4f  LEAVE
00828c50  RET 0x4
