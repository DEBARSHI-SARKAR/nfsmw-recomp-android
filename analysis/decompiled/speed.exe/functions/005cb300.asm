005cb300  SUB ESP,0x8
005cb303  MOV EAX,dword ptr [ESP + 0xc]
005cb307  MOV ECX,dword ptr [EAX + 0x24]
005cb30a  MOV EDX,dword ptr [EAX + 0x4]
005cb30d  PUSH EBX
005cb30e  MOV EBX,dword ptr [EAX + 0x20]
005cb311  PUSH EBP
005cb312  MOV EBP,dword ptr [EAX + 0x10]
005cb315  PUSH ESI
005cb316  MOV ESI,dword ptr [EAX + 0x8]
005cb319  MOV dword ptr [ESP + 0x18],ECX
005cb31d  MOV ECX,dword ptr [ESP + 0x1c]
005cb321  CMP EAX,ECX
005cb323  PUSH EDI
005cb324  MOV EDI,dword ptr [EAX + 0x18]
005cb327  MOV dword ptr [ECX + 0x4],EBP
005cb32a  MOV dword ptr [ECX + 0x8],EBX
005cb32d  MOV dword ptr [ECX + 0x10],EDX
005cb330  MOV EDX,dword ptr [ESP + 0x1c]
005cb334  MOV dword ptr [ECX + 0x18],EDX
005cb337  MOV dword ptr [ECX + 0x20],ESI
005cb33a  MOV dword ptr [ECX + 0x24],EDI
005cb33d  JZ 0x005cb399
005cb33f  MOV EBP,dword ptr [EAX + 0x2c]
005cb342  MOV EDX,dword ptr [EAX + 0xc]
005cb345  MOV ESI,dword ptr [EAX + 0x14]
005cb348  MOV EDI,dword ptr [EAX + 0x1c]
005cb34b  MOV EBX,dword ptr [EAX + 0x28]
005cb34e  MOV dword ptr [ESP + 0x1c],EBP
005cb352  MOV EBP,dword ptr [EAX + 0x30]
005cb355  MOV dword ptr [ESP + 0x20],EBP
005cb359  MOV EBP,dword ptr [EAX + 0x34]
005cb35c  MOV dword ptr [ESP + 0x10],EBP
005cb360  MOV EBP,dword ptr [EAX + 0x38]
005cb363  MOV dword ptr [ESP + 0x14],EBP
005cb367  MOV EBP,dword ptr [EAX + 0x3c]
005cb36a  MOV EAX,dword ptr [EAX]
005cb36c  MOV dword ptr [ECX],EAX
005cb36e  MOV EAX,dword ptr [ESP + 0x20]
005cb372  MOV dword ptr [ECX + 0xc],EDX
005cb375  MOV EDX,dword ptr [ESP + 0x1c]
005cb379  MOV dword ptr [ECX + 0x14],ESI
005cb37c  MOV dword ptr [ECX + 0x1c],EDI
005cb37f  MOV dword ptr [ECX + 0x28],EBX
005cb382  MOV dword ptr [ECX + 0x2c],EDX
005cb385  MOV EDX,dword ptr [ESP + 0x10]
005cb389  MOV dword ptr [ECX + 0x30],EAX
005cb38c  MOV EAX,dword ptr [ESP + 0x14]
005cb390  MOV dword ptr [ECX + 0x34],EDX
005cb393  MOV dword ptr [ECX + 0x38],EAX
005cb396  MOV dword ptr [ECX + 0x3c],EBP
005cb399  POP EDI
005cb39a  POP ESI
005cb39b  POP EBP
005cb39c  POP EBX
005cb39d  ADD ESP,0x8
005cb3a0  RET
