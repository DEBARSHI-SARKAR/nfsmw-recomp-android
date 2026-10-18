/* speed.exe 0070f070 FUN_0070f070; analysis pseudocode, not buildable source.
 * calls 007097b0 FUN_007097b0
 */

void FUN_0070f070(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_68 [11];
  undefined4 local_2c [11];
  
  for (param_2 = param_2 - (int)param_1; 1 < param_2 / 0x2c; param_2 = param_2 + -0x2c) {
    puVar3 = (undefined4 *)(param_2 + -0x2c + (int)param_1);
    puVar2 = puVar3;
    puVar4 = local_2c;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar2 = param_1;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar3 = local_2c;
    puVar2 = auStack_68;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    }
    FUN_007097b0(param_1,0,(param_2 + -0x2c) / 0x2c);
  }
  return;
}

