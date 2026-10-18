0084bcc0  MOV EAX,dword ptr [ESP + 0x4]
0084bcc4  XOR ECX,ECX
0084bcc6  CMP EAX,ECX
0084bcc8  JNZ 0x0084bccf
0084bcca  MOV EAX,0x9c3718
0084bccf  MOV dword ptr [EAX],ECX
0084bcd1  MOV dword ptr [EAX + 0x4],ECX
0084bcd4  MOV dword ptr [EAX + 0x8],ECX
0084bcd7  ADD EAX,0xc
0084bcda  PUSH EAX
0084bcdb  CALL dword ptr [0x00890260]
0084bce1  RET
