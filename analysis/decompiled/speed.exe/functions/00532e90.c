/* speed.exe 00532e90 FUN_00532e90; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 * calls 00586290 FUN_00586290
 * calls 005b8550 FUN_005b8550
 * calls 00514c70 FUN_00514c70
 * calls 00516af0 FUN_00516af0
 */

undefined4 * __thiscall FUN_00532e90(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f773;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_0089daec;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar1 = param_1[4];
  local_4 = 1;
  if ((*(uint *)(DAT_0091cf90 + 300) >> 0x12 & 1) != 0) {
    if (iVar1 == 0) {
LAB_00532f57:
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00516af0(iVar1);
      if (iVar1 == 0) goto LAB_00532f57;
      iVar1 = FUN_005b8550(0xbf41045);
      if (iVar1 == 0) goto LAB_00532f57;
    }
    FUN_00514c70(iVar1);
    uVar3 = param_1[4];
    uVar2 = 0x3111b806;
    goto LAB_00532f72;
  }
  if (iVar1 == 0) {
LAB_00532f16:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00516af0(iVar1);
    if (iVar1 == 0) goto LAB_00532f16;
    iVar1 = FUN_005b8550(0xeb4cf244);
    if (iVar1 == 0) goto LAB_00532f16;
  }
  FUN_00514c70(iVar1);
  uVar3 = param_1[4];
  uVar2 = 0x8cb81f09;
LAB_00532f72:
  FUN_00516be0(uVar2,uVar3,0xfffffffc,0xff);
  ExceptionList = local_c;
  return param_1;
}

