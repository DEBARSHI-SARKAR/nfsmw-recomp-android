/* speed.exe 00817db4 FUN_00817db4; analysis pseudocode, not buildable source.
 * calls 00817c43 FUN_00817c43
 * calls 00816905 FUN_00816905
 * calls 0081788d FUN_0081788d
 * calls 00817d6f FUN_00817d6f
 * calls 00817f21 FUN_00817f21
 * calls 00817bbd FUN_00817bbd
 * calls 00817960 FUN_00817960
 */

void FUN_00817db4(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  undefined1 local_104 [256];
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = param_1 - param_2;
    param_1 = param_2;
  }
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 1) {
    if (param_7 == 0) {
      FUN_00817bbd(param_1,local_104,param_4,1,8,8,&DAT_0090b440 + param_5 * 0x20);
    }
    else {
      FUN_0081788d(param_1,local_104,param_4,1,8,8,&DAT_0090b540 + param_5 * 0x40);
    }
    goto LAB_00817f0a;
  }
  if (iVar1 == param_4) {
    if (param_7 == 0) {
      FUN_00817c43(param_1,local_104,param_4,param_4,8,8,&DAT_0090b440 + param_6 * 0x20);
    }
    else {
      FUN_00817960(param_1,local_104,param_4,param_4,8,8,&DAT_0090b540 + param_6 * 0x40);
    }
    goto LAB_00817f0a;
  }
  if (iVar1 == param_4 + -1) {
    if (param_7 == 0) {
      param_1 = param_1 + -1;
LAB_00817ef7:
      FUN_00817f21(param_1,local_104,param_4,&DAT_0090b440 + param_5 * 0x20,
                   &DAT_0090b440 + param_6 * 0x20);
      goto LAB_00817f0a;
    }
    param_1 = param_1 + -1;
  }
  else {
    if (iVar1 != param_4 + 1) goto LAB_00817f0a;
    if (param_7 == 0) goto LAB_00817ef7;
  }
  FUN_00817d6f(param_1,local_104,param_4,&DAT_0090b540 + param_5 * 0x40,
               &DAT_0090b540 + param_6 * 0x40);
LAB_00817f0a:
  FUN_00816905(local_104,param_3,8);
  return;
}

