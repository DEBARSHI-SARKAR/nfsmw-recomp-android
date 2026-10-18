/* speed.exe 007eecdb FUN_007eecdb; analysis pseudocode, not buildable source.
 * calls 007edd78 FUN_007edd78
 */

void __fastcall FUN_007eecdb(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007edd78(*(undefined4 *)(param_1 + 0x30),0x30001);
  *(uint *)(param_1 + 0x20) = (uint)(iVar1 != -1);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  return;
}

