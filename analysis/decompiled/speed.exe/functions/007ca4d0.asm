007ca4d0  PUSH EBP
007ca4d1  MOV EBP,ESP
007ca4d3  SUB ESP,0x8
007ca4d6  PUSH 0x8b8c4c
007ca4db  CALL dword ptr [0x0089008c]
007ca4e1  MOV dword ptr [EBP + -0x4],EAX
007ca4e4  CMP dword ptr [EBP + -0x4],0x0
007ca4e8  JZ 0x007ca509
007ca4ea  PUSH 0x8b8c3c
007ca4ef  MOV EAX,dword ptr [EBP + -0x4]
007ca4f2  PUSH EAX
007ca4f3  CALL dword ptr [0x00890094]
007ca4f9  MOV dword ptr [EBP + -0x8],EAX
007ca4fc  CMP dword ptr [EBP + -0x8],0x0
007ca500  JZ 0x007ca509
007ca502  MOV ECX,dword ptr [EBP + 0x8]
007ca505  PUSH ECX
007ca506  CALL dword ptr [EBP + -0x8]
007ca509  MOV EDX,dword ptr [EBP + 0x8]
007ca50c  PUSH EDX
007ca50d  CALL dword ptr [0x008901c4]
