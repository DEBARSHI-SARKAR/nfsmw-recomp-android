/* speed.exe 00535870 FUN_00535870; analysis pseudocode, not buildable source.
 * calls 00598970 FUN_00598970
 * calls 0051a2f0 FUN_0051a2f0
 * calls 00796d30 FUN_00796d30
 * calls 00799c10 FUN_00799c10
 * calls 0056bc10 FUN_0056bc10
 * calls 00791b00 FUN_00791b00
 * calls 007c4b80 FUN_007c4b80
 * calls 00791cc0 FUN_00791cc0
 * calls 00527f80 FUN_00527f80
 */

int __thiscall FUN_00535870(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_230 [548];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f9ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0051a2f0();
  puVar5 = local_230;
  puVar6 = &LAB_00521ce0;
  local_4 = 0;
  iVar1 = param_1;
  FUN_00796d30(puVar5,&LAB_00521ce0,param_1);
  iVar1 = FUN_00799c10(puVar5,puVar6,iVar1);
  if (iVar1 == 0) {
    uVar4 = FUN_00791b00(3);
    if (uVar4 < 0x14) {
      *param_2 = 0;
    }
    else {
      FUN_00791cc0();
      uVar3 = FUN_007c4b80();
      *param_2 = uVar3;
    }
    local_4 = 0xffffffff;
    FUN_00527f80();
    iVar1 = 0;
  }
  else {
    if (iVar1 < 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_0056bc10(0xf77b0d99);
      uVar3 = FUN_00598970(uVar3,&DAT_00890978,1,0x417b2601,1,1,uVar2);
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
    }
    local_4 = 0xffffffff;
    FUN_00527f80();
  }
  ExceptionList = local_c;
  return iVar1;
}

