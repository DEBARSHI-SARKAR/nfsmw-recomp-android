/* speed.exe 00432ce0 FUN_00432ce0; analysis pseudocode, not buildable source.
 * calls 004260d0 FUN_004260d0
 */

void FUN_00432ce0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_50 [8];
  undefined4 local_20 [8];
  
  for (param_2 = param_2 - (int)param_1; 1 < param_2 >> 5; param_2 = param_2 + -0x20) {
    puVar3 = (undefined4 *)(param_2 + -0x20 + (int)param_1);
    puVar2 = puVar3;
    puVar4 = local_20;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar2 = param_1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar3 = local_20;
    puVar2 = auStack_50;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    }
    FUN_004260d0(param_1,0,param_2 + -0x20 >> 5);
  }
  return;
}

