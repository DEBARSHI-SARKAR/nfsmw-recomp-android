/* speed.exe 007f9b15 FUN_007f9b15; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_007f9b15(int param_1)

{
  int iVar1;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    return iVar1;
  }
  local_8 = param_1;
  (**(code **)(param_1 + 0xc))(param_1,*(undefined4 *)(param_1 + 8),&local_8);
  return local_8;
}

