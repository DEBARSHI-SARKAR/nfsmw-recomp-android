/* speed.exe 006fcdd0 FUN_006fcdd0; analysis pseudocode, not buildable source.
 * calls 006fb7f0 FUN_006fb7f0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_006fcdd0(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_006fb7f0(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x18,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

