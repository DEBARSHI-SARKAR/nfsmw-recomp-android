/* speed.exe 006fce10 FUN_006fce10; analysis pseudocode, not buildable source.
 * calls 006fb7f0 FUN_006fb7f0
 * calls 0062f420 FUN_0062f420
 * calls 006ea5a0 FUN_006ea5a0
 * calls 006fb930 FUN_006fb930
 * calls 006253d0 FUN_006253d0
 * calls 005d59f0 FUN_005d59f0
 * calls 00664cc0 FUN_00664cc0
 * calls 005d5a50 FUN_005d5a50
 * calls 006f61d0 FUN_006f61d0
 * calls 006f82f0 FUN_006f82f0
 * calls 005d0370 FUN_005d0370
 * calls 006466b0 FUN_006466b0
 * calls 006efc40 FUN_006efc40
 * calls 004647c0 FUN_004647c0
 * calls 004c1c60 FUN_004c1c60
 * calls 00627400 FUN_00627400
 * calls 004258d0 FUN_004258d0
 * calls 005cc240 FUN_005cc240
 * calls 004b9080 FUN_004b9080
 * calls 00604270 FUN_00604270
 * calls 00460bf0 FUN_00460bf0
 * calls 00654af0 FUN_00654af0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006fce10(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  char *pcStack_58;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087f784;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008b0e18;
  param_1[2] = &PTR_LAB_008b0e10;
  param_1[0xb] = &PTR_LAB_008b0dfc;
  param_1[0xe] = &PTR_LAB_008b0de0;
  param_1[0x12] = &PTR_LAB_008b0d78;
  param_1[0x14] = &PTR_LAB_008b0d70;
  param_1[0x16] = &PTR_LAB_008b0d60;
  pcStack_58 = (char *)param_1[0xbe];
  local_4 = 5;
  local_30 = param_1;
  FUN_00664cc0();
  if (param_1[0x18] != 0) {
    param_1[9] = param_1[9] + -1;
    for (iVar5 = DAT_009885d0; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
      if (*(int *)(iVar5 + 0x20) == param_1[0x18]) goto LAB_006fce9e;
    }
    iVar5 = 0;
LAB_006fce9e:
    *(uint *)(iVar5 + 0x18) = *(uint *)(iVar5 + 0x18) | 0x10;
  }
  pcStack_58 = (char *)0x6fcea9;
  FUN_006ea5a0();
  pcStack_58 = (char *)0x6fceb4;
  FUN_004c1c60();
  pcStack_58 = "IntroNisFlyInDD";
  iVar5 = FUN_00460bf0();
  if (iVar5 == param_1[0xe5]) {
    pcStack_58 = "DDAY flyin";
    FUN_004b9080(0,8);
  }
  pcVar6 = (char *)0x0;
  do {
    pcVar6 = pcVar6 + 1;
    pcStack_58 = pcVar6;
    FUN_004647c0(&local_2c,"cop%d");
    local_38 = FUN_005cc240(&local_2c);
    pcStack_58 = (char *)&local_38;
    FUN_006f61d0(&local_34);
    if ((local_34 != (undefined1 *)param_1[0xec]) &&
       (pcStack_58 = (char *)**(int **)(local_34 + 0x10), pcStack_58 != (char *)0x0)) {
      FUN_006fb930();
      pcStack_58 = &LAB_00402830;
      piVar7 = (int *)FUN_005d59f0();
      if (piVar7 != (int *)0x0) {
        pcStack_58 = (char *)0x6fcf50;
        (**(code **)(*piVar7 + 8))();
      }
    }
  } while ((int)pcVar6 < 8);
  piVar7 = *(int **)param_1[0xec];
  if (piVar7 != (int *)param_1[0xec]) {
    do {
      piVar2 = (int *)piVar7[4];
      if ((int *)*piVar2 != (int *)0x0) {
        pcStack_58 = (char *)0x0;
        (**(code **)(*(int *)*piVar2 + 0xc0))();
      }
      if (*piVar2 != 0) {
        *piVar2 = 0;
      }
      pcStack_58 = (char *)0x0;
      FUN_005d0370(piVar2,8);
      if (*(char *)((int)piVar7 + 0x15) == '\0') {
        piVar2 = (int *)piVar7[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar7 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar7 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0x15);
          piVar4 = (int *)piVar7[1];
          piVar2 = piVar7;
          while ((piVar7 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0x15);
            piVar4 = (int *)piVar7[1];
            piVar2 = piVar7;
          }
        }
      }
    } while (piVar7 != (int *)param_1[0xec]);
  }
  pcStack_58 = *(char **)(param_1[0xec] + 4);
  FUN_006efc40();
  *(undefined4 *)(param_1[0xec] + 4) = param_1[0xec];
  param_1[0xed] = 0;
  *(undefined4 *)param_1[0xec] = param_1[0xec];
  *(undefined4 *)(param_1[0xec] + 8) = param_1[0xec];
  if ((int *)param_1[0xf8] != (int *)0x0) {
    pcStack_58 = (char *)0x1;
    (**(code **)(*(int *)param_1[0xf8] + 0x34))();
    param_1[0xf8] = 0;
  }
  pcStack_58 = (char *)0x10;
  _DAT_00902144 = 0xffffffff;
  local_34 = (undefined1 *)FUN_00627400();
  local_4._0_1_ = 6;
  if (local_34 != (undefined1 *)0x0) {
    pcStack_58 = (char *)0x0;
    FUN_006253d0(4);
  }
  local_4._0_1_ = 5;
  uVar3 = (undefined1)local_4;
  local_4._0_1_ = 5;
  if (*(char *)((int)param_1 + 0x3f9) == '\0') {
    local_34 = (undefined1 *)&pcStack_58;
    pcStack_58 = (char *)0x20d60dbf;
    local_4._0_1_ = uVar3;
    FUN_00604270(&local_34);
    local_2c = local_34;
    uStack_28 = 0;
    uStack_24 = 0x14;
    uStack_20 = 0;
    uStack_1c = 0;
    FUN_00654af0();
  }
  else {
    pcStack_58 = (char *)0xc;
    local_34 = (undefined1 *)FUN_00627400();
    local_4._0_1_ = 7;
    if (local_34 != (undefined1 *)0x0) {
      pcStack_58 = (char *)((int)param_1 + 0x3e9);
      FUN_0062f420();
    }
  }
  pcStack_58 = (char *)param_1[0xec];
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_006fb7f0(&local_34,*(undefined4 *)pcStack_58);
  if (param_1[0xec] != 0) {
    pcStack_58 = (char *)0x0;
    FUN_005d0370(param_1[0xec],0x18);
  }
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  local_4._0_1_ = 3;
  pcStack_58 = (char *)0x6fd107;
  FUN_006466b0();
  pcVar6 = (char *)(param_1 + 0x16);
  local_4._0_1_ = 2;
  *(undefined ***)pcVar6 = &PTR_FUN_0089187c;
  pcStack_58 = (char *)0x6fd11d;
  FUN_004258d0();
  *(undefined ***)pcVar6 = &PTR_FUN_00890970;
  pcStack_58 = pcVar6;
  FUN_005d5a50();
  pcStack_58 = (char *)(param_1 + 0x14);
  *(undefined ***)pcStack_58 = &PTR_FUN_00890970;
  local_4._0_1_ = 1;
  FUN_005d5a50();
  pcStack_58 = (char *)(param_1 + 0x12);
  DAT_009885c8 = 0;
  *(undefined ***)pcStack_58 = &PTR_FUN_00890970;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d5a50();
  local_4 = 0xffffffff;
  pcStack_58 = (char *)0x6fd16b;
  FUN_006f82f0();
  ExceptionList = pvStack_c;
  return;
}

