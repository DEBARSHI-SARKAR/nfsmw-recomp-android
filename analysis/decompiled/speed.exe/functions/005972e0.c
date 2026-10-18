/* speed.exe 005972e0 FUN_005972e0; analysis pseudocode, not buildable source.
 * calls 005958e0 FUN_005958e0
 * calls 005ddec0 FUN_005ddec0
 * calls 005251e0 FUN_005251e0
 * calls 005dc3c0 FUN_005dc3c0
 * calls 005fe090 FUN_005fe090
 * calls 00573140 FUN_00573140
 * calls 005fba00 FUN_005fba00
 * calls 005dbd80 FUN_005dbd80
 * calls 00595510 FUN_00595510
 * calls 00652ad0 _malloc
 * calls 00595670 FUN_00595670
 * calls 0057d6a0 FUN_0057d6a0
 * calls 00524850 FUN_00524850
 * calls 00514cc0 FUN_00514cc0
 * calls 005957c0 FUN_005957c0
 * calls 005dc280 FUN_005dc280
 * calls 005dc680 FUN_005dc680
 * calls 00525220 FUN_00525220
 * calls 005dc320 FUN_005dc320
 * calls 005dc3a0 FUN_005dc3a0
 */

void __thiscall FUN_005972e0(int param_1,float param_2,float param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  uint uVar14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar12 = (int)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1f0),0x8159a0b2);
  switch(*(undefined4 *)(param_1 + 0x1e0)) {
  case 0:
  case 2:
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d691760,0x34ba50ff);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x586ab4a6);
    FUN_00514cc0(uVar3);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x44ac8987);
    FUN_00514cc0(uVar3);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x30ee5e68);
    FUN_00514cc0(uVar3);
    uVar3 = 0xe8b7d527;
    goto LAB_005973d5;
  case 1:
  case 3:
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d691760,0x9c8d7fe8);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x586ab4a6);
    FUN_00514cc0(uVar3);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x44ac8987);
    FUN_00514cc0(uVar3);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x30ee5e68);
    FUN_00514cc0(uVar3);
    uVar3 = 0xbf9c;
