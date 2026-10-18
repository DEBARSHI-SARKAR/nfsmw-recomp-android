/* speed.exe 00516980 FUN_00516980; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00516980(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(iVar1 + 0x524c));
  }
  return 0;
}

