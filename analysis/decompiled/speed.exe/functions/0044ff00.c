/* speed.exe 0044ff00 FUN_0044ff00; analysis pseudocode, not buildable source.
 * calls 007514e0 FUN_007514e0
 * calls 0072dff0 FUN_0072dff0
 * calls 0044ea30 FUN_0044ea30
 * calls 0044e920 FUN_0044e920
 */

undefined4 __fastcall FUN_0044ff00(int param_1)

{
  undefined4 uVar1;
  undefined3 uVar2;
  undefined3 extraout_var;
  
  FUN_0044ea30();
  FUN_0044e920();
  uVar1 = FUN_007514e0(*(undefined4 *)(param_1 + 0x110));
  DAT_0090d9e8 = 0;
  uVar2 = (undefined3)((uint)uVar1 >> 8);
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x10) + 0x10) + 0x30) != '\0') {
    FUN_0072dff0();
    uVar2 = extraout_var;
  }
  return CONCAT31(uVar2,1);
}

