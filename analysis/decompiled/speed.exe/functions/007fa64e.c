/* speed.exe 007fa64e FUN_007fa64e; analysis pseudocode, not buildable source.
 * calls 007faa42 FUN_007faa42
 */

void __fastcall FUN_007fa64e(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_008c2930;
  puVar1 = param_1 + 8;
  while ((undefined4 *)*puVar1 != puVar1) {
    piVar4 = (int *)*puVar1;
    iVar5 = *piVar4;
    piVar6 = (int *)piVar4[1];
    *piVar6 = iVar5;
    *(int **)(iVar5 + 4) = piVar6;
    *piVar4 = 0xb;
    piVar4[1] = 0xb;
    if (piVar4 != (int *)&DAT_00000008) {
      FUN_007faa42(1);
    }
  }
  puVar2 = param_1 + 10;
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    piVar4 = (int *)*puVar2;
    iVar5 = *piVar4;
    piVar6 = (int *)piVar4[1];
    *piVar6 = iVar5;
    *(int **)(iVar5 + 4) = piVar6;
    *piVar4 = 0xb;
    piVar4[1] = 0xb;
    if (piVar4 != (int *)&DAT_00000008) {
      FUN_007faa42(1);
    }
    puVar3 = (undefined4 *)*puVar2;
  }
  *puVar2 = 7;
  param_1[0xb] = 7;
  *puVar1 = 7;
  param_1[9] = 7;
  *param_1 = &PTR_FUN_008c27a8;
  return;
}

