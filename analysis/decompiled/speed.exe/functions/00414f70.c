/* speed.exe 00414f70 FUN_00414f70; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_00414f70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    iVar1 = FUN_005d59f0(&LAB_004038c0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0xbc) = iVar1;
    }
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
    iVar1 = FUN_005d59f0(&LAB_004038d0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0xc0) = iVar1;
    }
  }
  return;
}

