/* speed.exe 006d7b30 FUN_006d7b30; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_006d7b30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  param_1[6] = param_2;
  iVar4 = 1;
  param_1[0x13] = param_4;
  *param_1 = &PTR_FUN_008afb74;
  param_1[0xc] = 0;
  (**(code **)(*DAT_00982bdc + 0x68))(DAT_00982bdc,param_4 * 0xc,8,0,1,param_1 + 0x12,0);
  param_1[0xf] = iVar4;
  (**(code **)(*DAT_00982bdc + 0x6c))(DAT_00982bdc,iVar4 * 2,8,0x65,1,param_1 + 0xd,0);
  uVar2 = DAT_0098856c & 0x80000007;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
  }
  if (uVar2 == 7) {
    DAT_0098856c = DAT_0098856c + 1;
  }
  uVar2 = DAT_0098856c & 0x80000007;
  bVar3 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar3 = (uVar2 - 1 | 0xfffffff8) == 0xffffffff;
  }
  if (bVar3) {
    DAT_0098856c = DAT_0098856c + 1;
  }
  uVar1 = _DAT_00890968;
  if ((DAT_0098856c & 1) != 0) {
    uVar1 = _DAT_0089096c;
  }
  param_1[8] = uVar1;
  uVar1 = _DAT_00890968;
  if ((DAT_0098856c & 2) != 0) {
    uVar1 = _DAT_0089096c;
  }
  param_1[9] = uVar1;
  uVar1 = _DAT_00890968;
  if ((DAT_0098856c & 4) != 0) {
    uVar1 = _DAT_0089096c;
  }
  DAT_0098856c = DAT_0098856c + 1;
  param_1[10] = uVar1;
  param_1[0xb] = 0x3f800000;
  return param_1;
}

