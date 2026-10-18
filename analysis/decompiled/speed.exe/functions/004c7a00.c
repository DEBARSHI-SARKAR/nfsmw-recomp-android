/* speed.exe 004c7a00 FUN_004c7a00; analysis pseudocode, not buildable source.
 * calls 004aecf0 FUN_004aecf0
 * calls 004ad860 FUN_004ad860
 * calls 004adbf0 FUN_004adbf0
 * calls 00831667 FUN_00831667
 * calls 004c6d40 FUN_004c6d40
 * calls 004ad8a0 FUN_004ad8a0
 * calls 007c4b80 FUN_007c4b80
 * calls 004adf80 FUN_004adf80
 * calls 004adfc0 FUN_004adfc0
 * calls 004adc30 FUN_004adc30
 */

/* WARNING: Removing unreachable block (ram,0x004c7a5a) */

void __thiscall FUN_004c7a00(uint *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086be71;
  local_c = ExceptionList;
  if (((param_1[2] == 0) && (param_1[3] == 0)) && (param_1[4] == 0)) {
    ExceptionList = &local_c;
    FUN_004c6d40((int)*(char *)(param_1[1] + 1));
    uVar6 = param_1[1];
    if (*(short *)(uVar6 + 10) == 0) {
      param_1[5] = (uint)*(ushort *)(uVar6 + 2);
    }
    else {
      iVar2 = FUN_004aecf0(*(undefined2 *)(uVar6 + 10));
      param_1[5] = (uint)*(ushort *)(uVar6 + 2) - iVar2;
    }
    uVar6 = param_1[1];
    iVar2 = (int)(*(int *)(param_2 + 4) * param_1[5]) >> 0xf;
    if (*(short *)(uVar6 + 0xc) == 0) {
      param_1[6] = (uint)*(ushort *)(uVar6 + 4);
    }
    else {
      iVar3 = (int)*(short *)(uVar6 + 0xc);
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      iVar3 = FUN_004aecf0(iVar3);
      param_1[6] = (uint)*(ushort *)(uVar6 + 4) - iVar3;
    }
    uVar4 = FUN_007c4b80();
    iVar3 = *(int *)(param_2 + 0xc);
    *param_1 = 0;
    if (*(char *)(param_1[1] + 1) == '\0') {
      PTR_s_CSISSOUND_008ee560 = &DAT_00890978;
      iVar5 = FUN_00831667(0x2c);
      local_4 = 0;
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        puVar1 = (undefined1 *)param_1[1];
        uVar6 = *(ushort *)(puVar1 + 8) + 0x10000 + iVar3 & 0x8000ffff;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xffff0000) + 1;
        }
        uVar6 = FUN_004ad8a0((int)(char)puVar1[1],*puVar1,iVar2,uVar4,uVar6,
                             *(undefined2 *)(puVar1 + 6),0x7fff,*(undefined4 *)(param_2 + 0x14),
                             25000,0);
      }
      local_4 = 0xffffffff;
      param_1[2] = uVar6;
      if (uVar6 != 0) {
        iVar5 = FUN_004ad860();
        *param_1 = (iVar5 < 3) - 1 & 2;
      }
    }
    if (*(char *)(param_1[1] + 1) == '\x01') {
      PTR_s_CSISSOUND_008ee560 = &DAT_00890978;
      iVar5 = FUN_00831667(0x2c);
      local_4 = 1;
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        puVar1 = (undefined1 *)param_1[1];
        uVar6 = *(ushort *)(puVar1 + 8) + 0x10000 + iVar3 & 0x8000ffff;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xffff0000) + 1;
        }
        uVar6 = FUN_004adc30((int)(char)puVar1[1],*puVar1,iVar2,uVar4,uVar6,
                             *(undefined2 *)(puVar1 + 6),0x7fff,*(undefined4 *)(param_2 + 0x14),
                             25000,0);
      }
      local_4 = 0xffffffff;
      param_1[3] = uVar6;
      if (uVar6 != 0) {
        iVar5 = FUN_004adbf0();
        *param_1 = (iVar5 < 3) - 1 & 2;
      }
    }
    if (*(char *)(param_1[1] + 1) == '\x02') {
      PTR_s_CSISSOUND_008ee560 = &DAT_00890978;
      iVar5 = FUN_00831667(0x2c);
      local_4 = 2;
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        puVar1 = (undefined1 *)param_1[1];
        uVar6 = *(ushort *)(puVar1 + 8) + 0x10000 + iVar3 & 0x8000ffff;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xffff0000) + 1;
        }
        uVar6 = FUN_004adfc0((int)(char)puVar1[1],*puVar1,iVar2,uVar4,uVar6,
                             *(undefined2 *)(puVar1 + 6),0x7fff,*(undefined4 *)(param_2 + 0x14),
                             25000,0);
      }
      local_4 = 0xffffffff;
      param_1[4] = uVar6;
      if (uVar6 != 0) {
        iVar2 = FUN_004adf80();
        *param_1 = (iVar2 < 3) - 1 & 2;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

