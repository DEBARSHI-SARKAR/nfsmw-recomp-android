0045adc0  MOV ECX,dword ptr [0x0090dcd4]
0045adc6  MOV EAX,dword ptr [ESP + 0x4]
0045adca  MOV EDX,dword ptr [0x0090dcd0]
0045add0  ADD ECX,EAX
0045add2  CMP ECX,EDX
0045add4  MOV dword ptr [0x0090dcd4],ECX
0045adda  JBE 0x0045ade2
0045addc  MOV dword ptr [0x0090dcd0],ECX
0045ade2  TEST EAX,EAX
0045ade4  JBE 0x0045adf4
0045ade6  MOV ECX,dword ptr [0x008f7ea8]
0045adec  MOV EDX,dword ptr [ECX]
0045adee  PUSH 0x0
0045adf0  PUSH EAX
0045adf1  CALL dword ptr [EDX]
0045adf3  RET
0045adf4  XOR EAX,EAX
0045adf6  RET
