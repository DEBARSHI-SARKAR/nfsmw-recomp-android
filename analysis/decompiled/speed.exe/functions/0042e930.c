/* speed.exe 0042e930 FUN_0042e930; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005d59f0 FUN_005d59f0
 * calls 006e8de0 FUN_006e8de0
 * calls 005c5e80 FUN_005c5e80
 */

void __fastcall FUN_0042e930(int param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  float10 fVar9;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    puVar7 = *(undefined4 **)(param_1 + 200);
    if (puVar7 != puVar7 + *(int *)(param_1 + 0xd0)) {
      do {
        piVar6 = (int *)*puVar7;
        cVar3 = (**(code **)(*piVar6 + 0x7c))();
        if ((((cVar3 == '\0') && (iVar4 = (**(code **)(*piVar6 + 0xac))(), iVar4 != 0)) &&
            (iVar4 = FUN_005d59f0(&LAB_004038e0), iVar4 != 0)) &&
           (piVar8 = (int *)**(int **)(param_1 + 0x78), piVar8 != *(int **)(param_1 + 0x78))) {
          do {
            fVar1 = (float)piVar8[2];
            fVar2 = (float)piVar8[4];
            pfVar5 = (float *)(**(code **)(*piVar6 + 0xc))();
            fVar9 = (float10)FUN_005c5e80((pfVar5[2] - fVar2) * (pfVar5[2] - fVar2) +
                                          (*pfVar5 - fVar1) * (*pfVar5 - fVar1));
            if (fVar9 < (float10)(float)piVar8[6]) {
              piVar6 = (int *)FUN_005d59f0(&LAB_00405000);
              if (piVar6 != (int *)0x0) {
                (**(code **)(*piVar6 + 0x1c))();
              }
              break;
            }
            piVar8 = (int *)*piVar8;
          } while (piVar8 != (int *)*(int *)(param_1 + 0x78));
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != (undefined4 *)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0) * 4));
    }
    piVar6 = (int *)**(int **)(param_1 + 0x78);
    if (piVar6 != *(int **)(param_1 + 0x78)) {
      do {
        piVar8 = (int *)*piVar6;
        fVar9 = (float10)FUN_006e8de0();
        if (((float10)(float)piVar6[5] < fVar9) && (piVar6 != *(int **)(param_1 + 0x78))) {
          *(int *)piVar6[1] = *piVar6;
          *(int *)(*piVar6 + 4) = piVar6[1];
          FUN_005d0370(piVar6,0x1c,0);
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
        }
        piVar6 = piVar8;
      } while (piVar8 != (int *)*(int *)(param_1 + 0x78));
    }
  }
  return;
}

