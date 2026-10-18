/* speed.exe 00541f70 FUN_00541f70; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00515e20 FUN_00515e20
 * calls 005af1c0 FUN_005af1c0
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 005b8400 FUN_005b8400
 */

void __thiscall FUN_00541f70(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_20 [32];
  
  FUN_00515e20(local_20,0x20,"POS%d",param_2 + 1);
  iVar2 = *(int *)(param_1 + 0x10);
  uVar1 = FUN_005af1c0(local_20);
  if ((((iVar2 != 0) && (iVar2 = FUN_00516af0(iVar2), iVar2 != 0)) &&
      (iVar2 = FUN_005b8550(0x551015cd), iVar2 != 0)) && (iVar2 = FUN_005b1360(uVar1), iVar2 != 0))
  {
    FUN_005b8400(iVar2,0);
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  return;
}

