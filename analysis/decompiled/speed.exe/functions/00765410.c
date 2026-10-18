/* speed.exe 00765410 FUN_00765410; analysis pseudocode, not buildable source.
 */

undefined1 * FUN_00765410(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (uint)*(ushort *)(param_1 + param_2 * 2) * 0x20 + DAT_009b38bc;
  if ((iVar2 != 0) && (sVar1 = *(short *)(iVar2 + 0xe), -1 < sVar1)) {
    return (undefined1 *)(sVar1 * 0x40 + DAT_009b38b8);
  }
  return &DAT_009b3830;
}

