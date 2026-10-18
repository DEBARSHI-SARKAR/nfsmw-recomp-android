/* speed.exe 005273d0 FUN_005273d0; analysis pseudocode, not buildable source.
 * calls 00586290 FUN_00586290
 * calls 005b8550 FUN_005b8550
 * calls 005af1c0 FUN_005af1c0
 * calls 00516af0 FUN_00516af0
 */

undefined4 * __thiscall FUN_005273d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e9f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089b660;
  if (param_1[4] == 0) {
LAB_0052742c:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(param_1[4]);
    if (iVar2 == 0) goto LAB_0052742c;
    iVar2 = FUN_005b8550(0x1e2640fa);
    if (iVar2 == 0) goto LAB_0052742c;
  }
  iVar1 = param_1[4];
  param_1[0xc] = iVar2;
  uVar3 = FUN_005af1c0("message_blurb_shadow");
  if (iVar1 == 0) {
LAB_00527465:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(iVar1);
    if (iVar2 == 0) goto LAB_00527465;
    iVar2 = FUN_005b8550(uVar3);
    if (iVar2 == 0) goto LAB_00527465;
  }
  param_1[0xd] = iVar2;
  if (param_1[4] == 0) {
LAB_00527493:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(param_1[4]);
    if (iVar2 == 0) goto LAB_00527493;
    iVar2 = FUN_005b8550(0x426c7b4d);
    if (iVar2 == 0) goto LAB_00527493;
  }
  param_1[0xb] = iVar2;
  if (param_1[4] == 0) {
LAB_005274bf:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(param_1[4]);
    if (iVar2 == 0) goto LAB_005274bf;
    iVar2 = FUN_005b8550(0xb8a7c6cc);
    if (iVar2 == 0) goto LAB_005274bf;
  }
  param_1[0xe] = iVar2;
  if (param_1[4] != 0) {
    iVar2 = FUN_00516af0(param_1[4]);
    if (iVar2 != 0) {
      iVar2 = FUN_005b8550(0xb8a7c6cd);
      if (iVar2 != 0) goto LAB_005274ed;
    }
  }
  iVar2 = 0;
LAB_005274ed:
  param_1[0xf] = iVar2;
  ExceptionList = local_c;
  return param_1;
}

