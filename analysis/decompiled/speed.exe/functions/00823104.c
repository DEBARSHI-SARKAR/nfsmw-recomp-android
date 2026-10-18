/* speed.exe 00823104 FUN_00823104; analysis pseudocode, not buildable source.
 * calls 008226b4 FUN_008226b4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00823104(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int extraout_EDX;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  int iStack_14;
  int iStack_c;
  int iStack_8;
  
  iVar5 = 0;
  if (0 < DAT_0090bd18) {
    do {
      if ((*(int *)(DAT_009c2324 + iVar5 * 4) != 0) &&
         (pfVar6 = (float *)(DAT_009c2444 + iVar5 * 4), *pfVar6 != _DAT_00890968)) {
        FUN_008226b4(pfVar6,*(undefined4 *)(DAT_009c22f4 + iVar5 * 4));
        iVar5 = extraout_EDX;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_0090bd18);
  }
  iVar5 = 0;
  if (DAT_009c2318._1_1_ != 0) {
    pfVar6 = (float *)&DAT_009c242c;
    do {
      FUN_00822050(pfVar6[-7],param_2 << 2);
      if (*pfVar6 != _DAT_00890968) {
        FUN_008226b4(pfVar6,pfVar6[-7]);
      }
      iVar5 = iVar5 + 1;
      pfVar6 = pfVar6 + 1;
    } while (iVar5 < (int)(uint)DAT_009c2318._1_1_);
  }
  iStack_c = 0;
  if ((byte)DAT_009c2318 != 0) {
    iStack_14 = 0;
    do {
      pcVar1 = (char *)(iStack_14 + DAT_009c2520);
      if (*pcVar1 == '\x02') {
        if (pcVar1[1] == '\0') {
          iVar3 = 0;
          iVar5 = param_2;
        }
        else {
          iVar3 = FUN_00822990(pcVar1);
          pcVar1[1] = '\0';
          iVar5 = param_2 - iVar3;
        }
        if (iVar5 != 0) {
          iVar5 = (*(code *)**(undefined4 **)(pcVar1 + 0x40))
                            (*(undefined4 **)(pcVar1 + 0x40),iVar5,DAT_009c23f0,DAT_009c23f4,0);
          if (iVar5 < 0) {
            FUN_008230f4(iStack_c);
          }
          else if (iVar5 != 0) {
            iStack_8 = 0;
            *(undefined4 *)(pcVar1 + 0x3c) = *(undefined4 *)(DAT_009c23f4 + -4 + iVar5 * 4);
            if (DAT_009c2318._1_1_ != 0) {
              pfVar6 = (float *)(pcVar1 + 0x1c);
              do {
                if (*pfVar6 != _DAT_00890968) {
                  (*DAT_009c2524)(iVar5,*pfVar6,DAT_009c23f4,
                                  *(int *)(((int)&DAT_009c23f4 - (int)pcVar1) + (int)pfVar6) +
                                  iVar3 * 4);
                }
                iStack_8 = iStack_8 + 1;
                pfVar6 = pfVar6 + 1;
              } while (iStack_8 < (int)(uint)DAT_009c2318._1_1_);
            }
            iVar8 = 0;
            if (0 < DAT_0090bd18) {
              do {
                if ((*(int *)(DAT_009c2324 + iVar8 * 4) != 0) &&
                   (pfVar6 = (float *)(*(int *)(pcVar1 + 0x38) + iVar8 * 4),
                   *pfVar6 != _DAT_00890968)) {
                  (*DAT_009c2524)(iVar5,*pfVar6,DAT_009c23f4,
                                  *(int *)(DAT_009c22f4 + iVar8 * 4) + iVar3 * 4);
                  DAT_009c22f8 = 0;
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < DAT_0090bd18);
            }
          }
        }
      }
      iStack_c = iStack_c + 1;
      iStack_14 = iStack_14 + 0x5c;
    } while (iStack_c < (int)(uint)(byte)DAT_009c2318);
  }
  if (DAT_009c2320 != (code *)0x0) {
    (*DAT_009c2320)(param_2);
  }
  iStack_8 = 0;
  if (DAT_009c2318._1_1_ != 0) {
    puVar7 = param_1;
    do {
      piVar4 = (int *)(((int)&DAT_009c2460 - (int)param_1) + (int)puVar7);
      if (*piVar4 == 0) {
        puVar2 = *(undefined4 **)(((int)&DAT_009c2448 - (int)param_1) + (int)puVar7);
        (*(code *)*puVar2)(puVar2,param_2,
                           *(undefined4 *)(((int)&DAT_009c2410 - (int)param_1) + (int)puVar7),
                           *puVar7,0);
      }
      else {
        puVar2 = (undefined4 *)*piVar4;
        (*(code *)*puVar2)(puVar2,param_2,
                           *(undefined4 *)(((int)&DAT_009c2410 - (int)param_1) + (int)puVar7),
                           DAT_009c23f0);
        puVar2 = *(undefined4 **)(((int)&DAT_009c2448 - (int)param_1) + (int)puVar7);
        (*(code *)*puVar2)(puVar2,param_2,DAT_009c23f0,*puVar7,0);
      }
      iStack_8 = iStack_8 + 1;
      puVar7 = puVar7 + 1;
    } while (iStack_8 < (int)(uint)DAT_009c2318._1_1_);
  }
  if ((DAT_009c2251 != '\0') || (DAT_009c2254 != 0)) {
    (*DAT_009c2530)(param_1,param_2);
  }
  return;
}

