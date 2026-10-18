/* speed.exe 0043f0e0 FUN_0043f0e0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00436150 FUN_00436150
 */

void __fastcall FUN_0043f0e0(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00436150(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

