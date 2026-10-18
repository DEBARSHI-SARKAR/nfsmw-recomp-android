/* speed.exe 007853b0 FUN_007853b0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00780fe0 FUN_00780fe0
 */

void __fastcall FUN_007853b0(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00780fe0(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x18,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

