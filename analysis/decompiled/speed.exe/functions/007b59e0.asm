007b59e0  PUSH -0x1
007b59e2  PUSH 0x8832e8
007b59e7  MOV EAX,FS:[0x0]
007b59ed  PUSH EAX
007b59ee  MOV dword ptr FS:[0x0],ESP
007b59f5  SUB ESP,0x2c
007b59f8  MOV ECX,dword ptr [ESP + 0x3c]
007b59fc  XOR EAX,EAX
007b59fe  MOV dword ptr [ESP],0x8b7518
007b5a05  MOV dword ptr [ESP + 0xc],EAX
007b5a09  MOV dword ptr [ESP + 0x10],ECX
007b5a0d  MOV dword ptr [ESP + 0x14],EAX
007b5a11  MOV dword ptr [ESP + 0x18],0x7
007b5a19  MOV byte ptr [ESP + 0x1c],AL
007b5a1d  MOV dword ptr [ESP + 0x20],0x1
007b5a25  MOV dword ptr [ESP + 0x24],EAX
007b5a29  MOV byte ptr [ESP + 0x28],AL
007b5a2d  LEA EDX,[ESP]
007b5a30  PUSH EDX
007b5a31  MOV ECX,0x9b9ec0
007b5a36  MOV dword ptr [ESP + 0x38],EAX
007b5a3a  CALL 0x007b5870
007b5a3f  MOV ECX,dword ptr [ESP + 0x2c]
007b5a43  MOV dword ptr FS:[0x0],ECX
007b5a4a  ADD ESP,0x38
007b5a4d  RET 0x4
