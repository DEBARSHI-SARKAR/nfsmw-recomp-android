/* speed.exe 005f8960 FUN_005f8960; analysis pseudocode, not buildable source.
 * calls 005f2cd0 FUN_005f2cd0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_005f8960(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_005f2cd0(&local_4,**(undefined4 **)(param_1 + 0x14),*(undefined4 **)(param_1 + 0x14));
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_005d0370(*(int *)(param_1 + 0x14),0x10,0);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

