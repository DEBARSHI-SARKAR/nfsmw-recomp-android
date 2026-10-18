/* speed.exe 007859c0 FUN_007859c0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00781220 FUN_00781220
 */

void __fastcall FUN_007859c0(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00781220(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

