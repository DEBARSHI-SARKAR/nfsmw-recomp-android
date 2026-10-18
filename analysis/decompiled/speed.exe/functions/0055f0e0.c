/* speed.exe 0055f0e0 FUN_0055f0e0; analysis pseudocode, not buildable source.
 * calls 00586ca0 FUN_00586ca0
 * calls 005b8550 FUN_005b8550
 * calls 00513bc0 FUN_00513bc0
 * calls 0059b710 FUN_0059b710
 * calls 00586760 FUN_00586760
 * calls 008377b0 FUN_008377b0
 * calls 005868e0 FUN_005868e0
 * calls 00513ee0 FUN_00513ee0
 * calls 005252d0 FUN_005252d0
 * calls 0053ede0 FUN_0053ede0
 * calls 00572070 FUN_00572070
 * calls 005b7580 FUN_005b7580
 * calls 00592710 FUN_00592710
 * calls 00586d40 FUN_00586d40
 * calls 0078c730 FUN_0078c730
 * calls 005b5b70 FUN_005b5b70
 * calls 00652ad0 _malloc
 * calls 00460c70 FUN_00460c70
 * calls 0051dcf0 FUN_0051dcf0
 * calls 0053f1a0 FUN_0053f1a0
 * calls 005b1360 FUN_005b1360
 * calls 005b8400 FUN_005b8400
 * calls 0054bd20 FUN_0054bd20
 * calls 00591d90 FUN_00591d90
 * calls 00460d20 FUN_00460d20
 * calls 0053ed60 FUN_0053ed60
 * calls 0078c790 FUN_0078c790
 * calls 00573140 FUN_00573140
 * calls 005a8d10 FUN_005a8d10
 */

