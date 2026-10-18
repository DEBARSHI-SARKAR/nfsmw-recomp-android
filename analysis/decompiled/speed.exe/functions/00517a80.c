/* speed.exe 00517a80 FUN_00517a80; analysis pseudocode, not buildable source.
 * calls 0056bb20 FUN_0056bb20
 */

undefined4 __fastcall FUN_00517a80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0056bb20();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x1c) == '\0') {
      return 0;
    }
  }
  return 1;
}

