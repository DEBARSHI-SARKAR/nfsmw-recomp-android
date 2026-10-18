/* speed.exe 00506ef0 FUN_00506ef0; analysis pseudocode, not buildable source.
 * calls 00504380 FUN_00504380
 * calls 00466440 FUN_00466440
 * calls 005052b0 FUN_005052b0
 * calls 00506de0 FUN_00506de0
 * calls 00505240 FUN_00505240
 * calls 00506d00 FUN_00506d00
 * calls 00502e80 FUN_00502e80
 */

void FUN_00506ef0(int param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  
  if (param_3 == '\0') {
    if (DAT_00925860 != 0) {
      FUN_00506de0(param_1,param_2);
      return;
    }
    puVar9 = DAT_0091a0d0;
    if ((undefined4 **)DAT_0091a0d0 != &DAT_0091a0d0) {
      do {
        if (*(short *)(puVar9 + 0x1f) == -1) {
          FUN_00506d00(puVar9);
        }
        for (puVar2 = (undefined4 *)puVar9[0x20]; puVar2 != puVar9 + 0x20;
            puVar2 = (undefined4 *)*puVar2) {
          if (param_1 == puVar2[2]) {
            bVar4 = false;
            iVar8 = 0;
            if (0 < (int)puVar9[3]) {
              do {
                if ((*(int *)(puVar9[0x1d] + 4 + iVar8 * 8) != 0) &&
                   (cVar5 = FUN_005052b0(param_1), cVar5 != '\0')) {
                  bVar4 = true;
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < (int)puVar9[3]);
              if (bVar4) {
                FUN_00506d00(puVar9);
              }
            }
            break;
          }
        }
        puVar9 = (undefined4 *)*puVar9;
      } while ((undefined4 **)puVar9 != &DAT_0091a0d0);
    }
  }
  else if ((DAT_00925860 == 0) &&
          (puVar9 = DAT_0091a0d0, (undefined4 **)DAT_0091a0d0 != &DAT_0091a0d0)) {
    do {
      if (*(short *)(puVar9 + 0x1f) == -1) {
        FUN_00506d00(puVar9);
      }
      piVar7 = (int *)puVar9[0x22];
      bVar4 = false;
      if (piVar7 != puVar9 + 0x22) {
        do {
          piVar1 = (int *)*piVar7;
          puVar2 = (undefined4 *)piVar7[2];
          iVar8 = puVar2[1];
          if (((iVar8 == DAT_00916040) && (iVar8 == DAT_00916040)) &&
             (iVar6 = FUN_00502e80(*puVar2), iVar6 != 0)) {
            *(undefined1 *)(iVar6 + 0x53) = 1;
            iVar8 = iVar6;
          }
          if (iVar8 != puVar2[1]) {
            iVar8 = *piVar7;
            piVar3 = (int *)piVar7[1];
            *piVar3 = iVar8;
            *(int **)(iVar8 + 4) = piVar3;
            FUN_00466440(piVar7);
            *(short *)((int)puVar9 + 0x7e) = *(short *)((int)puVar9 + 0x7e) + -1;
            bVar4 = true;
          }
          piVar7 = piVar1;
        } while (piVar1 != puVar9 + 0x22);
        if (bVar4) {
          for (puVar2 = (undefined4 *)puVar9[0x20]; puVar2 != puVar9 + 0x20;
              puVar2 = (undefined4 *)*puVar2) {
            if (param_1 == puVar2[2]) goto LAB_00506fef;
          }
          FUN_00504380(param_1);
          *(short *)(puVar9 + 0x1f) = *(short *)(puVar9 + 0x1f) + 1;
LAB_00506fef:
          iVar8 = 0;
          if (0 < (int)puVar9[3]) {
            do {
              if (*(int *)(puVar9[0x1d] + 4 + iVar8 * 8) != 0) {
                FUN_00505240(param_1);
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < (int)puVar9[3]);
          }
        }
      }
      puVar9 = (undefined4 *)*puVar9;
      if ((undefined4 **)puVar9 == &DAT_0091a0d0) {
        return;
      }
    } while( true );
  }
  return;
}

