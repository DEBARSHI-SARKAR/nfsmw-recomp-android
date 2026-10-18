004cefb0  SUB ESP,0x28
004cefb3  LEA ECX,[ESP]
004cefb6  CALL 0x004b8a90
004cefbb  MOV ECX,dword ptr [ESP + 0x2c]
004cefbf  MOV EDX,dword ptr [ESP + 0x30]
004cefc3  XOR EAX,EAX
004cefc5  MOV dword ptr [ESP + 0x20],EAX
004cefc9  MOV dword ptr [ESP + 0x24],EAX
004cefcd  MOV EAX,dword ptr [ESP + 0x38]
004cefd1  MOV dword ptr [ESP + 0x14],EAX
004cefd5  MOV EAX,dword ptr [ESP + 0x34]
004cefd9  MOV dword ptr [ESP + 0x8],ECX
004cefdd  MOV ECX,dword ptr [ESP + 0x3c]
004cefe1  MOV dword ptr [ESP + 0x10],EAX
004cefe5  MOV dword ptr [ESP + 0xc],EDX
004cefe9  MOV EDX,dword ptr [ESP + 0x40]
004cefed  PUSH -0x1
004cefef  LEA EAX,[ESP + 0x4]
004ceff3  MOV dword ptr [ESP + 0x1c],ECX
004ceff7  PUSH EAX
004ceff8  MOV ECX,0x912270
004ceffd  MOV dword ptr [ESP + 0x8],EDX
004cf001  CALL 0x004ce960
004cf006  ADD ESP,0x28
004cf009  RET
