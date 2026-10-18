/* speed.exe 005ab450 FUN_005ab450; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 006269b0 FUN_006269b0
 * calls 00659250 FUN_00659250
 * calls 00590d40 FUN_00590d40
 * calls 005d0370 FUN_005d0370
 * calls 00454810 FUN_00454810
 * calls 00564f10 FUN_00564f10
 * calls 00452380 FUN_00452380
 * calls 00460ca0 FUN_00460ca0
 * calls 00452880 FUN_00452880
 * calls 004b8a10 FUN_004b8a10
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0045a840 FUN_0045a840
 * calls 0045a430 FUN_0045a430
 * calls 0057f4d0 FUN_0057f4d0
 * calls 005ab070 FUN_005ab070
 * calls 006530a0 FUN_006530a0
 * calls 005aac30 FUN_005aac30
 * calls 0056bb80 FUN_0056bb80
 * calls 004df330 FUN_004df330
 * calls 0056d660 FUN_0056d660
 * calls 00460d20 FUN_00460d20
 * calls 00564e60 FUN_00564e60
 */

void __thiscall FUN_005ab450(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  char *pcVar8;
  bool bVar9;
  int iStack_4c;
  undefined1 local_2c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar5 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00873d77;
  pvStack_c = ExceptionList;
  if (param_2 == (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    iVar3 = FUN_0056bb80();
    if (iVar3 == 0) {
      iVar3 = FUN_0056bb80();
    }
    FUN_00460ca0(local_2c,iVar3,0x20);
  }
  else {
    ExceptionList = &pvStack_c;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    iVar3 = FUN_0056bb80();
    if (iVar3 == 0) {
      iVar3 = FUN_0056bb80();
    }
    FUN_00460ca0(local_2c,iVar3,0x20);
  }
  FUN_00460ca0(param_1,local_2c,0x20);
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_00590d40();
  if (puVar5 == (undefined4 *)0x0) {
    FUN_0056d660();
    FUN_0057f4d0();
    puVar5 = param_1 + 0x2438;
    for (iVar3 = 0x2f6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    bVar9 = DAT_0091dcb0 == '\0';
    *(undefined1 *)(param_1 + 0x2437) = 0;
    if (bVar9) {
      DAT_0091dcb0 = '\x01';
      FUN_00452880(0x14,1);
      param_2 = (undefined4 *)(*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
      uStack_4 = 0;
      if (param_2 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004b8a10(0x7e4b0ed2,0,0);
      }
      uStack_4 = 0xffffffff;
      if (*(int *)(iVar3 + 4) != 0) {
        iVar3 = FUN_00454810(0x5611db83,0);
        if (iVar3 == 0) {
          iVar3 = FUN_006269b0(0xc);
        }
        FUN_00564e60(iVar3,0,0);
        uStack_4 = 1;
        DAT_008f42c4 = FUN_00564f10();
        iVar3 = 0;
        while( true ) {
          if (DAT_009123d0 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = (int)DAT_009123d4 - DAT_009123d0 >> 2;
          }
          if (iVar4 <= iVar3) break;
          thunk_FUN_007c7250(*(undefined4 *)(DAT_009123d0 + iVar3 * 4));
          iVar3 = iVar3 + 1;
        }
        if (DAT_009123d0 != 0) {
          FUN_005d0370(DAT_009123d0,(DAT_009123d8 - DAT_009123d0 >> 2) * 4,
                       &PTR_LAB_004c5452_1_00890f10);
        }
        DAT_009123d0 = 0;
        DAT_009123d4 = (undefined4 *)0x0;
        DAT_009123d8 = 0;
        if (0 < DAT_008f42c4) {
          FUN_005ab070(DAT_008f42c4);
        }
        iVar3 = 0;
        if (0 < DAT_008f42c4) {
          do {
            puVar5 = _malloc(0x14);
            param_2 = puVar5;
            FUN_00452380(0,0,0);
            uStack_4._0_1_ = 2;
            if (iStack_4c == 0) {
              iStack_4c = FUN_006269b0(0x38);
            }
            uStack_4 = CONCAT31(uStack_4._1_3_,3);
            iVar4 = FUN_00454810(0x737714de,iVar3);
            if (iVar4 == 0) {
              iVar4 = FUN_006269b0(0xc);
            }
            FUN_0045a840(iVar4);
            puVar6 = *(undefined1 **)(iStack_4c + 0x1c);
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &DAT_00890978;
            }
            *puVar5 = puVar6;
            puVar6 = *(undefined1 **)(iStack_4c + 0x2c);
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &DAT_00890978;
            }
            puVar5[2] = puVar6;
            puVar6 = *(undefined1 **)(iStack_4c + 0xc);
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &DAT_00890978;
            }
            puVar5[1] = puVar6;
            iVar4 = FUN_00454810(0x58f80e5e,0);
            if (iVar4 == 0) {
              iVar4 = FUN_006269b0(0x10);
            }
            puVar6 = *(undefined1 **)(iVar4 + 0xc);
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &DAT_00890978;
            }
            puVar5[3] = puVar6;
            puVar5[4] = *(undefined4 *)(iStack_4c + 0x30);
            if ((DAT_009123d0 == 0) ||
               ((uint)(DAT_009123d8 - DAT_009123d0 >> 2) <=
                (uint)((int)DAT_009123d4 - DAT_009123d0 >> 2))) {
              FUN_005aac30(DAT_009123d4,1,&param_2);
            }
            else {
              *DAT_009123d4 = puVar5;
              DAT_009123d4 = DAT_009123d4 + 1;
            }
            uStack_4 = CONCAT31(uStack_4._1_3_,1);
            FUN_0045a430();
            iVar3 = iVar3 + 1;
          } while (iVar3 < DAT_008f42c4);
        }
        uStack_4 = 0xffffffff;
        FUN_0045a430();
      }
    }
    iVar3 = 0;
    if (0 < DAT_008f42c4) {
      pcVar8 = (char *)(param_1 + 0xca);
      do {
        *(int *)(pcVar8 + -4) = iVar3;
        iVar4 = *(int *)(DAT_009123d0 + iVar3 * 4);
        if (iVar4 == 0) {
          cVar2 = '\0';
        }
        else {
          iVar7 = FUN_00460d20(*(undefined4 *)(iVar4 + 0xc),&DAT_008a2ad8);
          if (iVar7 == 0) {
            cVar2 = '\x01';
          }
          else {
            iVar7 = FUN_00460d20(*(undefined4 *)(iVar4 + 0xc),&DAT_008a2ad4);
            if (iVar7 == 0) {
              cVar2 = '\x02';
            }
            else {
              iVar4 = FUN_00460d20(*(undefined4 *)(iVar4 + 0xc),&DAT_008a2ad0);
              cVar2 = (-(iVar4 != 0) & 0xfdU) + 3;
            }
          }
        }
        *pcVar8 = cVar2;
        iVar3 = iVar3 + 1;
        pcVar8 = pcVar8 + 8;
      } while (iVar3 < DAT_008f42c4);
    }
    FUN_004df330(1);
  }
  cVar2 = FUN_006530a0(4);
  if ((cVar2 != '\0') && ((*(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) >> 0x12 & 1) == 0)) {
    puVar1 = (uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac);
    *puVar1 = *puVar1 | 0x40000;
  }
  if ((((uint)param_1[0x2b] >> 0x11 & 1) == 0) && (cVar2 = FUN_006530a0(5), cVar2 != '\0')) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      if (*(int *)((int)&DAT_0091d928 + iVar3) == 0) {
        (&DAT_0091d928)[iVar4 * 3] = 2;
        (&DAT_0091d92c)[iVar4 * 3] = 0;
        (&DAT_0091d930)[iVar4 * 3] = 1;
        break;
      }
      iVar3 = iVar3 + 0xc;
      iVar4 = iVar4 + 1;
    } while (iVar3 < 0x2f4);
    param_1[0x2b] = param_1[0x2b] | 0x20000;
  }
  ExceptionList = pvStack_c;
  return;
}

