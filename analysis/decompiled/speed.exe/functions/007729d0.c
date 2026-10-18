/* speed.exe 007729d0 FUN_007729d0; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_007729d0(int param_1)

{
  if ((*(int *)(param_1 + 0x40) != 0) &&
     (*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2 != 0)) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x50) != 0) &&
     ((*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50)) / 0x28 != 0)) {
    return 0;
  }
  return 1;
}

