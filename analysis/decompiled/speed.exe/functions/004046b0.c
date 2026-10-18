/* speed.exe 004046b0 FUN_004046b0; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_004046b0(int param_1)

{
  if ((*(char *)(param_1 + 0x55) != '\0') &&
     ((*(int *)(param_1 + 0x58) != 0 || (*(int *)(param_1 + 0x5c) != 0)))) {
    return 1;
  }
  return 0;
}

