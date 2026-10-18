007a3ec0  PUSH ESI
007a3ec1  MOV ESI,ECX
007a3ec3  MOV EAX,dword ptr [ESI + 0x34]
007a3ec6  MOV ECX,dword ptr [0x0091cf90]
007a3ecc  PUSH EDI
007a3ecd  MOV EDI,dword ptr [EAX + 0x8]
007a3ed0  PUSH 0x1
007a3ed2  CALL 0x0056dbe0
007a3ed7  MOV dword ptr [EAX + 0x10],EDI
007a3eda  MOV ECX,dword ptr [ESI + 0x34]
007a3edd  MOV EDI,dword ptr [ECX + 0x8]
007a3ee0  MOV ECX,dword ptr [0x0091cf90]
007a3ee6  PUSH 0x0
007a3ee8  CALL 0x0056dbe0
007a3eed  MOV dword ptr [EAX + 0x10],EDI
007a3ef0  MOV EDX,dword ptr [ESI + 0x34]
007a3ef3  MOV ECX,dword ptr [0x0091cf90]
007a3ef9  MOV ESI,dword ptr [EDX + 0x8]
007a3efc  PUSH 0x2
007a3efe  CALL 0x0056dbe0
007a3f03  POP EDI
007a3f04  MOV dword ptr [EAX + 0x10],ESI
007a3f07  POP ESI
007a3f08  RET
