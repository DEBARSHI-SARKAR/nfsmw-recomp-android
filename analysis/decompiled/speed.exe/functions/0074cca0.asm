0074cca0  PUSH ESI
0074cca1  MOV ESI,ECX
0074cca3  MOV EAX,dword ptr [ESI + 0xc]
0074cca6  CMP EAX,dword ptr [ESI + 0x8]
0074cca9  JC 0x0074ccbc
0074ccab  MOV EDX,dword ptr [ESI]
0074ccad  INC EAX
0074ccae  PUSH EAX
0074ccaf  MOV ECX,ESI
0074ccb1  CALL dword ptr [EDX + 0xc]
0074ccb4  PUSH EAX
0074ccb5  MOV ECX,ESI
0074ccb7  CALL 0x0074cb50
0074ccbc  MOV EAX,dword ptr [ESI + 0xc]
0074ccbf  MOV ECX,dword ptr [ESI + 0x4]
0074ccc2  LEA EAX,[ECX + EAX*0x4]
0074ccc5  TEST EAX,EAX
0074ccc7  JZ 0x0074ccd1
0074ccc9  MOV EDX,dword ptr [ESP + 0x8]
0074cccd  MOV ECX,dword ptr [EDX]
0074cccf  MOV dword ptr [EAX],ECX
0074ccd1  INC dword ptr [ESI + 0xc]
0074ccd4  POP ESI
0074ccd5  RET 0x4
