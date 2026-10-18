/* speed.exe 007b4220 FUN_007b4220; analysis pseudocode, not buildable source.
 * calls 007b41c0 FUN_007b41c0
 */

void FUN_007b4220(void)

{
  int iVar1;
  
  iVar1 = FUN_007b41c0();
  *(undefined4 *)(iVar1 + 0x624) = 0;
  *(undefined4 *)(iVar1 + 0x628) = 0;
  *(undefined1 *)(iVar1 + 0x620) = 0;
  *(undefined1 *)(iVar1 + 0x621) = 0;
  return;
}

