/* speed.exe 00728a30 FUN_00728a30; analysis pseudocode, not buildable source.
 * calls 00465af0 FUN_00465af0
 * calls 007c4b80 FUN_007c4b80
 * calls 00464c20 FUN_00464c20
 * calls 00464ae0 FUN_00464ae0
 * calls 00460dd0 FUN_00460dd0
 * calls 00461fb0 FUN_00461fb0
 * calls 00461af0 FUN_00461af0
 */

void FUN_00728a30(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined1 local_2a0 [644];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_008804fb;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (param_2 != '\0') {
    puVar5 = &DAT_009a2f40;
    ExceptionList = &local_1c;
    for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  FUN_00465af0(param_1,1);
  local_14 = 0;
  iVar3 = FUN_00461fb0("BOOBOO:");
  while (iVar3 != 0) {
    uVar1 = FUN_00464ae0();
    iVar3 = FUN_00460dd0(uVar1,DAT_009a3a20 + 0x40);
    if (iVar3 == 0) {
      FUN_00464ae0();
      uVar1 = FUN_00464ae0();
      iVar3 = FUN_00460dd0(uVar1,&DAT_008b2aa8);
      iVar2 = FUN_00460dd0(uVar1,&DAT_008b2aa4);
      FUN_00464ae0();
      FUN_00464c20(local_2a0);
      if (iVar3 == 0) {
        iVar3 = FUN_007c4b80();
        iVar2 = FUN_007c4b80();
        iVar3 = (iVar2 >> 5 & 0x7fU) * 0x80 + (iVar3 >> 5 & 0x7fU);
        pbVar4 = (byte *)((int)&DAT_009a2f40 + (iVar3 >> 3));
        *pbVar4 = *pbVar4 | '\x01' << ((byte)iVar3 & 7);
      }
      else if (iVar2 == 0) {
        iVar3 = FUN_007c4b80();
        iVar2 = FUN_007c4b80();
        iVar3 = (iVar2 >> 5 & 0x7fU) * 0x80 + (iVar3 >> 5 & 0x7fU);
        pbVar4 = (byte *)((int)&DAT_009a2f40 + (iVar3 >> 3));
        *pbVar4 = *pbVar4 & -('\x01' << ((byte)iVar3 & 7)) - 1U;
      }
    }
    iVar3 = FUN_00461fb0("BOOBOO:");
  }
  local_14 = 0xffffffff;
  FUN_00461af0();
  ExceptionList = local_1c;
  return;
}

