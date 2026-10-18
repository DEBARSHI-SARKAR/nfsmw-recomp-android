/* speed.exe 0045a470 FUN_0045a470; analysis pseudocode, not buildable source.
 * calls 0045a220 FUN_0045a220
 */

void __fastcall FUN_0045a470(int param_1)

{
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) && (*(int *)(param_1 + 4) != 0)) {
    FUN_0045a220();
    return;
  }
  return;
}

