007bd780  PUSH -0x1
007bd782  PUSH 0x883736
007bd787  MOV EAX,FS:[0x0]
007bd78d  PUSH EAX
007bd78e  MOV dword ptr FS:[0x0],ESP
007bd795  PUSH ECX
007bd796  PUSH ESI
007bd797  MOV ESI,ECX
007bd799  MOV dword ptr [ESP + 0x4],ESI
007bd79d  MOV dword ptr [ESI],0x8b7ec4
007bd7a3  MOV AL,[0x009b9eb0]
007bd7a8  TEST AL,AL
007bd7aa  MOV dword ptr [ESP + 0x10],0x1
007bd7b2  JZ 0x007bd7c3
007bd7b4  MOV AL,byte ptr [ESI + 0x1cc]
007bd7ba  TEST AL,AL
007bd7bc  JZ 0x007bd7c3
007bd7be  CALL 0x007a6c60
007bd7c3  LEA ECX,[ESI + 0x1bc]
007bd7c9  MOV byte ptr [ESP + 0x10],0x0
007bd7ce  CALL 0x007b3f60
007bd7d3  MOV ECX,ESI
007bd7d5  MOV dword ptr [ESP + 0x10],0xffffffff
007bd7dd  CALL 0x007bcf80
007bd7e2  MOV ECX,dword ptr [ESP + 0x8]
007bd7e6  POP ESI
007bd7e7  MOV dword ptr FS:[0x0],ECX
007bd7ee  ADD ESP,0x10
007bd7f1  RET
