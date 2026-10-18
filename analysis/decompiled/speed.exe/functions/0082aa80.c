/* speed.exe 0082aa80 FUN_0082aa80; analysis pseudocode, not buildable source.
 * calls 0081bccb FUN_0081bccb
 * calls 0081e318 FUN_0081e318
 * calls 0081f39d FUN_0081f39d
 * calls 0081f337 FUN_0081f337
 * calls 0081bcd9 FUN_0081bcd9
 */

int __thiscall
FUN_0082aa80(int *param_1,int param_2,uint param_3,int param_4,undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x74))((int)param_3 >> 0x10 & 0xffff);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x1c) < 0)) {
    return -1;
  }
  param_1[0x42] = ((param_3 & 0xffff) - 1) + param_4;
  FUN_0081bccb();
  iVar1 = *(int *)(iVar2 + 0x1c);
  if (-1 < param_1[0x45]) {
    FUN_0081f39d(param_1[0x45]);
  }
  iVar3 = FUN_0081f337(*(undefined4 *)(iVar2 + 0x1c),param_1[0x42],param_1[0x3f]);
  if (-1 < iVar3) {
    FUN_0081e318(iVar3,param_1[0x43],param_1[3]);
  }
  param_1[1] = iVar1;
  FUN_0081bcd9();
  if (iVar3 < 0) {
    param_1[0x45] = -1;
    return iVar3;
  }
  param_1[0x48] = param_4 + -1;
  param_1[0x45] = iVar3;
  param_1[0x47] = param_2;
  param_1[0x44] = param_6;
  *(undefined4 *)(iVar2 + 0x24) = DAT_009c2980;
  param_1[8] = 1;
  return iVar3;
}

