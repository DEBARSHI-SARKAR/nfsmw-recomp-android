/* speed.exe 005fa8e0 FUN_005fa8e0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005fa300 FUN_005fa300
 */

void __fastcall FUN_005fa8e0(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_005fa300(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x20,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

