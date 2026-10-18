004facb0  MOV EAX,[0x00915fdc]
004facb5  TEST EAX,EAX
004facb7  JNZ 0x004facee
004facb9  MOV EAX,[0x00915fe0]
004facbe  TEST EAX,EAX
004facc0  JNZ 0x004faccb
004facc2  MOV EAX,[0x00915fe4]
004facc7  TEST EAX,EAX
004facc9  JZ 0x004facee
004faccb  CALL 0x006bf540
004facd0  MOV dword ptr [0x00915fe0],0x0
004facda  MOV dword ptr [0x00915fe4],0x0
004face4  MOV dword ptr [0x00915fe8],0x0
004facee  RET
