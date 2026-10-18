/* speed.exe 005d1d60 FUN_005d1d60; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

void FUN_005d1d60(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 **ppuVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *local_8;
  undefined4 *local_4;
  
  puVar4 = param_3;
  iVar9 = (int)param_3 - param_1 >> 2;
  iVar10 = param_2 - param_1 >> 2;
  iVar7 = iVar10;
  param_2 = iVar9;
  while (iVar2 = iVar7, iVar2 != 0) {
    iVar7 = param_2 % iVar2;
    param_2 = iVar2;
  }
  if ((param_2 < iVar9) && (0 < param_2)) {
    puVar11 = (undefined4 *)(param_1 + param_2 * 4);
    do {
      piVar1 = (int *)*puVar11;
      *piVar1 = *piVar1 + 1;
      if (puVar11 + iVar10 == puVar4) {
        puVar6 = &param_1;
      }
      else {
        param_3 = puVar11 + iVar10;
        puVar6 = &param_3;
      }
      puVar5 = (undefined4 *)*puVar6;
      puVar6 = puVar11;
      while (puVar3 = puVar5, puVar3 != puVar11) {
        *puVar6 = *puVar3;
        iVar7 = (int)puVar4 - (int)puVar3 >> 2;
        if (iVar10 < iVar7) {
          local_8 = puVar3 + iVar10;
          ppuVar8 = &local_8;
        }
        else {
          local_4 = (undefined4 *)(param_1 + (iVar7 * 0x3fffffff + iVar10) * 4);
          ppuVar8 = &local_4;
        }
        puVar6 = puVar3;
        puVar5 = *ppuVar8;
      }
      *puVar6 = piVar1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        thunk_FUN_007c7250(piVar1);
      }
      puVar11 = puVar11 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

