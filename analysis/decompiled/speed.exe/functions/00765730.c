/* speed.exe 00765730 FUN_00765730; analysis pseudocode, not buildable source.
 */

int FUN_00765730(ushort *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (uint)*param_1 * 0x20 + DAT_009b38bc;
  if (param_2 == iVar1) {
    iVar1 = (uint)param_1[1] * 0x20 + DAT_009b38bc;
  }
  return iVar1;
}

