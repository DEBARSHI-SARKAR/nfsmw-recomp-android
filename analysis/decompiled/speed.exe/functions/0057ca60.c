/* speed.exe 0057ca60 FUN_0057ca60; analysis pseudocode, not buildable source.
 * calls 00735620 FUN_00735620
 * calls 005fbe70 FUN_005fbe70
 * calls 0050de50 FUN_0050de50
 * calls 0050e1b0 FUN_0050e1b0
 * calls 00516b50 FUN_00516b50
 * calls 00569530 FUN_00569530
 * calls 006e8d20 FUN_006e8d20
 * calls 00579120 FUN_00579120
 * calls 004d6150 FUN_004d6150
 */

ulonglong __thiscall FUN_0057ca60(int param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  iVar4 = (**(code **)(*param_2 + 0x2c))();
  if (((((((iVar4 * 0x70 != -0x9195e0) &&
          (puVar1 = (undefined4 *)(&DAT_00919624)[iVar4 * 0x1c],
          puVar1 != &DAT_00919624 + iVar4 * 0x1c)) && (puVar1 != (undefined4 *)0x0)) &&
        ((puVar1 + -1 != (int *)0x0 && (puVar1[2] == 1)))) &&
       ((sVar3 = (**(code **)(puVar1[-1] + 0x30))(), sVar3 == 0 &&
        ((((DAT_0091e000 == 0 || (*(int *)(DAT_0091e000 + 0x1960) != 1)) || (DAT_0091cf28 == '\0'))
         && ((((DAT_0091cae4 < 1 && (iVar4 = FUN_006e8d20(), iVar4 == 3)) &&
              (cVar2 = FUN_00516b50("Pause_Main.fng"), cVar2 == '\0')) &&
             ((cVar2 = FUN_00516b50("MC_Main.fng"), cVar2 == '\0' &&
              (cVar2 = FUN_00516b50("PostRace_Results.fng"), cVar2 == '\0')))))))))) &&
      ((DAT_0091ca58 == '\0' &&
       ((cVar2 = FUN_00569530(*(undefined4 *)(param_1 + 0x20)), cVar2 != '\0' && (DAT_009885c8 == 0)
        ))))) &&
     ((iVar4 = *(int *)(DAT_0091cf90 + 0x10), *(char *)(param_1 + 0x330) == *(char *)(iVar4 + 0x34)
      && ((DAT_008ee348 < 1 && (cVar2 = FUN_0050de50(), cVar2 == '\0')))))) {
    if (*(int *)(DAT_0091e000 + 0x1968) == 0) {
      cVar2 = *(char *)(iVar4 + 0x3d);
    }
    else {
      cVar2 = *(char *)(iVar4 + 0x3c);
    }
    if ((cVar2 != '\x02') && (*(short *)(DAT_009a3a20 + 0x8a) == 2000)) {
      uVar6 = 0x10000;
      cVar2 = FUN_00735620();
      if (cVar2 == '\0') {
        uVar6 = 0x14000;
      }
    }
    uVar5 = 0;
    cVar2 = FUN_004d6150();
    iVar4 = *(int *)(DAT_0091cf90 + 0x10) + *(int *)(param_1 + 0x2c) * 0x14;
    if (cVar2 == '\0') {
      cVar2 = *(char *)(iVar4 + 0x80);
    }
    else {
      cVar2 = *(char *)(iVar4 + 0x81);
    }
    if (cVar2 != '\0') {
      uVar6 = uVar6 | 0x8000000;
    }
    if (*(char *)(iVar4 + 0x80) != '\0') {
      uVar7 = uVar6 | 2;
      if (*(char *)(param_1 + 0x2bd) != '\0') {
        uVar7 = uVar6 | 0x20002;
      }
      cVar2 = FUN_004d6150();
      if (cVar2 != '\0') {
        uVar7 = uVar7 | 0x40;
      }
      uVar6 = uVar7 | 0x800;
      cVar2 = FUN_00735620();
      if (cVar2 == '\0') {
        uVar6 = uVar7 | 0x40800;
      }
    }
    cVar2 = '\0';
    if (*(int *)(DAT_0091e000 + 0x1968) != 0) {
      cVar2 = FUN_005fbe70();
    }
    if ((*(int *)(DAT_0091e000 + 0x1960) == 1) && (cVar2 == '\0')) {
      if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x85 + *(int *)(param_1 + 0x2c) * 0x14) != '\0')
      {
        uVar6 = uVar6 | 8;
      }
      if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + *(int *)(param_1 + 0x2c) * 0x14 + 0x81) != '\0')
      {
        uVar6 = uVar6 | 0x4000000;
      }
    }
    else {
      uVar6 = uVar6 | 0x100000;
      uVar5 = 4;
    }
    if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x90 + *(int *)(param_1 + 0x2c) * 0x14) != '\x04')
    {
      uVar6 = uVar6 | 0x10;
    }
    cVar2 = FUN_0050e1b0();
    if (cVar2 != '\0') {
      uVar6 = uVar6 | 0x2000000;
    }
    iVar4 = (**(code **)(*param_2 + 0x14))();
    if ((*(char *)(iVar4 + 3) != '\0') &&
       ((*(int *)(DAT_0091e000 + 0x1964) == 2 ||
        ((*(int *)(DAT_0091e000 + 0x1968) != 0 && (cVar2 = FUN_005fbe70(), cVar2 != '\0')))))) {
      uVar6 = uVar6 | 0x1000;
    }
    if (*(int *)(DAT_0091e000 + 0x1960) == 1) {
      uVar6 = uVar6 | 0x20;
    }
    cVar2 = FUN_00579120(&param_2);
    if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_2 + 0xc))(), cVar2 != '\0')) {
      uVar6 = uVar6 | 4;
    }
    uVar7 = uVar6 | 0x31c80400;
    cVar2 = FUN_00735620();
    if (cVar2 == '\0') {
      uVar7 = uVar6 | 0x31e80400;
    }
    return CONCAT44(uVar5,uVar7) | 0x300000000;
  }
  return 0;
}

