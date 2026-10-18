0041fb80  PUSH -0x1
0041fb82  PUSH 0x867ce8
0041fb87  MOV EAX,FS:[0x0]
0041fb8d  PUSH EAX
0041fb8e  MOV dword ptr FS:[0x0],ESP
0041fb95  PUSH ECX
0041fb96  MOV EAX,dword ptr [ESP + 0x18]
0041fb9a  PUSH ESI
0041fb9b  PUSH EDI
0041fb9c  MOV EDI,dword ptr [ESP + 0x1c]
0041fba0  PUSH EAX
0041fba1  MOV ESI,ECX
0041fba3  PUSH EDI
0041fba4  MOV dword ptr [ESP + 0x10],ESI
0041fba8  CALL 0x00418d90
0041fbad  MOV dword ptr [ESI],0x891290
0041fbb3  MOV dword ptr [ESI + 0x8],0x891288
0041fbba  MOV EAX,dword ptr [EDI]
0041fbbc  MOV ECX,dword ptr [EAX + 0x4]
0041fbbf  PUSH 0x4040e0
0041fbc4  MOV dword ptr [ESP + 0x18],0x0
0041fbcc  CALL 0x005d59f0
0041fbd1  MOV dword ptr [ESI + 0x48],EAX
0041fbd4  MOV EDI,dword ptr [EDI]
0041fbd6  MOV ECX,dword ptr [EDI + 0x4]
0041fbd9  PUSH 0x403f90
0041fbde  CALL 0x005d59f0
0041fbe3  MOV ECX,dword ptr [ESP + 0xc]
0041fbe7  MOV dword ptr [ESI + 0x4c],EAX
0041fbea  POP EDI
0041fbeb  MOV EAX,ESI
0041fbed  POP ESI
0041fbee  MOV dword ptr FS:[0x0],ECX
0041fbf5  ADD ESP,0x10
0041fbf8  RET 0x8
