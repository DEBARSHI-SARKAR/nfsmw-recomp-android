004aff60  MOV EAX,0x1fc0
004aff65  CALL 0x007c94b0
004aff6a  LEA EAX,[ESP + 0x20]
004aff6e  PUSH 0x1fa0
004aff73  PUSH EAX
004aff74  CALL 0x0081b1ce
004aff79  XOR ECX,ECX
004aff7b  MOV dword ptr [ESP + 0x8],ECX
004aff7f  MOV dword ptr [ESP + 0xc],ECX
004aff83  MOV dword ptr [ESP + 0x10],ECX
004aff87  MOV dword ptr [ESP + 0x14],ECX
004aff8b  MOV dword ptr [ESP + 0x18],ECX
004aff8f  MOV dword ptr [ESP + 0x1c],ECX
004aff93  LEA EDX,[ESP + 0x28]
004aff97  MOV dword ptr [ESP + 0x20],ECX
004aff9b  PUSH EDX
004aff9c  MOV dword ptr [ESP + 0x28],ECX
004affa0  CALL 0x00460c50
004affa5  LEA EAX,[ESP + EAX*0x1 + 0xd]
004affa9  PUSH EAX
004affaa  LEA ECX,[ESP + 0x10]
004affae  PUSH ECX
004affaf  CALL 0x00460c70
004affb4  ADD ESP,0x1fd4
004affba  RET
