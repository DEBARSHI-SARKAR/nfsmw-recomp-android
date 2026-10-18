/* speed.exe 00823151 FUN_00823151; analysis pseudocode, not buildable source.
 * calls 008230f4 FUN_008230f4
 * calls 00822050 FUN_00822050
 * calls 008226b4 FUN_008226b4
 * calls 00822990 FUN_00822990
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00823151(void)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  
  iVar9 = 0;
  if (DAT_009c2318._1_1_ != 0) {
    iVar4 = *(int *)(unaff_EBP + 0xc);
    pfVar7 = (float *)&DAT_009c242c;
    do {
      FUN_00822050(pfVar7[-7],iVar4 << 2);
      if (*pfVar7 != _DAT_00890968) {
        FUN_008226b4(pfVar7,pfVar7[-7]);
      }
      iVar9 = iVar9 + 1;
      pfVar7 = pfVar7 + 1;
    } while (iVar9 < (int)(uint)DAT_009c2318._1_1_);
  }
  *(undefined4 *)(unaff_EBP + -8) = 0;
  if ((byte)DAT_009c2318 != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    do {
      pcVar1 = (char *)(*(int *)(unaff_EBP + -0x10) + DAT_009c2520);
      if (*pcVar1 == '\x02') {
        if (pcVar1[1] == '\0') {
          iVar9 = *(int *)(unaff_EBP + 0xc);
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_00822990(pcVar1);
          iVar9 = *(int *)(unaff_EBP + 0xc) - iVar4;
          pcVar1[1] = '\0';
        }
        if (iVar9 != 0) {
          iVar9 = (*(code *)**(undefined4 **)(pcVar1 + 0x40))
                            (*(undefined4 **)(pcVar1 + 0x40),iVar9,DAT_009c23f0,DAT_009c23f4,0);
          *(int *)(unaff_EBP + -0x14) = iVar9;
          if (iVar9 < 0) {
            FUN_008230f4(*(undefined4 *)(unaff_EBP + -8));
          }
          else if (iVar9 != 0) {
            uVar2 = *(undefined4 *)(DAT_009c23f4 + -4 + iVar9 * 4);
            *(undefined4 *)(unaff_EBP + -4) = 0;
            *(undefined4 *)(pcVar1 + 0x3c) = uVar2;
            if (DAT_009c2318._1_1_ != 0) {
              *(int **)(unaff_EBP + -0xc) = &DAT_009c23f4;
              *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) - (int)pcVar1;
              pfVar7 = (float *)(pcVar1 + 0x1c);
              do {
                if (*pfVar7 != _DAT_00890968) {
                  (*DAT_009c2524)(iVar9,*pfVar7,DAT_009c23f4,
                                  *(int *)(*(int *)(unaff_EBP + -0xc) + (int)pfVar7) + iVar4 * 4);
                  iVar9 = *(int *)(unaff_EBP + -0x14);
                }
                uVar5 = (uint)DAT_009c2318._1_1_;
                *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
                pfVar7 = pfVar7 + 1;
              } while (*(int *)(unaff_EBP + -4) < (int)uVar5);
            }
            iVar9 = 0;
            if (0 < DAT_0090bd18) {
              do {
                if ((*(int *)(DAT_009c2324 + iVar9 * 4) != 0) &&
                   (pfVar7 = (float *)(*(int *)(pcVar1 + 0x38) + iVar9 * 4),
                   *pfVar7 != _DAT_00890968)) {
                  (*DAT_009c2524)(*(undefined4 *)(unaff_EBP + -0x14),*pfVar7,DAT_009c23f4,
                                  *(int *)(DAT_009c22f4 + iVar9 * 4) + iVar4 * 4);
                  DAT_009c22f8 = 0;
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < DAT_0090bd18);
            }
          }
        }
      }
      uVar5 = (uint)(byte)DAT_009c2318;
      *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x5c;
    } while (*(int *)(unaff_EBP + -8) < (int)uVar5);
  }
  if (DAT_009c2320 != (code *)0x0) {
    (*DAT_009c2320)(*(undefined4 *)(unaff_EBP + 0xc));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (DAT_009c2318._1_1_ != 0) {
    puVar8 = *(undefined4 **)(unaff_EBP + 8);
    *(undefined4 **)(unaff_EBP + -0x10) = &DAT_009c2460;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) - (int)puVar8;
    iVar4 = (int)&DAT_009c2410 - (int)puVar8;
    iVar9 = (int)&DAT_009c2448 - (int)puVar8;
    do {
      piVar6 = (int *)(*(int *)(unaff_EBP + -0x10) + (int)puVar8);
      if (*piVar6 == 0) {
        puVar3 = *(undefined4 **)(iVar9 + (int)puVar8);
        (*(code *)*puVar3)(puVar3,*(undefined4 *)(unaff_EBP + 0xc),
                           *(undefined4 *)(iVar4 + (int)puVar8),*puVar8,0);
      }
      else {
        puVar3 = (undefined4 *)*piVar6;
        (*(code *)*puVar3)(puVar3,*(undefined4 *)(unaff_EBP + 0xc),
                           *(undefined4 *)(iVar4 + (int)puVar8),DAT_009c23f0);
        puVar3 = *(undefined4 **)(iVar9 + (int)puVar8);
        (*(code *)*puVar3)(puVar3,*(undefined4 *)(unaff_EBP + 0xc),DAT_009c23f0,*puVar8,0);
      }
      uVar5 = (uint)DAT_009c2318._1_1_;
      *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
      puVar8 = puVar8 + 1;
    } while (*(int *)(unaff_EBP + -4) < (int)uVar5);
  }
  if ((DAT_009c2251 != '\0') || (DAT_009c2254 != 0)) {
    (*DAT_009c2530)(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  }
  return;
}

