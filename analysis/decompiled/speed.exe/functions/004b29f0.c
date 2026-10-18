/* speed.exe 004b29f0 FUN_004b29f0; analysis pseudocode, not buildable source.
 * calls 007ee03a FUN_007ee03a
 * calls 007edab2 FUN_007edab2
 * calls 007edabb FUN_007edabb
 */

void FUN_004b29f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_007edab2(*(undefined4 *)(param_3 + 0x184));
  iVar1 = FUN_007ee03a(param_3 + 0x78,1,*(undefined4 *)(param_3 + 0x4c),param_3);
  *(int *)(param_3 + 0x184) = iVar1;
  if (iVar1 != 0) {
    FUN_007edabb(iVar1,FUN_004b2990);
  }
  return;
}

