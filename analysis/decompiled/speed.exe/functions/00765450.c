/* speed.exe 00765450 FUN_00765450; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00765450(ushort *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (uint)*param_1 * 0x20 + DAT_009b38bc;
  iVar3 = (uint)param_1[1] * 0x20 + DAT_009b38bc;
  if ((((iVar2 != 0) && (iVar3 != 0)) && (sVar1 = *(short *)(iVar2 + 0xe), -1 < sVar1)) &&
     (-1 < *(short *)(iVar3 + 0xe))) {
    *param_2 = sVar1 * 0x40 + DAT_009b38b8;
    param_2[1] = *(short *)(iVar3 + 0xe) * 0x40 + DAT_009b38b8;
    return 1;
  }
  *param_2 = (int)&DAT_009b3830;
  param_2[1] = (int)&DAT_009b3830;
  return 0;
}

