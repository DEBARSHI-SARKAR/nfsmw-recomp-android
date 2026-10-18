/* speed.exe 0050ce20 FUN_0050ce20; analysis pseudocode, not buildable source.
 * calls 0050c7b0 FUN_0050c7b0
 * calls 00455fd0 FUN_00455fd0
 * calls 005041a0 FUN_005041a0
 * calls 00444fe0 FUN_00444fe0
 * calls 00504210 FUN_00504210
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050ce20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iStack_130;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  int aiStack_110 [67];
  
  puVar9 = DAT_0092d87c;
  if (DAT_0092d87c != DAT_0092d87c + DAT_0092d884) {
    do {
      piVar4 = (int *)(**(code **)(*(int *)*puVar9 + 4))();
      if ((piVar4 != (int *)0x0) &&
         (piVar4 = (int *)(**(code **)(*piVar4 + 0x54))(), piVar4 != (int *)0x0)) {
        pfVar5 = (float *)(**(code **)(*piVar4 + 0x20))();
        pfVar6 = (float *)(**(code **)(*piVar4 + 0x24))();
        fStack_118 = pfVar6[1] * _DAT_008910ec + pfVar5[1];
        fStack_120 = pfVar6[2] * _DAT_008910ec + pfVar5[2];
        fStack_11c = -(*pfVar6 * _DAT_008910ec + *pfVar5);
        iVar7 = FUN_00504210(&fStack_120,aiStack_110);
        iStack_130 = 0;
        if (0 < iVar7) {
          do {
            puVar2 = (undefined4 *)aiStack_110[iStack_130];
            if ((((puVar2[3] == 0) && (DAT_008f86ec != '\0')) &&
                (iVar8 = FUN_00455fd0(0xaba86e60,*puVar2), iVar8 != 0)) &&
               (iVar8 = FUN_0050c7b0(iVar8,0xc000000), iVar8 != 0)) {
              *(undefined4 **)(iVar8 + 0x60) = puVar2;
              *(undefined1 **)(iVar8 + 0x6c) = &LAB_004fdfd0;
              puVar2[3] = iVar8;
              FUN_00444fe0(iVar8 + 0x20,puVar2 + 4);
              puVar1 = (undefined4 *)(iVar8 + 8);
              for (puVar3 = *(undefined4 **)(iVar8 + 8); puVar3 != puVar1;
                  puVar3 = (undefined4 *)*puVar3) {
                FUN_00444fe0(puVar3 + 8,puVar2 + 4);
              }
              puVar2 = (undefined4 *)*puVar1;
              *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x18) | 1;
              for (; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
                if ((*(int *)(puVar2[0x1f] + 4) != 0) &&
                   (*(char *)(*(int *)(puVar2[0x1f] + 8) + 0x112) != '\0')) {
                  puVar2[6] = puVar2[6] | 1;
                }
              }
            }
            iStack_130 = iStack_130 + 1;
          } while (iStack_130 < iVar7);
        }
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != DAT_0092d87c + DAT_0092d884);
  }
  FUN_005041a0();
  return;
}

