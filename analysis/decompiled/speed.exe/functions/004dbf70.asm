004dbf70  PUSH -0x1
004dbf72  PUSH 0x86cb56
004dbf77  MOV EAX,FS:[0x0]
004dbf7d  PUSH EAX
004dbf7e  MOV dword ptr FS:[0x0],ESP
004dbf85  PUSH ECX
004dbf86  MOV EAX,dword ptr [ESP + 0x14]
004dbf8a  TEST EAX,EAX
004dbf8c  MOV EAX,[0x008efaf0]
004dbf91  PUSH ESI
004dbf92  MOV ECX,0x912840
004dbf97  MOV dword ptr [ESP + 0x18],EAX
004dbf9b  JNZ 0x004dbfb7
004dbf9d  PUSH 0x0
004dbf9f  PUSH EAX
004dbfa0  PUSH 0x5c
004dbfa2  CALL 0x004ac040
004dbfa7  MOV ESI,EAX
004dbfa9  MOV dword ptr [ESP + 0x4],ESI
004dbfad  MOV dword ptr [ESP + 0x10],0x0
004dbfb5  JMP 0x004dbfcf
004dbfb7  PUSH 0x1
004dbfb9  PUSH EAX
004dbfba  PUSH 0x5c
004dbfbc  CALL 0x004ac040
004dbfc1  MOV ESI,EAX
004dbfc3  MOV dword ptr [ESP + 0x4],ESI
004dbfc7  MOV dword ptr [ESP + 0x10],0x1
004dbfcf  TEST ESI,ESI
004dbfd1  JZ 0x004dbff2
004dbfd3  MOV ECX,ESI
004dbfd5  CALL 0x004bf270
004dbfda  MOV dword ptr [ESI],0x898468
004dbfe0  MOV EAX,ESI
004dbfe2  POP ESI
004dbfe3  MOV ECX,dword ptr [ESP + 0x4]
004dbfe7  MOV dword ptr FS:[0x0],ECX
004dbfee  ADD ESP,0x10
004dbff1  RET
004dbff2  MOV ECX,dword ptr [ESP + 0x8]
004dbff6  XOR EAX,EAX
004dbff8  POP ESI
004dbff9  MOV dword ptr FS:[0x0],ECX
004dc000  ADD ESP,0x10
004dc003  RET
