/* speed.exe 0057f530 FUN_0057f530; analysis pseudocode, not buildable source.
 * calls 00576c50 FUN_00576c50
 * calls 006530a0 FUN_006530a0
 */

void __fastcall FUN_0057f530(int param_1)

{
  char cVar1;
  
  if ((*(uint *)(param_1 + 4) >> 0x11 & 1) == 0) {
    cVar1 = FUN_006530a0(5);
    if (cVar1 != '\0') {
      FUN_00576c50(2,0);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20000;
    }
  }
  return;
}

