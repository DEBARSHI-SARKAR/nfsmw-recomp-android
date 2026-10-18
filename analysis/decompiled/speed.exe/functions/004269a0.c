/* speed.exe 004269a0 FUN_004269a0; analysis pseudocode, not buildable source.
 * calls 007658a0 FUN_007658a0
 * calls 00426610 FUN_00426610
 * calls 006f1220 FUN_006f1220
 * calls 0076e220 FUN_0076e220
 * calls 0077bba0 FUN_0077bba0
 * calls 00410220 FUN_00410220
 * calls 0077b9e0 FUN_0077b9e0
 * calls 007862d0 FUN_007862d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004269a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  float *local_3c4;
  float *pfStack_3c0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  undefined4 uStack_3a0;
  float fStack_39c;
  undefined4 uStack_398;
  float fStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  int local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined1 *local_378;
  float afStack_374 [36];
  char cStack_2e4;
  undefined4 uStack_2bc;
  undefined4 uStack_29c;
  float fStack_298;
  undefined4 uStack_294;
  float fStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined1 auStack_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_008680bb;
  local_c = ExceptionList;
  if (DAT_0090d61c == 0) {
    pfStack_3c0 = (float *)0x0;
    local_378 = (undefined1 *)&local_3c4;
    local_3c4 = DAT_0092c4f4;
    ExceptionList = &local_c;
    piVar1 = (int *)FUN_00426610();
    if (piVar1 != (int *)0x0) {
      pfStack_3c0 = (float *)0x4269ff;
      iVar2 = (**(code **)(*param_1 + 8))();
      if (iVar2 != 0) {
        uStack_384 = *(undefined4 *)(iVar2 + 0x10);
        uStack_380 = *(undefined4 *)(iVar2 + 0x14);
        uStack_37c = *(undefined4 *)(iVar2 + 0x18);
        fStack_3ac = *(float *)(iVar2 + 0x20) * _DAT_00890da8;
        fStack_3a8 = *(float *)(iVar2 + 0x24) * _DAT_00890da8;
        fStack_3a4 = *(float *)(iVar2 + 0x28) * _DAT_00890da8;
        pfStack_3c0 = (float *)0x426a6f;
        FUN_0077b9e0();
        pfStack_3c0 = (float *)0x0;
        uStack_4 = 0;
        local_3c4 = (float *)0x426a88;
        FUN_007658a0();
        pfStack_3c0 = (float *)0x0;
        local_3c4 = (float *)0x0;
        uStack_2bc = 2;
        FUN_007862d0(&uStack_384,&fStack_3ac);
        if (cStack_2e4 == '\0') {
          uStack_3a0 = *(undefined4 *)(iVar2 + 0x10);
          fStack_39c = *(float *)(iVar2 + 0x14);
          uStack_398 = *(undefined4 *)(iVar2 + 0x18);
          fStack_394 = *(float *)(iVar2 + 0x20);
          uStack_390 = *(undefined4 *)(iVar2 + 0x24);
          uStack_38c = *(undefined4 *)(iVar2 + 0x28);
        }
        else {
          pfStack_3c0 = (float *)0x0;
          local_3c4 = &fStack_3ac;
          FUN_0077bba0(0x437a0000);
          uStack_3a0 = uStack_29c;
          fStack_394 = fStack_278;
          fStack_39c = fStack_298;
          uStack_398 = uStack_294;
          pfStack_3c0 = &fStack_394;
          uStack_390 = uStack_274;
          uStack_38c = uStack_270;
          local_3c4 = (float *)0x426b1c;
          FUN_00410220();
        }
        fStack_39c = fStack_39c + _DAT_00890560;
        pfStack_3c0 = (float *)0x426b63;
        (**(code **)(*piVar1 + 0x80))();
        pfStack_3c0 = (float *)0x0;
        local_3c4 = &fStack_394;
        pfVar3 = (float *)FUN_006f1220(auStack_4c);
        iVar2 = *piVar1;
        pfVar6 = afStack_374;
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar6 = *pfVar3;
          pfVar3 = pfVar3 + 1;
          pfVar6 = pfVar6 + 1;
        }
        pfStack_3c0 = (float *)0x426b8e;
        piVar4 = (int *)(**(code **)(iVar2 + 4))();
        pfStack_3c0 = (float *)0x426b95;
        piVar4 = (int *)(**(code **)(*piVar4 + 0x54))();
        pfStack_3c0 = (float *)&uStack_3a0;
        local_3c4 = afStack_374;
        (**(code **)(*piVar4 + 0x98))();
        piVar4 = (int *)(**(code **)(*piVar1 + 0xac))();
        (**(code **)(*piVar4 + 0x88))();
        (**(code **)(*param_1 + 0x78))(piVar1);
        *(int *)(local_388 + 0x9c) = *(int *)(local_388 + 0x9c) + 1;
        uStack_4 = 0xffffffff;
        pfStack_3c0 = (float *)0x426be7;
        FUN_0076e220();
        ExceptionList = local_c;
        return 1;
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}

