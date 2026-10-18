0073cc80  MOV EAX,[0x009b0a30]
0073cc85  TEST EAX,EAX
0073cc87  PUSH ESI
0073cc88  MOV ESI,ECX
0073cc8a  JZ 0x0073cc99
0073cc8c  MOV EAX,[0x00904a14]
0073cc91  MOV dword ptr [ESI + 0x28c],EAX
0073cc97  JMP 0x0073cca3
0073cc99  MOV ECX,dword ptr [ESP + 0x8]
0073cc9d  MOV dword ptr [ESI + 0x28c],ECX
0073cca3  FLD float ptr [0x0089096c]
0073cca9  FSUB float ptr [ESI + 0x28c]
0073ccaf  FMUL float ptr [0x008b4a98]
0073ccb5  CALL 0x007c4b80
0073ccba  MOV EDX,0x15e
0073ccbf  SUB EDX,EAX
0073ccc1  MOV dword ptr [ESI + 0x33e8],EAX
0073ccc7  MOV dword ptr [ESI + 0x294],EDX
0073cccd  FLD float ptr [ESI + 0x33ec]
0073ccd3  FLD float ptr [0x0089096c]
0073ccd9  FSUB ST0,ST1
0073ccdb  FSTP float ptr [ESI + 0x33f0]
0073cce1  POP ESI
0073cce2  FSTP ST0
0073cce4  RET 0x4