LAB_005973d5:
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x586ab4a6,uVar3);
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x44ac8987,0x96b05f47);
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x30ee5e68,0xb67da102);
    break;
  case 4:
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d691760,0xd10a8ea2);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x586ab4a6);
    FUN_00514cc0(uVar3);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x30ee5e68);
    FUN_00514cc0(uVar3);
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x586ab4a6,0xa15e4505);
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x30ee5e68,0xb67da102);
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1f0),0xd0b8aa33);
    break;
  case 5:
    if (DAT_0091e000 != 0) {
      FUN_005dbd80();
    }
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d691760,0xecd0e6a6);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x586ab4a6);
    FUN_00514cc0(uVar3);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x44ac8987);
    FUN_00514cc0(uVar3);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x30ee5e68);
    FUN_00514cc0(uVar3);
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x586ab4a6,0xee1edc76);
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x44ac8987,0x96b05f47);
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x30ee5e68,0x7540fb04);
  }
  iVar2 = param_1 + (int)param_2 * 0x18;
  *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)((int)param_3 + 8);
  switch(*(undefined4 *)(param_1 + 0x1e0)) {
  case 0:
  case 2:
    param_2 = 0.0;
    puVar10 = (undefined4 *)((int)param_3 + 300);
    do {
      pvVar6 = _malloc(0x60);
      local_4 = 0;
      if (pvVar6 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *puVar10;
        uVar7 = puVar10[4];
        uVar8 = FUN_00573140(&DAT_008a0dac,"COLUMN3_DATA",*(undefined4 *)(iVar2 + 0x38));
        uVar8 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar8);
        uVar9 = FUN_00573140(&DAT_008a0dac,"COLUMN1_DATA",*(undefined4 *)(iVar2 + 0x38));
        uVar9 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar9);
        uVar14 = (uint)param_2;
        uVar4 = FUN_00573140(&DAT_008a0dac,"COLUMN2_DATA",*(undefined4 *)(iVar2 + 0x38),param_2,
                             uVar3,uVar7);
        uVar4 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar4);
        uVar3 = FUN_00595670(uVar9,uVar8,uVar4,uVar14,uVar3,uVar7);
      }
      local_4 = 0xffffffff;
      FUN_0057d6a0(uVar3);
      param_2 = (float)((int)param_2 + 1);
      puVar10 = puVar10 + 1;
    } while ((uint)param_2 < 4);
    param_2 = 0.0;
    if (*(char *)((int)param_3 + 0x21) != '\0') {
      fVar13 = (float10)FUN_005ddec0();
      param_2 = (float)fVar13;
    }
    pvVar6 = _malloc(0x60);
    local_4 = 1;
    if (pvVar6 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)((int)param_3 + 0x10);
      uVar7 = FUN_00573140(&DAT_008a0dac,"COLUMN3_DATA",*(undefined4 *)(iVar2 + 0x38));
      uVar7 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar7);
      uVar8 = FUN_00573140(&DAT_008a0dac,"COLUMN1_DATA",*(undefined4 *)(iVar2 + 0x38));
      uVar8 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar8);
      uVar4 = 4;
      uVar9 = FUN_00573140(&DAT_008a0dac,"COLUMN2_DATA",*(undefined4 *)(iVar2 + 0x38),4,param_2,
                           uVar3);
      uVar9 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar9);
      uVar3 = FUN_00595670(uVar8,uVar7,uVar9,uVar4,param_2,uVar3);
    }
    goto LAB_00597b16;
  case 1:
  case 3:
    iVar11 = 0;
    iVar5 = FUN_005fba00();
    if (0 < iVar5) {
      do {
        param_2 = (float)FUN_005dc320(iVar11,iVar12,1);
        if ((*(char *)((int)param_3 + 0x1c) != '\0') && ((int)param_2 < 2)) {
          param_2 = -NAN;
        }
        pvVar6 = _malloc(0x60);
        local_4 = 2;
        if (pvVar6 == (void *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_00573140(&DAT_008a0dac,"COLUMN2_DATA",*(undefined4 *)(iVar2 + 0x38));
          uVar3 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar3);
          uVar7 = FUN_00573140(&DAT_008a0dac,"COLUMN3_DATA",*(undefined4 *)(iVar2 + 0x38));
          uVar7 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar7);
          uVar8 = FUN_00573140(&DAT_008a0dac,"COLUMN1_DATA",*(undefined4 *)(iVar2 + 0x38));
          uVar8 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar8);
          fVar13 = (float10)FUN_005dc280(iVar11,iVar12,0);
          uVar3 = FUN_00595510(uVar8,uVar7,uVar3,iVar11 + 1,(float)fVar13,param_2);
        }
        local_4 = 0xffffffff;
        FUN_0057d6a0(uVar3);
        iVar11 = iVar11 + 1;
        iVar5 = FUN_005fba00();
      } while (iVar11 < iVar5);
      ExceptionList = local_c;
      return;
    }
    break;
  case 4:
    iVar12 = 0;
    if (0 < *(int *)(DAT_0091e000 + 0x19a0)) {
      do {
        pvVar6 = _malloc(0x60);
        local_4 = 4;
        if (pvVar6 == (void *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_00573140(&DAT_008a0dac,"COLUMN2_DATA",*(undefined4 *)(iVar2 + 0x38));
          uVar3 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar3);
          uVar7 = FUN_00573140(&DAT_008a0dac,"COLUMN3_DATA",*(undefined4 *)(iVar2 + 0x38));
          uVar7 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar7);
          uVar8 = FUN_00573140(&DAT_008a0dac,"COLUMN1_DATA",*(undefined4 *)(iVar2 + 0x38));
          uVar8 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar8);
          uVar9 = 1;
          fVar13 = (float10)FUN_005dc680(iVar12,param_2);
          uVar3 = FUN_005958e0(uVar8,uVar7,uVar3,iVar12 + 1,(float)fVar13,uVar9);
        }
        local_4 = 0xffffffff;
        FUN_0057d6a0(uVar3);
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(DAT_0091e000 + 0x19a0));
    }
    pcVar1 = (char *)((int)param_3 + 0x21);
    param_3 = 0.0;
    if (*pcVar1 != '\0') {
      fVar13 = (float10)FUN_005fe090();
      param_3 = (float)fVar13;
    }
    pvVar6 = _malloc(0x60);
    local_4 = 5;
    if (pvVar6 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      iVar12 = *(int *)(DAT_0091e000 + 0x19a0);
      uVar3 = FUN_00573140(&DAT_008a0dac,"COLUMN3_DATA",*(undefined4 *)(iVar2 + 0x38));
      uVar3 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar3);
      uVar7 = FUN_00573140(&DAT_008a0dac,"COLUMN1_DATA",*(undefined4 *)(iVar2 + 0x38));
      uVar7 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar7);
      uVar9 = 1;
      iVar12 = iVar12 + 1;
      uVar8 = FUN_00573140(&DAT_008a0dac,"COLUMN2_DATA",*(undefined4 *)(iVar2 + 0x38),iVar12,param_3
                           ,1);
      uVar8 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar8);
      uVar3 = FUN_005958e0(uVar7,uVar3,uVar8,iVar12,param_3,uVar9);
    }
LAB_00597b16:
    local_4 = 0xffffffff;
    FUN_0057d6a0(uVar3);
    break;
  case 5:
    iVar12 = 0;
    if (0 < *(int *)(DAT_0091e000 + 0x4504)) {
      do {
        pvVar6 = _malloc(0x60);
        local_4 = 3;
        if (pvVar6 == (void *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_00573140(&DAT_008a0dac,"COLUMN2_DATA",*(undefined4 *)(iVar2 + 0x38));
          uVar3 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar3);
          uVar7 = FUN_00573140(&DAT_008a0dac,"COLUMN3_DATA",*(undefined4 *)(iVar2 + 0x38));
          uVar7 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar7);
          uVar8 = FUN_00573140(&DAT_008a0dac,"COLUMN1_DATA",*(undefined4 *)(iVar2 + 0x38));
          uVar8 = FUN_005251e0(*(undefined4 *)(iVar2 + 0x40),uVar8);
          uVar9 = FUN_005dc3c0(iVar12,param_2);
          fVar13 = (float10)FUN_005dc3a0(iVar12,param_2);
          uVar3 = FUN_005957c0(uVar8,uVar7,uVar3,iVar12 + 1,(float)fVar13,uVar9);
        }
        local_4 = 0xffffffff;
        FUN_0057d6a0(uVar3);
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(DAT_0091e000 + 0x4504));
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}