undefined4 __thiscall FUN_0055f0e0(int param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 auStack_538 [154];
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  char *pcStack_2c4;
  int local_2a4;
  char local_29c;
  undefined4 local_29b;
  undefined4 local_297;
  undefined4 local_293;
  undefined4 local_28f;
  undefined4 local_28b;
  undefined4 local_287;
  undefined4 local_283;
  undefined2 local_27f;
  undefined1 local_27d;
  undefined4 local_27c [11];
  int local_250;
  int local_224;
  undefined1 local_220 [544];
  
  if (*(int *)(DAT_0091cf90 + 0x19c) < 2) {
    return 0;
  }
  local_29b = 0;
  local_297 = 0;
  local_293 = 0;
  local_28f = 0;
  local_28b = 0;
  local_287 = 0;
  local_283 = 0;
  local_27f = 0;
  local_29c = '\0';
  local_27d = 0;
  if ((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != -0x18)) {
    pcStack_2c4 = &local_29c;
    uStack_2c8 = 0x55f154;
    FUN_00460c70();
  }
  FUN_0078c730();
  pcStack_2c4 = (char *)0x55f168;
  FUN_008377b0();
  if (param_2 != '\0') {
    if (*(int *)(param_1 + 0x70) != 0) {
      pcStack_2c4 = (char *)0x55f187;
      FUN_00586760();
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  FUN_0053ed60();
  FUN_00586d40();
  iVar7 = *(int *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  for (; iVar7 < 100; iVar7 = iVar7 + 1) {
    pcStack_2c4 = (char *)0x55f1c3;
    FUN_00513ee0();
    if (local_224 == 0) break;
    pcStack_2c4 = (char *)0x55f1d9;
    puVar3 = _malloc(0x40);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar9 = puVar3 + 3;
      *puVar9 = puVar9;
      puVar3[4] = puVar9;
      *(undefined1 *)(puVar3 + 5) = 1;
      *puVar3 = &PTR_FUN_0089e148;
      puVar3[0xe] = 0xffffffff;
      *(undefined1 *)(puVar3 + 0xf) = 1;
    }
    pcStack_2c4 = local_220;
    uStack_2c8 = 0x55f214;
    FUN_0051dcf0();
    pcStack_2c4 = (char *)(puVar3 + 6);
    puVar3[0xe] = iVar7;
    uStack_2c8 = 0x55f228;
    FUN_00460c70();
    *(bool *)(puVar3 + 0xf) = local_250 != 0;
    iVar5 = *(int *)(param_1 + 0x104);
    if (iVar5 < 9) {
      puVar3 = local_27c;
      puVar9 = auStack_538;
      for (iVar6 = 0x9f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar9 = puVar9 + 1;
      }
      FUN_0053ede0(iVar5);
    }
    pcStack_2c4 = (char *)0x55f274;
    FUN_005868e0();
    pcStack_2c4 = (char *)0x55f27c;
    FUN_00592710();
    *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
  }
  if (*(int *)(param_1 + 0x104) < 9) {
    local_2a4 = *(int *)(param_1 + 0x104) + 1;
    do {
      pcVar4 = *(char **)(param_1 + 0x10);
      pcStack_2c4 = "STATUS_%dA";
      uStack_2c8 = 0x55f2b9;
      FUN_00573140();
      if (pcVar4 != (char *)0x0) {
        pcVar1 = pcVar4 + 1;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        if (pcVar4 != pcVar1) {
          if (DAT_0091d218 < 1) {
            pcStack_2c4 = (char *)0x55f309;
            iVar7 = FUN_005b5b70();
            if (iVar7 == 0) {
              pcStack_2c4 = (char *)0x55f316;
              iVar7 = FUN_005b7580();
              if (iVar7 == 0) goto LAB_0055f353;
              goto LAB_0055f31a;
            }
          }
          else {
            pcStack_2c4 = (char *)0x55f2f3;
            FUN_00572070();
            pcStack_2c4 = (char *)0x55f2fa;
            iVar7 = FUN_00591d90();
LAB_0055f31a:
            if (iVar7 == 0) goto LAB_0055f353;
          }
          pcStack_2c4 = (char *)0x55f32a;
          iVar7 = FUN_005b8550();
          if (iVar7 != 0) {
            pcStack_2c4 = (char *)0x55f33c;
            iVar7 = FUN_005b1360();
            if (iVar7 != 0) {
              uStack_2c8 = 0x55f34c;
              pcStack_2c4 = (char *)iVar7;
              FUN_005b8400();
              *(undefined4 *)(iVar7 + 0x10) = 0;
            }
          }
        }
      }
LAB_0055f353:
      pcVar4 = *(char **)(param_1 + 0x10);
      pcStack_2c4 = "STATUS_%d";
      uStack_2c8 = 0x55f365;
      FUN_00573140();
      if (pcVar4 != (char *)0x0) {
        pcVar1 = pcVar4 + 1;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        if (pcVar4 != pcVar1) {
          if (DAT_0091d218 < 1) {
            pcStack_2c4 = (char *)0x55f3b5;
            iVar7 = FUN_005b5b70();
            if (iVar7 == 0) {
              pcStack_2c4 = (char *)0x55f3c2;
              iVar7 = FUN_005b7580();
              if (iVar7 == 0) goto LAB_0055f3ff;
              goto LAB_0055f3c6;
            }
          }
          else {
            pcStack_2c4 = (char *)0x55f39f;
            FUN_00572070();
            pcStack_2c4 = (char *)0x55f3a6;
            iVar7 = FUN_00591d90();
LAB_0055f3c6:
            if (iVar7 == 0) goto LAB_0055f3ff;
          }
          pcStack_2c4 = (char *)0x55f3d6;
          iVar7 = FUN_005b8550();
          if (iVar7 != 0) {
            pcStack_2c4 = (char *)0x55f3e8;
            iVar7 = FUN_005b1360();
            if (iVar7 != 0) {
              uStack_2c8 = 0x55f3f8;
              pcStack_2c4 = (char *)iVar7;
              FUN_005b8400();
              *(undefined4 *)(iVar7 + 0x10) = 0;
            }
          }
        }
      }
LAB_0055f3ff:
      pcVar4 = *(char **)(param_1 + 0x10);
      pcStack_2c4 = "GROUP_FLAG_%d";
      uStack_2c8 = 0x55f411;
      FUN_00573140();
      if (pcVar4 != (char *)0x0) {
        pcVar1 = pcVar4 + 1;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        if (pcVar4 != pcVar1) {
          if (DAT_0091d218 < 1) {
            pcStack_2c4 = (char *)0x55f464;
            iVar7 = FUN_005b5b70();
            if (iVar7 == 0) {
              pcStack_2c4 = (char *)0x55f471;
              iVar7 = FUN_005b7580();
              if (iVar7 == 0) goto LAB_0055f4ae;
              goto LAB_0055f475;
            }
          }
          else {
            pcStack_2c4 = (char *)0x55f44e;
            FUN_00572070();
            pcStack_2c4 = (char *)0x55f455;
            iVar7 = FUN_00591d90();
LAB_0055f475:
            if (iVar7 == 0) goto LAB_0055f4ae;
          }
          pcStack_2c4 = (char *)0x55f485;
          iVar7 = FUN_005b8550();
          if (iVar7 != 0) {
            pcStack_2c4 = (char *)0x55f497;
            iVar7 = FUN_005b1360();
            if (iVar7 != 0) {
              uStack_2c8 = 0x55f4a7;
              pcStack_2c4 = (char *)iVar7;
              FUN_005b8400();
              *(undefined4 *)(iVar7 + 0x10) = 0;
            }
          }
        }
      }
LAB_0055f4ae:
      local_2a4 = local_2a4 + 1;
    } while (local_2a4 < 10);
  }
  uStack_2c8 = *(undefined4 *)(param_1 + 0x10);
  pcStack_2c4 = (char *)0xa0ed7306;
  uStack_2cc = 0x55f4d3;
  FUN_005252d0();
  if (param_2 == '\0') {
LAB_0055f549:
    iVar7 = *(int *)(param_1 + 0x104);
    bVar10 = iVar7 == 0;
    if (!bVar10) goto LAB_0055f5f6;
  }
  else {
    pcStack_2c4 = (char *)0x55f4ed;
    FUN_0059b710();
    if (*(int *)(param_1 + 0x104) != 0) {
      if (*(int *)(param_1 + 0x70) != 0) {
        pcStack_2c4 = (char *)0x55f508;
        FUN_00586760();
      }
      if (*(int *)(param_1 + 0x68) != -0x18) {
        pcStack_2c4 = (char *)0x55f516;
        FUN_0078c730();
        pcStack_2c4 = (char *)0x55f51d;
        FUN_0078c790();
        pcStack_2c4 = (char *)local_27c;
        uStack_2c8 = 0x55f528;
        puVar3 = (undefined4 *)FUN_00513bc0();
        puVar9 = auStack_538;
        for (iVar7 = 0x9f; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
        }
        FUN_0053f1a0();
      }
      goto LAB_0055f549;
    }
  }
  pcVar4 = *(char **)(param_1 + 0x10);
  if (pcVar4 != (char *)0x0) {
    pcVar1 = pcVar4 + 1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if (pcVar4 != pcVar1) {
      if (DAT_0091d218 < 1) {
        pcStack_2c4 = (char *)0x55f5a4;
        iVar7 = FUN_005b5b70();
        if (iVar7 == 0) {
          pcStack_2c4 = (char *)0x55f5b1;
          iVar7 = FUN_005b7580();
          if (iVar7 == 0) goto LAB_0055f5ee;
          goto LAB_0055f5b5;
        }
      }
      else {
        pcStack_2c4 = (char *)0x55f58e;
        FUN_00572070();
        pcStack_2c4 = (char *)0x55f595;
        iVar7 = FUN_00591d90();
LAB_0055f5b5:
        if (iVar7 == 0) goto LAB_0055f5ee;
      }
      pcStack_2c4 = (char *)0x55f5c5;
      iVar7 = FUN_005b8550();
      if (iVar7 != 0) {
        pcStack_2c4 = (char *)0x55f5d7;
        iVar7 = FUN_005b1360();
        if (iVar7 != 0) {
          uStack_2c8 = 0x55f5e7;
          pcStack_2c4 = (char *)iVar7;
          FUN_005b8400();
          *(undefined4 *)(iVar7 + 0x10) = 0;
        }
      }
    }
  }
LAB_0055f5ee:
  iVar7 = *(int *)(param_1 + 0x104);
  bVar10 = iVar7 == 0;
LAB_0055f5f6:
  if ((!bVar10 && -1 < iVar7) && (local_29c != '\0')) {
    if (*(int *)(param_1 + 0x54) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x54) + -4;
    }
    uVar8 = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      do {
        pcStack_2c4 = (char *)(iVar7 + 0x18);
        uStack_2c8 = 0x55f625;
        iVar5 = FUN_00460d20();
        if (iVar5 == 0) {
          pcStack_2c4 = (char *)0x55f64f;
          FUN_00586ca0();
          pcStack_2c4 = (char *)0x55f658;
          FUN_005a8d10();
          break;
        }
        if (*(int *)(iVar7 + 4) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar7 + 4) + -4;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(param_1 + 0x60));
    }
  }
  uStack_2cc = *(undefined4 *)(param_1 + 0x10);
  pcStack_2c4 = "%d";
  uStack_2c8 = 0xb2037bdc;
  uStack_2d0 = 0x55f672;
  FUN_005252d0();
  if (*(int *)(param_1 + 0x104) != 0) {
    pcStack_2c4 = (char *)0x55f68f;
    FUN_0078c730();
    pcStack_2c4 = (char *)0x55f696;
    FUN_0078c790();
    pcStack_2c4 = (char *)local_27c;
    uStack_2c8 = 0x55f6a1;
    puVar3 = (undefined4 *)FUN_00513bc0();
    puVar9 = auStack_538;
    for (iVar7 = 0x9f; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_0053f1a0();
    FUN_0054bd20();
  }
  return *(undefined4 *)(param_1 + 0x34);
}

