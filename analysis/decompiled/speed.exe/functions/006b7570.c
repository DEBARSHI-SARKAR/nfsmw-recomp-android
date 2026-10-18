/* speed.exe 006b7570 FUN_006b7570; analysis pseudocode, not buildable source.
 * calls 006a6c00 FUN_006a6c00
 */

void FUN_006b7570(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_70 [12];
  undefined4 local_30 [12];
  
  for (param_2 = param_2 - (int)param_1; 1 < param_2 / 0x30; param_2 = param_2 + -0x30) {
    puVar3 = (undefined4 *)(param_2 + -0x30 + (int)param_1);
    puVar2 = puVar3;
    puVar4 = local_30;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar2 = param_1;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar3 = local_30;
    puVar2 = auStack_70;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    }
    FUN_006a6c00(param_1,0,(param_2 + -0x30) / 0x30);
  }
  return;
}

