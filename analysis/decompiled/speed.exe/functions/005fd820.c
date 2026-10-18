/* speed.exe 005fd820 FUN_005fd820; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 00454640 FUN_00454640
 * calls 00423900 FUN_00423900
 * calls 00789870 FUN_00789870
 * calls 00404cf0 FUN_00404cf0
 * calls 004105e0 FUN_004105e0
 * calls 005f3320 FUN_005f3320
 * calls 005fb550 FUN_005fb550
 * calls 00774230 FUN_00774230
 * calls 0076f3d0 FUN_0076f3d0
 * calls 006269b0 FUN_006269b0
 * calls 005d59f0 FUN_005d59f0
 * calls 00654af0 FUN_00654af0
 * calls 00460d20 FUN_00460d20
 * calls 0041cb10 FUN_0041cb10
 * calls 005cc240 FUN_005cc240
 * calls 004023c0 FUN_004023c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_005fd820(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  float local_60;
  char *local_5c;
  undefined1 *local_58;
  undefined4 *local_54;
  char *pcStack_50;
  undefined4 uStack_3c;
  undefined1 *local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    pcStack_50 = (char *)0x0;
    local_54 = (undefined4 *)0xf833c06f;
    local_58 = (undefined1 *)0x5fd844;
    pfVar4 = (float *)FUN_00454810();
    if (pfVar4 == (float *)0x0) {
      pcStack_50 = (char *)0x4;
      local_54 = (undefined4 *)0x5fd84f;
      pfVar4 = (float *)FUN_006269b0();
    }
    fVar1 = *pfVar4;
    pcStack_50 = (char *)0x0;
    local_54 = (undefined4 *)0xfd3cf790;
    local_58 = (undefined1 *)0x5fd862;
    iVar5 = FUN_00454810();
    if (iVar5 == 0) {
      pcStack_50 = (char *)0x4;
      local_54 = (undefined4 *)0x5fd86d;
      FUN_006269b0();
    }
    pcStack_50 = "copmidsize";
    local_58 = (undefined1 *)0x5fd87b;
    local_54 = (undefined4 *)fVar1;
    iVar5 = FUN_00460d20();
    fVar11 = (float)((-(uint)(iVar5 == 0) & 3) + 1);
    if (DAT_00926064 != 0) {
      iVar6 = DAT_008f86c0;
      if (iVar5 != 0) {
        iVar6 = DAT_00926094;
      }
      if (iVar6 != 0) goto LAB_005fd954;
    }
    local_54 = (undefined4 *)0x5fd8c1;
    pcStack_50 = (char *)fVar1;
    pcStack_50 = (char *)FUN_005f3320();
    uVar2 = DAT_0091e00c;
    if (pcStack_50 == (char *)0x0) {
      local_5c = (char *)(param_1 + 0x40);
      local_60 = (float)(param_1 + 0x50);
      local_58 = pcStack_50;
      local_54 = (undefined4 *)pcStack_50;
      uVar7 = FUN_00454640(fVar1);
      FUN_004105e0(uVar2,fVar11,uVar7);
      local_5c = (char *)local_30;
      local_58 = (undefined1 *)local_2c;
      local_38 = (undefined1 *)&local_60;
      local_60 = local_28;
      local_54 = (undefined4 *)local_28;
      local_60 = (float)FUN_005cc240("PVehicle");
      pcStack_50 = (char *)FUN_0041cb10();
      if (pcStack_50 == (char *)0x0) {
        pcStack_50 = (char *)0x5fd935;
        pcStack_50 = (char *)FUN_005fb550();
        if (pcStack_50 == (char *)0x0) goto LAB_005fd954;
        goto LAB_005fd939;
      }
    }
    else {
LAB_005fd939:
      *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 0x4d) | 1;
    }
    local_54 = (undefined4 *)0x5fd947;
    (**(code **)(*(int *)(param_1 + 0x28) + 4))();
    local_58 = (undefined1 *)0x5fd950;
    local_54 = (undefined4 *)fVar11;
    (**(code **)(**(int **)(param_1 + 0x6c) + 0x54))();
    *(undefined1 *)(param_1 + 0x4c) = 2;
  }
LAB_005fd954:
  if (*(char *)(param_1 + 0x4c) == '\x02') {
    pcStack_50 = (char *)0x5fd962;
    cVar3 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x5c))();
    if (cVar3 != '\0') {
      pcStack_50 = (char *)0x0;
      local_54 = (undefined4 *)0xa1009a23;
      local_58 = (undefined1 *)0x5fd975;
      pcVar8 = (char *)FUN_00454810();
      if (pcVar8 == (char *)0x0) {
        pcStack_50 = (char *)0x1;
        local_54 = (undefined4 *)0x5fd980;
        pcVar8 = (char *)FUN_006269b0();
      }
      if (*pcVar8 == '\0') goto LAB_005fd98c;
    }
    *(undefined1 *)(param_1 + 0x4c) = 3;
  }
LAB_005fd98c:
  if (*(char *)(param_1 + 0x4c) == '\x03') {
    pcStack_50 = (char *)0x0;
    local_54 = &uStack_3c;
    uStack_3c = 0;
    local_38 = (undefined1 *)0x0;
    uStack_34 = 3;
    local_5c = (char *)0x5fd9c2;
    local_58 = (undefined1 *)(param_1 + 0x40);
    cVar3 = FUN_00789870();
    if (cVar3 != '\0') {
      pcStack_50 = &LAB_00402830;
      local_54 = (undefined4 *)0x5fd9da;
      piVar9 = (int *)FUN_005d59f0();
      if (piVar9 != (int *)0x0) {
        pcStack_50 = &LAB_00403700;
        local_54 = (undefined4 *)0x5fd9f1;
        piVar10 = (int *)FUN_005d59f0();
        if (piVar10 != (int *)0x0) {
          pcStack_50 = (char *)0x5fd9fe;
          (**(code **)(*piVar10 + 100))();
          pcStack_50 = (char *)(param_1 + 0x70);
          local_54 = (undefined4 *)(param_1 + 0x60);
          local_58 = (undefined1 *)0x5fda0d;
          FUN_00423900();
          pcStack_50 = (char *)0x5fda14;
          (**(code **)(*piVar10 + 0x48))();
          pcStack_50 = (char *)0x5fda1d;
          FUN_0076f3d0();
          pcStack_50 = (char *)0x5fda24;
          FUN_00774230();
        }
        pcStack_50 = (char *)0x5fda2f;
        (**(code **)(**(int **)(param_1 + 0x6c) + 0x80))();
        pcStack_50 = (char *)(param_1 + 0x50);
        local_58 = (undefined1 *)0x5fda3c;
        local_54 = (undefined4 *)(param_1 + 0x40);
        (**(code **)(**(int **)(param_1 + 0x6c) + 0x68))();
        if (_DAT_00890968 < *(float *)(param_1 + 0x5c)) {
          local_58 = *(undefined1 **)(param_1 + 0x5c);
          local_5c = (char *)0x5fda5b;
          (**(code **)(**(int **)(param_1 + 0x6c) + 0x94))();
          local_60 = *(float *)(param_1 + 0x5c) * _DAT_008967e0;
          local_5c = (char *)0x1;
          FUN_00404cf0(local_60);
          local_5c = (char *)0x5fda81;
          local_2c = (**(code **)(*piVar9 + 0x70))();
          local_5c = "AIAction";
          local_60 = 8.802786e-39;
          FUN_004023c0();
          local_5c = (char *)0x5fda9f;
          FUN_00654af0();
        }
        local_58 = &LAB_00403950;
        local_5c = (char *)0x5fdaac;
        piVar9 = (int *)FUN_005d59f0();
        if (piVar9 != (int *)0x0) {
          local_58 = *(undefined1 **)(param_1 + 0x5c);
          local_5c = (char *)0x5fdabb;
          (**(code **)(*piVar9 + 4))();
        }
        *(undefined1 *)(param_1 + 0x4c) = 4;
      }
    }
  }
  return *(char *)(param_1 + 0x4c) == '\x04';
}

