/* speed.exe 0055a370 FUN_0055a370; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00516af0 FUN_00516af0
 * calls 00586290 FUN_00586290
 * calls 00592170 FUN_00592170
 * calls 005504f0 FUN_005504f0
 * calls 00652ad0 _malloc
 */

undefined4 * __thiscall FUN_0055a370(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870d23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089d35c;
  FUN_00592170(param_1[4],"ARRAY_SCROLL_REGION","ScrollBar",1,1,0,1);
  param_1[0x3e] = 4;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (DAT_009123d0 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_009123d4 - DAT_009123d0 >> 2;
  }
  param_1[0x3f] = iVar1;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x36) = 1;
  param_1[0x35] = 1;
  if (param_1[4] != 0) {
    iVar1 = FUN_00516af0(param_1[4]);
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(0xca74a2fa);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 2)) goto LAB_0055a43a;
    }
  }
  iVar1 = 0;
LAB_0055a43a:
  param_1[0x39] = iVar1;
  iVar1 = *(int *)(DAT_0091cf90 + 0x10);
  puVar2 = _malloc(param_1[0x3f] << 3);
  param_1[0x40] = puVar2;
  puVar4 = (undefined4 *)(iVar1 + 0x324);
  for (iVar3 = (param_1[0x3f] & 0x1fffffff) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  param_1[0x41] = *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x7c);
  FUN_005504f0();
  ExceptionList = local_c;
  return param_1;
}

