/* speed.exe 008201ff FUN_008201ff; analysis pseudocode, not buildable source.
 * calls 00860f8c Ordinal_6
 */

undefined4 FUN_008201ff(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined2 *local_24;
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  int local_10;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  
  if (DAT_009c22c8 == (int *)0x0) {
    DAT_009c22d8 = 0;
    DAT_009c22dc = 0;
    DAT_009c22e0 = 0;
    DAT_009c22d4 = param_1;
    iVar1 = (int)(((longlong)(param_3 * 300) / 1000 & 0xffffffffU) / (ulonglong)param_1) + 1;
    if (iVar1 < 3) {
      iVar1 = 3;
    }
    DAT_009c22d0 = iVar1 * param_1;
    local_a = (undefined2)param_2;
    local_c = (undefined2)(param_2 >> 3);
    uVar2 = param_2 >> 3 & 0xffff;
    local_10 = uVar2 * param_3;
    local_2c = uVar2 * DAT_009c22d0;
    DAT_009c22e4 = uVar2 >> 1;
    local_24 = &local_18;
    local_16 = 1;
    local_18 = 1;
    local_14 = param_3;
    local_8 = 0;
    local_34 = 0x1c;
    local_30 = 0;
    local_28 = 0;
    iVar1 = Ordinal_6(0,&DAT_009c22c8,0);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*DAT_009c22c8 + 0xc))(DAT_009c22c8,&local_34,&DAT_009c22cc,0);
      if ((iVar1 == 0) && (iVar1 = (**(code **)(*DAT_009c22cc + 0x24))(DAT_009c22cc,1), iVar1 == 0))
      {
        return 0;
      }
      if (DAT_009c22c8 != (int *)0x0) {
        (**(code **)(*DAT_009c22c8 + 8))(DAT_009c22c8);
      }
      DAT_009c22c8 = (int *)0x0;
      DAT_009c22cc = (int *)0x0;
    }
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffee;
  }
  return uVar3;
}

