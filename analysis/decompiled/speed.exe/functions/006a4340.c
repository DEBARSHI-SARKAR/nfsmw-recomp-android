/* speed.exe 006a4340 FUN_006a4340; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 */

void __thiscall FUN_006a4340(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 local_20 [5];
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_20[0] = *param_2;
  local_20[1] = param_2[1];
  local_20[2] = param_2[2];
  local_20[4] = *param_3;
  local_c = param_3[1];
  local_8 = param_3[2];
  fVar5 = (float10)FUN_006e8de0();
  local_4 = (float)fVar5;
  iVar2 = (*(int *)(param_1 + 0x10) + 1) % *(int *)(param_1 + 0x14);
  local_20[3] = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  puVar3 = local_20;
  puVar4 = (undefined4 *)(iVar2 * 0x20 + 0x1c + param_1);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}

