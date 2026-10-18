/* speed.exe 0075f190 FUN_0075f190; analysis pseudocode, not buildable source.
 * calls 0075e100 FUN_0075e100
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0075f190(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_0075e100(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x18,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

