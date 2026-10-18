/* speed.exe 00505f80 FUN_00505f80; analysis pseudocode, not buildable source.
 * calls 006be9e0 FUN_006be9e0
 */

undefined4 * __fastcall FUN_00505f80(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086de6b;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x11;
  ExceptionList = &local_c;
  *puVar1 = puVar1;
  param_1[0x12] = puVar1;
  puVar4 = param_1;
  for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *puVar1 = puVar1;
  param_1[0x12] = puVar1;
  local_4 = 0;
  param_1[6] = 0x3f800000;
  param_1[1] = (int)(param_1 + -0x246578) / 0x70;
  uVar2 = FUN_006be9e0((int)(param_1 + -0x246578) / 0x70);
  *param_1 = uVar2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[9] = 4;
  ExceptionList = local_c;
  return param_1;
}

