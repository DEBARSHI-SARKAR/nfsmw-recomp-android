/* speed.exe 007631a0 FUN_007631a0; analysis pseudocode, not buildable source.
 * calls 005c8cc0 FUN_005c8cc0
 */

void __thiscall FUN_007631a0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_40 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_005c8cc0(local_40);
  *(byte *)((int)param_1 + 0x12) = *(byte *)((int)param_1 + 0x12) | 1;
  *param_1 = local_40[0];
  param_1[1] = local_40[1];
  param_1[2] = local_40[2];
  param_1[8] = local_20;
  param_1[9] = local_1c;
  param_1[10] = local_18;
  param_1[0xc] = local_10;
  param_1[0xd] = local_c;
  param_1[0xe] = local_8;
  return;
}

