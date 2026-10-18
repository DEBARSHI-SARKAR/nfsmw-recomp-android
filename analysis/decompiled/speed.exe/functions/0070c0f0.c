/* speed.exe 0070c0f0 FUN_0070c0f0; analysis pseudocode, not buildable source.
 * calls 007097b0 FUN_007097b0
 */

void FUN_0070c0f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_3c [11];
  
  iVar1 = (param_2 - param_1) / 0x2c;
  iVar3 = iVar1 / 2;
  if (0 < iVar3) {
    puVar4 = (undefined4 *)(iVar3 * 0x2c + param_1);
    do {
      puVar4 = puVar4 + -0xb;
      iVar3 = iVar3 + -1;
      puVar5 = puVar4;
      puVar6 = auStack_3c;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_007097b0(param_1,iVar3,iVar1);
    } while (0 < iVar3);
  }
  return;
}

