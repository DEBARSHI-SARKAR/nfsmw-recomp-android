/* speed.exe 00541140 FUN_00541140; analysis pseudocode, not buildable source.
 * calls 005a8c50 FUN_005a8c50
 * calls 00586ca0 FUN_00586ca0
 * calls 005926b0 FUN_005926b0
 * calls 005a8cb0 FUN_005a8cb0
 * calls 0056bc10 FUN_0056bc10
 * calls 00586760 FUN_00586760
 * calls 00589870 FUN_00589870
 * calls 005252d0 FUN_005252d0
 */

void __thiscall FUN_00541140(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 < 0) {
    FUN_005a8cb0();
  }
  else if (0 < param_2) {
    FUN_005a8c50();
  }
  iVar2 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x58));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_0056bc10(*(undefined4 *)(&DAT_008f3320 + iVar2 * 4));
  FUN_005252d0(uVar1,0xb2980baf,uVar3);
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_00586760(0x249db7b7);
  }
  FUN_005926b0(1);
  FUN_00589870(7,7,iVar2,0xffffffff);
  return;
}

