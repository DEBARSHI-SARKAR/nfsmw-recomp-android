00856fe0  XOR EAX,EAX
00856fe2  MOV ECX,0x65
00856fe7  MOV dword ptr [ESI + 0xf8],EAX
00856fed  MOV dword ptr [ESI + 0xfc],EAX
00856ff3  MOV dword ptr [ESI + 0x100],EAX
00856ff9  MOV dword ptr [ESI + 0x108],ECX
00856fff  MOV dword ptr [ESI + 0xe0],EAX
00857005  MOV dword ptr [ESI + 0xe4],EAX
0085700b  MOV dword ptr [ESI + 0xec],ECX
00857011  CALL dword ptr [0x008900a4]
00857017  SUB EAX,0x1388
0085701c  MOV dword ptr [ESI + 0x191c],EAX
00857022  RET
