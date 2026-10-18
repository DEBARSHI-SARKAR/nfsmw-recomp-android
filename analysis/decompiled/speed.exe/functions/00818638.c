/* speed.exe 00818638 FUN_00818638; analysis pseudocode, not buildable source.
 * calls 00818486 FUN_00818486
 * calls 008185f1 FUN_008185f1
 * calls 008181ae FUN_008181ae
 * calls 008187bb FUN_008187bb
 * calls 008183ca FUN_008183ca
 * calls 008184e5 FUN_008184e5
 * calls 0081810f FUN_0081810f
 */

void FUN_00818638(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
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
  if (param_7 == 0) {
    if (iVar1 == 1) {
      FUN_00818486(param_1,param_3,param_4,1,8,0x10,&DAT_0090b770 + param_5 * 0x20);
      return;
    }
    if (iVar1 != param_4) {
      if (iVar1 == param_4 + -1) {
        param_1 = param_1 + -1;
      }
      else if (iVar1 != param_4 + 1) {
        return;
      }
      FUN_008183ca(param_1,param_3,param_4,&DAT_0090b770 + param_5 * 0x20,
                   &DAT_0090b770 + param_6 * 0x20);
      return;
    }
    FUN_008184e5(param_1,param_3,param_4,param_4,8,0x10,&DAT_0090b770 + param_6 * 0x20);
    return;
  }
  if (iVar1 == 1) {
    FUN_0081810f(param_1,local_104,param_4,1,8,8,&DAT_0090b870 + param_5 * 0x40);
  }
  else if (iVar1 == param_4) {
    FUN_008181ae(param_1,local_104,param_4,param_4,8,8,&DAT_0090b870 + param_6 * 0x40);
  }
  else {
    if (iVar1 == param_4 + -1) {
      param_1 = param_1 + -1;
    }
    else if (iVar1 != param_4 + 1) goto LAB_00818709;
    FUN_008185f1(param_1,local_104,param_4,&DAT_0090b870 + param_5 * 0x40,
                 &DAT_0090b870 + param_6 * 0x40);
  }
LAB_00818709:
  FUN_008187bb(local_104,param_3,8);
  return;
}

