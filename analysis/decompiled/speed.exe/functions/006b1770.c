/* speed.exe 006b1770 FUN_006b1770; analysis pseudocode, not buildable source.
 * calls 006a6c00 FUN_006a6c00
 */

void FUN_006b1770(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_40 [12];
  
  iVar1 = (param_2 - param_1) / 0x30;
  iVar3 = iVar1 / 2;
  if (0 < iVar3) {
    puVar4 = (undefined4 *)(iVar3 * 0x30 + param_1);
    do {
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + -0xc;
      puVar5 = puVar4;
      puVar6 = auStack_40;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_006a6c00(param_1,iVar3,iVar1);
    } while (0 < iVar3);
  }
  return;
}

