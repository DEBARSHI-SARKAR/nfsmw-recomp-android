/* speed.exe 0042dfc0 FUN_0042dfc0; analysis pseudocode, not buildable source.
 * calls 004260d0 FUN_004260d0
 */

void FUN_0042dfc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_30 [8];
  
  iVar1 = param_2 - param_1 >> 5;
  iVar3 = iVar1 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar3) {
    puVar4 = (undefined4 *)(iVar3 * 0x20 + param_1);
    do {
      puVar4 = puVar4 + -8;
      iVar3 = iVar3 + -1;
      puVar5 = puVar4;
      puVar6 = auStack_30;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_004260d0(param_1,iVar3,iVar1);
    } while (0 < iVar3);
  }
  return;
}

