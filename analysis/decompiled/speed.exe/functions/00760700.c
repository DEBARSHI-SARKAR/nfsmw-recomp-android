/* speed.exe 00760700 FUN_00760700; analysis pseudocode, not buildable source.
 * calls 00760700 FUN_00760700
 * calls 0073fb50 FUN_0073fb50
 * calls 0075f1d0 FUN_0075f1d0
 * calls 007407c0 FUN_007407c0
 * calls 0075dc50 FUN_0075dc50
 * calls 0074d510 FUN_0074d510
 * calls 0075db90 FUN_0075db90
 * calls 00652ac0 _malloc
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00760a50 FUN_00760a50
 * calls 006e8de0 FUN_006e8de0
 * calls 005d29d0 FUN_005d29d0
 * calls 007ec1bd FUN_007ec1bd
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005d51f0 FUN_005d51f0
 */

void __thiscall FUN_00760700(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0088175d;
  local_c = ExceptionList;
  if (param_2 != (int *)0x0) {
    ExceptionList = &local_c;
    FUN_007ec1bd();
    fVar9 = (float10)FUN_006e8de0();
    FUN_007407c0(param_2,(float)fVar9);
    cVar1 = (**(code **)(*param_2 + 0x24))();
    if (cVar1 == '\0') {
      FUN_007ec1c8();
      ExceptionList = local_c;
      return;
    }
    iVar2 = *(int *)(param_1 + 0xf6c);
    if (iVar2 != 0) {
      iVar5 = **(int **)(iVar2 + 4);
      iVar2 = *(int *)(iVar2 + 4);
      while (iVar5 != iVar2) {
        FUN_0073fb50();
        if (((*(int *)(iVar5 + 0xc) == 0) ||
            (iVar2 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*(int *)(iVar5 + 0xc)
                                 ), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
          piVar3 = &DAT_009b08a8;
          do {
            if (*(int *)(iVar5 + 0xc) == *piVar3) {
              *piVar3 = 0;
            }
            piVar3 = piVar3 + 1;
          } while ((int)piVar3 < 0x9b08e4);
          iVar2 = *(int *)(iVar5 + 0x10);
          if (iVar2 != 0) {
            FUN_00760a50();
            thunk_FUN_007c7250(iVar2);
          }
          FUN_0075dc50(&pvStack_20,iVar5);
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0xf6c) + 4);
      }
    }
    puVar8 = DAT_0092ce9c;
    if (DAT_0092ce9c != DAT_0092ce9c + DAT_0092cea4) {
      do {
        piVar3 = (int *)*puVar8;
        cVar1 = (**(code **)(*piVar3 + 0x88))();
        if (((cVar1 != '\0') && (cVar1 = (**(code **)(*piVar3 + 0xbc))(), cVar1 == '\0')) &&
           (cVar1 = (**(code **)(*piVar3 + 0x7c))(), cVar1 == '\0')) {
          if (*(int *)(param_1 + 0xf6c) == 0) {
            pvStack_20 = (void *)FUN_005d29d0(0xc,0);
            uStack_4 = 0;
            if (pvStack_20 == (void *)0x0) {
              uVar4 = 0;
            }
            else {
              uVar4 = FUN_0075f1d0();
            }
            uStack_4 = 0xffffffff;
            *(undefined4 *)(param_1 + 0xf6c) = uVar4;
          }
          iVar5 = (**(code **)(*piVar3 + 4))();
          uVar4 = *(undefined4 *)(iVar5 + 8);
          uStack_18 = 0;
          uStack_1c = uVar4;
          piVar6 = (int *)FUN_0075db90(auStack_14,&uStack_1c);
          iVar2 = *piVar6;
          if ((char)piVar6[1] != '\0') {
            iVar7 = 0;
            do {
              if ((&DAT_009b08a8)[iVar7] == 0) {
                (&DAT_009b08a8)[iVar7] = uVar4;
                break;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < 0xf);
            pvStack_20 = _malloc(0xfa4);
            uStack_4 = 1;
            if (pvStack_20 == (void *)0x0) {
              uVar4 = 0;
            }
            else {
              uVar4 = (**(code **)(*piVar3 + 0x50))();
              uVar4 = FUN_0074d510(uVar4);
            }
            uStack_4 = 0xffffffff;
            *(undefined4 *)(iVar2 + 0x10) = uVar4;
          }
          FUN_00760700(iVar5);
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != DAT_0092ce9c + DAT_0092cea4);
    }
    FUN_007ec1c8();
  }
  ExceptionList = local_c;
  return;
}

