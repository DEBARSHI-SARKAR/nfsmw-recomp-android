/* speed.exe 008293c0 FUN_008293c0; analysis pseudocode, not buildable source.
 */

int FUN_008293c0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((-1 < param_1) && (param_1 < (int)(uint)*(byte *)(*(int *)(DAT_009c2964 + 0x18) + 0xd))) {
    iVar1 = *(int *)(DAT_009c2964 + 0x18) +
            *(int *)(*(int *)(DAT_009c2964 + 0x34) + param_1 * 4) * 4;
  }
  return iVar1;
}

