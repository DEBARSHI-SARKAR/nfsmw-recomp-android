/* speed.exe 0078b260 FUN_0078b260; analysis pseudocode, not buildable source.
 * calls 0083cd40 FUN_0083cd40
 */

undefined1 __fastcall FUN_0078b260(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = FUN_0083cd40(0x706c7567,0,0);
    if (iVar1 != 0) {
      iVar1 = FUN_0083cd40(0x6f6e6c6e,0,0);
      if (iVar1 == 0) {
        return 2;
      }
      return *(char *)(param_1 + 0x12) != '\0';
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  return true;
}

