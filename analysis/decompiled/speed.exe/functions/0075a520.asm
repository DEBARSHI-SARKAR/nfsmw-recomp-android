0075a520  MOV EDX,dword ptr [ESP + 0x4]
0075a524  MOV EAX,ECX
0075a526  XOR ECX,ECX
0075a528  CMP EDX,ECX
0075a52a  PUSH ESI
0075a52b  MOV dword ptr [EAX + 0x8],ECX
0075a52e  MOV dword ptr [EAX + 0xc],ECX
0075a531  MOV dword ptr [EAX + 0x24],ECX
0075a534  MOV dword ptr [EAX + 0x20],ECX
0075a537  MOV dword ptr [EAX + 0x1c],ECX
0075a53a  MOV dword ptr [EAX + 0x80],ECX
0075a540  MOV dword ptr [EAX + 0x84],ECX
0075a546  JZ 0x0075a565
0075a548  MOV ESI,dword ptr [ESP + 0xc]
0075a54c  PUSH EDI
0075a54d  MOVZX EDI,byte ptr [EDX + 0x4]
0075a551  CMP ESI,EDI
0075a553  POP EDI
0075a554  JNC 0x0075a565
0075a556  MOV dword ptr [EAX + 0x18],0xffffff
0075a55d  MOV dword ptr [EAX + 0x14],ESI
0075a560  MOV dword ptr [EAX + 0x10],EDX
0075a563  JMP 0x0075a56e
0075a565  MOV dword ptr [EAX + 0x18],ECX
0075a568  MOV dword ptr [EAX + 0x14],ECX
0075a56b  MOV dword ptr [EAX + 0x10],ECX
0075a56e  MOV DL,0x1
0075a570  MOV byte ptr [EAX + 0x2a],CL
0075a573  MOV dword ptr [EAX + 0x30],ECX
0075a576  MOV byte ptr [EAX + 0x28],DL
0075a579  MOV byte ptr [EAX + 0x29],DL
0075a57c  MOV byte ptr [EAX + 0x2d],DL
0075a57f  MOV ECX,dword ptr [0x009b0f94]
0075a585  MOV dword ptr [ECX],EAX
0075a587  MOV [0x009b0f94],EAX
0075a58c  MOV dword ptr [EAX + 0x4],ECX
0075a58f  MOV CL,byte ptr [ESP + 0x10]
0075a593  MOV dword ptr [EAX],0x9b0f90
0075a599  MOV byte ptr [EAX + 0x2b],CL
0075a59c  POP ESI
0075a59d  RET 0xc
