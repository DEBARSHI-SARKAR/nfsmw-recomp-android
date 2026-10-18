/* speed.exe 004d02e0 FUN_004d02e0; analysis pseudocode, not buildable source.
 * calls 004ad510 FUN_004ad510
 * calls 004ad0f0 FUN_004ad0f0
 * calls 0083198b FUN_0083198b
 * calls 0081bab9 FUN_0081bab9
 * calls 004d0230 FUN_004d0230
 * calls 004ac950 FUN_004ac950
 * calls 004c91d0 FUN_004c91d0
 * calls 0081d51c FUN_0081d51c
 * calls 004af3e0 FUN_004af3e0
 * calls 007283d0 FUN_007283d0
 * calls 00660270 FUN_00660270
 * calls 0081b190 FUN_0081b190
 * calls 004655f0 FUN_004655f0
 * calls 0064c9b0 FUN_0064c9b0
 * calls 004af350 FUN_004af350
 * calls 004ac3f0 FUN_004ac3f0
 */

void __fastcall FUN_004d02e0(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_28 [2];
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int *local_8;
  undefined4 local_4;
  
  do {
    puVar5 = (undefined4 *)**(int **)(param_1 + 0xbc);
    puVar4 = puVar5;
LAB_004d0300:
    if (puVar4 == *(undefined4 **)(param_1 + 0xbc)) {
      piVar7 = *(int **)(param_1 + 0xfc);
      if (piVar7 == (int *)0x0) {
        FUN_004d0230();
        if (*(int *)(param_1 + 0xfc) != 0) {
          return;
        }
        if (*(int *)(param_1 + 0x108) != 0) {
          return;
        }
        iVar6 = *(int *)(param_1 + 0x94);
        if (iVar6 != 0) {
          iVar2 = *(int *)(param_1 + 0x98);
          if (iVar2 == 3) {
            FUN_004655f0(iVar6);
          }
          else if (iVar2 == 1) {
            FUN_004655f0(iVar6);
          }
          else if (iVar2 == 2) {
            FUN_007283d0(iVar6);
          }
          *(undefined4 *)(param_1 + 0x94) = 0;
        }
        if (*(int *)(param_1 + 4) == 0) {
          return;
        }
        FUN_004ac950();
        FUN_004ad0f0();
        FUN_004ad510();
        FUN_0083198b(&PTR_s_FX_TURBO_01_008f0358);
        FUN_004ac3f0();
        FUN_0083198b(&PTR_s_SIREN_008f0230);
        FUN_0083198b(&PTR_s_SIREN_BED_008f0238);
        FUN_0083198b(&PTR_s_AEMS_StichCollision_008f0340);
        FUN_0083198b(&PTR_s_AEMS_StichWoosh_008f0348);
        FUN_0083198b(&PTR_s_AEMS_StichStatic_008f0350);
        (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined1 *)(param_1 + 0x10c) = 0;
        return;
      }
      if ((char)piVar7[0xe] == '\0') {
        if (*piVar7 == 3) {
          iVar6 = FUN_0081b190();
          if (iVar6 < 1) goto LAB_004d0431;
        }
        else if (((*piVar7 != 4) || (iVar6 = FUN_0081d51c(), iVar6 < 1)) ||
                (*(char *)(param_1 + 0x10d) != '\0')) goto LAB_004d0431;
        FUN_004af350();
      }
LAB_004d0431:
      iVar6 = FUN_00660270(*(undefined1 *)(*(int *)(param_1 + 0xfc) + 0x38),8,0xc);
      *(bool *)(*(int *)(param_1 + 0xfc) + 0x39) = iVar6 != 0;
      iVar6 = FUN_0064c9b0();
      if ((iVar6 != 0) && (*(char *)(*(int *)(param_1 + 0xfc) + 0x39) != '\0')) {
        cVar1 = *(char *)(*(int *)(param_1 + 0xfc) + 0x38);
        while (cVar1 == '\0') {
          FUN_0081bab9();
          if ((char)(*(int **)(param_1 + 0xfc))[0xe] == '\0') {
            iVar6 = **(int **)(param_1 + 0xfc);
            if (iVar6 == 3) {
              iVar6 = FUN_0081b190();
              if (0 < iVar6) {
                iVar6 = DAT_00912374;
                if (DAT_00912374 == 0) {
                  iVar6 = DAT_0091236c;
                }
                *(undefined1 *)(iVar6 + 0x38) = 1;
                *(undefined4 *)(iVar6 + 0x60) = DAT_00925ae8;
              }
            }
            else if (((iVar6 == 4) && (iVar6 = FUN_0081d51c(), 0 < iVar6)) &&
                    (*(char *)(param_1 + 0x10d) == '\0')) {
              FUN_004af350();
            }
          }
          cVar1 = *(char *)(*(int *)(param_1 + 0xfc) + 0x38);
        }
      }
      if (*(char *)((int)*(int **)(param_1 + 0xfc) + 0x39) == '\0') {
        return;
      }
      if (**(int **)(param_1 + 0xfc) < 5) {
        FUN_004af3e0();
      }
      FUN_004d0230();
      return;
    }
    local_18 = puVar4[6];
    local_28[0] = puVar4[2];
    local_1c = puVar4[5];
    local_8 = (int *)puVar4[10];
    local_14 = puVar4[7];
    local_10 = puVar4[8];
    local_c = *(undefined1 *)(puVar4 + 9);
    local_4 = puVar4[0xb];
    local_20 = puVar4[4];
    iVar6 = 0;
    if (*(int *)(param_1 + 0xa0) < 1) {
LAB_004d038b:
      puVar4 = (undefined4 *)*puVar4;
      goto LAB_004d0300;
    }
    piVar7 = &DAT_00912860;
    while ((local_20 != *piVar7 || (local_1c != piVar7[1]))) {
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 0x1a;
      if (*(int *)(param_1 + 0xa0) <= iVar6) goto code_r0x004d0375;
    }
    if ((iVar6 == -1) || ((&DAT_00912891)[iVar6 * 0x68] == '\0')) goto LAB_004d038b;
    bVar3 = true;
    if (puVar5 == *(undefined4 **)(param_1 + 0xbc)) goto LAB_004d03cb;
    do {
      if (((int *)puVar5[10] == local_8) && ((puVar5[4] != local_20 || (puVar5[5] != local_1c)))) {
        bVar3 = false;
      }
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != *(undefined4 **)(param_1 + 0xbc));
    if (bVar3) {
LAB_004d03cb:
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 0x1c))();
      }
    }
    FUN_004c91d0(local_28);
  } while( true );
code_r0x004d0375:
  puVar4 = (undefined4 *)*puVar4;
  goto LAB_004d0300;
}

