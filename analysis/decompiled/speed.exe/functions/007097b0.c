/* speed.exe 007097b0 FUN_007097b0; analysis pseudocode, not buildable source.
 * calls 00707320 FUN_00707320
 */

void FUN_007097b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_3c [11];
  
  iVar3 = param_2;
  while( true ) {
    iVar1 = iVar3 * 2 + 2;
    if (param_3 <= iVar1) break;
    if (*(uint *)(iVar1 * 0x2c + 0x24 + param_1) < *(uint *)(iVar1 * 0x2c + -8 + param_1)) {
      iVar1 = iVar3 * 2 + 1;
    }
    puVar4 = (undefined4 *)(iVar1 * 0x2c + param_1);
    puVar5 = (undefined4 *)(iVar3 * 0x2c + param_1);
    for (iVar2 = 0xb; iVar3 = iVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if (iVar1 == param_3) {
    puVar4 = (undefined4 *)(param_3 * 0x2c + -0x2c + param_1);
    puVar5 = (undefined4 *)(iVar3 * 0x2c + param_1);
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar3 = param_3 + -1;
  }
  puVar4 = (undefined4 *)&stack0x00000010;
  puVar5 = auStack_3c;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00707320(param_1,iVar3,param_2);
  return;
}

