/* speed.exe 005b42d0 FUN_005b42d0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 */

void __thiscall FUN_005b42d0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  void *pvVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  iVar2 = *(int *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar9 = param_2 * param_3 * 2;
    pvVar4 = _malloc(uVar9);
    *(void **)(param_1 + 0xa0) = pvVar4;
    pvVar4 = _malloc(param_2 * 4);
    *(void **)(param_1 + 0x9c) = pvVar4;
    puVar10 = *(undefined4 **)(param_1 + 0xa0);
    for (uVar7 = (param_2 * param_3 & 0x7fffffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    uVar7 = 0;
    if (param_2 != 0) {
      iVar8 = 0;
      do {
        *(int *)(*(int *)(param_1 + 0x9c) + uVar7 * 4) = *(int *)(param_1 + 0xa0) + iVar8;
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + param_3 * 2;
      } while (uVar7 < param_2);
    }
    *(uint *)(param_1 + 0x90) = param_2;
    *(int *)(param_1 + 0x94) = param_3;
    if (iVar1 == 0) goto LAB_005b4473;
    if ((iVar2 != 0) && (param_2 = 0, *(int *)(param_1 + 100) != 0)) {
      do {
        uVar7 = 0;
        if (*(int *)(param_1 + 0x60) != 0) {
          do {
            iVar8 = (*(int *)(param_1 + 0x60) * param_2 + uVar7) * 0x30;
            iVar5 = iVar8 + *(int *)(param_1 + 0x8c);
            if (*(int *)(iVar8 + 0x18 + *(int *)(param_1 + 0x8c)) == 2) {
              puVar6 = *(undefined2 **)(*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x98) * 4);
              psVar3 = *(short **)(iVar5 + 0x20);
              *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
              *puVar6 = 0;
              *(undefined2 **)(iVar5 + 0x20) = puVar6;
              if (psVar3 != (short *)0x0) {
                iVar8 = 0;
                if (*psVar3 != 0) {
                  iVar5 = (int)psVar3 - (int)puVar6;
                  do {
                    if (param_3 + -1 == iVar8) break;
                    *puVar6 = *(undefined2 *)(iVar5 + (int)puVar6);
                    puVar6 = puVar6 + 1;
                    iVar8 = iVar8 + 1;
                  } while (*(short *)(iVar5 + (int)puVar6) != 0);
                }
              }
              *puVar6 = 0;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(param_1 + 0x60));
        }
        param_2 = param_2 + 1;
      } while (param_2 < *(uint *)(param_1 + 100));
    }
  }
  if (iVar1 != 0) {
    thunk_FUN_007c7250(iVar1);
  }
LAB_005b4473:
  if (iVar2 != 0) {
    thunk_FUN_007c7250(iVar2);
  }
  return;
}

