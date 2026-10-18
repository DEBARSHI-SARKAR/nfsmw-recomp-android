/* speed.exe 005582f0 FUN_005582f0; analysis pseudocode, not buildable source.
 * calls 00586ca0 FUN_00586ca0
 * calls 005926b0 FUN_005926b0
 * calls 0054e760 FUN_0054e760
 * calls 005a5540 FUN_005a5540
 * calls 0056bc10 FUN_0056bc10
 * calls 00586760 FUN_00586760
 * calls 00589870 FUN_00589870
 * calls 005252d0 FUN_005252d0
 * calls 00516be0 FUN_00516be0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005582f0(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x58));
  FUN_005a5540();
  iVar4 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x58));
  if (iVar3 != iVar4) {
    iVar3 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x58));
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar5 = FUN_0056bc10(*(undefined4 *)(&DAT_008f3320 + iVar3 * 4));
    FUN_005252d0(uVar1,0xb2980baf,uVar5);
    if (*(int *)(param_1 + 0x60) != 0) {
      FUN_00586760(0x249db7b7);
    }
    FUN_005926b0(1);
    FUN_00589870(7,7,iVar3,0xffffffff);
  }
  if (DAT_00987f71 != '\0') {
    cVar2 = FUN_0054e760((float)DAT_00987f54 - _DAT_00894b40,(float)DAT_00987f58 - _DAT_00894b38,
                         *(undefined4 *)(param_1 + 0xec));
    if (cVar2 != '\0') {
      FUN_00516be0(0x911ab364,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
    }
  }
  return;
}

