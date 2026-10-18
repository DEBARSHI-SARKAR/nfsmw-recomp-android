/* speed.exe 004a8600 FUN_004a8600; analysis pseudocode, not buildable source.
 * calls 00491350 FUN_00491350
 * calls 00492290 FUN_00492290
 * calls 0048d540 FUN_0048d540
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a8600(undefined4 param_1)

{
  FUN_0048d540();
  (**(code **)(*DAT_009117f4 + 4))(param_1);
  _DAT_009117ec = (*(code *)PTR_FUN_008ee4d0)(1,0);
  FUN_00492290("AnimationBank",&LAB_0048e3e0);
  FUN_00492290("AnimationBank",&DAT_0048e410);
  return;
}

