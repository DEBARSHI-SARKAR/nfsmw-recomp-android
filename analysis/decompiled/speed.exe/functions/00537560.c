/* speed.exe 00537560 FUN_00537560; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00515e20 FUN_00515e20
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 005af1c0 FUN_005af1c0
 * calls 00516af0 FUN_00516af0
 */

void __fastcall FUN_00537560(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  if (*(int *)(param_1 + 0x264) < 1) {
    *(undefined4 *)(param_1 + 0x264) = 1;
  }
  if (3 < *(int *)(param_1 + 0x264)) {
    *(undefined4 *)(param_1 + 0x264) = 3;
  }
  FUN_00515e20(local_8,8,"POS%d",*(undefined4 *)(param_1 + 0x264));
  iVar2 = *(int *)(param_1 + 0x10);
  uVar1 = FUN_005af1c0(local_8);
  if ((((iVar2 != 0) && (iVar2 = FUN_00516af0(iVar2), iVar2 != 0)) &&
      (iVar2 = FUN_005b8550(0x9321399c), iVar2 != 0)) && (iVar2 = FUN_005b1360(uVar1), iVar2 != 0))
  {
    FUN_005b8400(iVar2,0);
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  return;
}

