/* speed.exe 004787c0 FUN_004787c0; analysis pseudocode, not buildable source.
 * calls 004786e0 FUN_004786e0
 */

void FUN_004787c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  uVar5 = 4;
  switch(*param_1) {
  case 0x8003b200:
    uVar5 = 0;
    break;
  case 0x8003b201:
    uVar5 = 1;
    break;
  case 0x8003b202:
    uVar5 = 2;
    break;
  case 0x8003b203:
    uVar5 = 3;
  }
  puVar6 = param_1 + 2;
  if (puVar6 != (undefined4 *)(param_1[1] + 8 + (int)param_1)) {
    do {
      iVar2 = FUN_004786e0(uVar5,puVar6[2]);
      if (iVar2 != 0) {
        iVar4 = puVar6[3];
        piVar3 = puVar6 + 4;
        if (0 < iVar4) {
          do {
            piVar3[2] = iVar2;
            puVar1 = *(undefined4 **)(iVar2 + 0x10);
            *puVar1 = piVar3;
            *(int **)(iVar2 + 0x10) = piVar3;
            piVar3[1] = (int)puVar1;
            *piVar3 = iVar2 + 0xc;
            *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
            iVar4 = iVar4 + -1;
            piVar3 = piVar3 + (short)piVar3[5] * 0x21 + 10;
          } while (iVar4 != 0);
        }
      }
      puVar6 = (undefined4 *)((int)puVar6 + puVar6[1] + 8);
    } while (puVar6 != (undefined4 *)(param_1[1] + 8 + (int)param_1));
  }
  return;
}

