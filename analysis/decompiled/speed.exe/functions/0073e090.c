/* speed.exe 0073e090 FUN_0073e090; analysis pseudocode, not buildable source.
 * calls 0073dfe0 FUN_0073dfe0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073e090(undefined4 *param_1,float param_2,float param_3,code *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  bVar1 = param_2 != _DAT_00890968;
  puVar4 = param_1;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (bVar1) {
    uVar2 = (*param_4)(param_2);
    FUN_0073dfe0(param_1,uVar2);
  }
  if (param_3 != _DAT_00890968) {
    uVar2 = (*param_4)(param_3);
    FUN_0073dfe0(param_1,uVar2);
  }
  return;
}

