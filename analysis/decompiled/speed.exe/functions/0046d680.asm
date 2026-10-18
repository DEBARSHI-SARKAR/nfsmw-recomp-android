0046d680  SUB ESP,0x94
0046d686  FLD float ptr [ESP + 0x98]
0046d68d  MOV dword ptr [ESP],0x3f800000
0046d694  FADD float ptr [0x00894594]
0046d69a  MOV dword ptr [ESP + 0x4],0x3f8facd6
0046d6a2  MOV dword ptr [ESP + 0x8],0x3fa14518
0046d6aa  MOV dword ptr [ESP + 0xc],0x3fb504f3
0046d6b2  MOV dword ptr [ESP + 0x10],0x3fcb2ff5
0046d6ba  MOV dword ptr [ESP + 0x14],0x3fe411f0
0046d6c2  MOV dword ptr [ESP + 0x18],0x40000000
0046d6ca  MOV dword ptr [ESP + 0x1c],0x400facd6
0046d6d2  MOV dword ptr [ESP + 0x20],0x40214518
0046d6da  MOV dword ptr [ESP + 0x24],0x403504f3
0046d6e2  MOV dword ptr [ESP + 0x28],0x404b2ff5
0046d6ea  MOV dword ptr [ESP + 0x2c],0x406411f0
0046d6f2  MOV dword ptr [ESP + 0x30],0x40800000
0046d6fa  MOV dword ptr [ESP + 0x34],0x408facd6
0046d702  MOV dword ptr [ESP + 0x38],0x40a14518
0046d70a  MOV dword ptr [ESP + 0x3c],0x40b504f3
0046d712  MOV dword ptr [ESP + 0x40],0x40cb2ff5
0046d71a  MOV dword ptr [ESP + 0x44],0x40e411f0
0046d722  MOV dword ptr [ESP + 0x48],0x41000000
0046d72a  MOV dword ptr [ESP + 0x4c],0x410facd6
0046d732  MOV dword ptr [ESP + 0x50],0x41214518
0046d73a  MOV dword ptr [ESP + 0x54],0x413504f3
0046d742  MOV dword ptr [ESP + 0x58],0x414b2ff5
0046d74a  MOV dword ptr [ESP + 0x5c],0x416411f0
0046d752  MOV dword ptr [ESP + 0x60],0x41800000
0046d75a  MOV dword ptr [ESP + 0x64],0x418facd6
0046d762  MOV dword ptr [ESP + 0x68],0x41a14518
0046d76a  MOV dword ptr [ESP + 0x6c],0x41b504f3
0046d772  MOV dword ptr [ESP + 0x70],0x41cb2ff5
0046d77a  MOV dword ptr [ESP + 0x74],0x41e411f0
0046d782  MOV dword ptr [ESP + 0x78],0x42000000
0046d78a  MOV dword ptr [ESP + 0x7c],0x420facd6
0046d792  MOV dword ptr [ESP + 0x80],0x42214518
0046d79d  MOV dword ptr [ESP + 0x84],0x423504f3
0046d7a8  MOV dword ptr [ESP + 0x88],0x424b2ff5
0046d7b3  MOV dword ptr [ESP + 0x8c],0x426411f0
0046d7be  MOV dword ptr [ESP + 0x90],0x42800000
0046d7c9  CALL 0x007c4b80
0046d7ce  TEST EAX,EAX
0046d7d0  JG 0x0046d7de
0046d7d2  XOR EAX,EAX
0046d7d4  FLD float ptr [ESP + EAX*0x4]
0046d7d7  ADD ESP,0x94
0046d7dd  RET
0046d7de  CMP EAX,0x24
0046d7e1  JLE 0x0046d7e8
0046d7e3  MOV EAX,0x24
0046d7e8  FLD float ptr [ESP + EAX*0x4]
0046d7eb  ADD ESP,0x94
0046d7f1  RET
