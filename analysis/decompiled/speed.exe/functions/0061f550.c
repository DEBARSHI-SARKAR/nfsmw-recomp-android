/* speed.exe 0061f550 FUN_0061f550; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0061cc70 FUN_0061cc70
 */

void __fastcall FUN_0061f550(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_0061cc70(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x24,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

