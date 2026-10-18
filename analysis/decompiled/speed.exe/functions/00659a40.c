/* speed.exe 00659a40 FUN_00659a40; analysis pseudocode, not buildable source.
 * calls 007c66d0 _malloc
 * calls 007c7250 FUN_007c7250
 */

void __thiscall FUN_00659a40(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  param_1[5] = 1;
  if (param_1[3] != 0) {
    if (param_1[1] != *param_1) goto LAB_00659aa7;
    if (param_1[3] != 0) {
      *param_1 = *param_1 << 1;
    }
  }
  puVar3 = _malloc(*param_1 << 4);
  puVar4 = (undefined4 *)param_1[3];
  puVar6 = puVar3;
  for (iVar5 = (param_1[1] & 0xfffffffU) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  if (param_1[4] != 0) {
    FUN_007c7250(param_1[4]);
  }
  param_1[3] = (int)puVar3;
  param_1[4] = (int)puVar3;
LAB_00659aa7:
  puVar4 = (undefined4 *)(param_1[1] * 0x10 + param_1[3]);
  param_1[1] = param_1[1] + 1;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *puVar4 = *param_2;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return;
}

