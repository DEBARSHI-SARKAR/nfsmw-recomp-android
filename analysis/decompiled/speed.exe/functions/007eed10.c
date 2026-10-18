/* speed.exe 007eed10 FUN_007eed10; analysis pseudocode, not buildable source.
 * calls 007edd78 FUN_007edd78
 */

void __fastcall FUN_007eed10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007edd78(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x20));
  *(int *)(param_1 + 0x14) = iVar1;
  *(byte *)(param_1 + 0x11) = ((iVar1 == -1) - 1U & 3) - 2;
  return;
}

