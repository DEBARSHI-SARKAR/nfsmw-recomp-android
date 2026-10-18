/* speed.exe 0056e800 FUN_0056e800; analysis pseudocode, not buildable source.
 * calls 006547a0 FUN_006547a0
 */

void __fastcall FUN_0056e800(int param_1)

{
  int iVar1;
  undefined1 local_10 [16];
  
  iVar1 = 0;
  do {
    if (*(short *)(param_1 + iVar1 * 8) != 0) {
      FUN_006547a0(local_10,0);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x140);
  return;
}

