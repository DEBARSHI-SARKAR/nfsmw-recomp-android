/* speed.exe 0050c260 FUN_0050c260; analysis pseudocode, not buildable source.
 * calls 004fd750 FUN_004fd750
 * calls 00466340 FUN_00466340
 * calls 00444fe0 FUN_00444fe0
 * calls 004560d0 FUN_004560d0
 * calls 0050c160 FUN_0050c160
 * calls 00452940 FUN_00452940
 * calls 006269b0 FUN_006269b0
 * calls 0045a430 FUN_0045a430
 */

uint __fastcall FUN_0050c260(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  uint uVar10;
  int local_3c;
  float local_28;
  float local_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e073;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x70);
  uVar10 = 0;
  if (*(int *)(iVar1 + 4) == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  uVar3 = FUN_00452940();
  uVar4 = FUN_00452940();
  if (uVar3 != 0) {
    if (0 < (int)uVar3) {
      local_3c = 0x58;
      do {
        uVar5 = FUN_00452940();
        if (uVar5 <= uVar10) {
          FUN_006269b0(0xc);
        }
        iVar6 = FUN_004560d0();
        if (iVar6 != 0) {
          FUN_004fd750(iVar6,0,0);
          local_4 = 0;
          iVar7 = FUN_00466340(DAT_00916064);
          local_4._0_1_ = 1;
          if (iVar7 == 0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = (int *)FUN_0050c160(iVar6,param_1);
          }
          local_4 = (uint)local_4._1_3_ << 8;
          if (piVar8 == (int *)0x0) {
            if (DAT_0091c1a0 == '\0') {
              DAT_0091c1a0 = '\x01';
            }
            local_4 = 0xffffffff;
            uVar4 = FUN_0045a430();
            goto LAB_0050c47c;
          }
          FUN_00444fe0(piVar8 + 8,param_1 + 0x20);
          if (uVar4 == uVar3) {
            iVar6 = *(int *)(iVar1 + 8);
            uVar5 = FUN_00452940();
            if (uVar10 < uVar5) {
              pfVar9 = (float *)(local_3c + iVar6);
            }
            else {
              pfVar9 = (float *)FUN_006269b0(8);
            }
            local_28 = *pfVar9;
            local_24 = pfVar9[1];
            if ((local_28 == local_24) || (local_24 < local_28)) {
              local_28 = 0.0;
              local_24 = 1.0;
            }
            piVar8[0x1c] = (int)local_28;
            piVar8[0x1d] = (int)local_24;
          }
          else {
            piVar8[0x1c] = 0;
            piVar8[0x1d] = 0x497423f0;
          }
          puVar2 = *(undefined4 **)(param_1 + 0xc);
          *puVar2 = piVar8;
          *(int **)(param_1 + 0xc) = piVar8;
          piVar8[1] = (int)puVar2;
          *piVar8 = param_1 + 8;
          *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
          local_4 = 0xffffffff;
          FUN_0045a430();
        }
        uVar10 = uVar10 + 1;
        local_3c = local_3c + 8;
      } while ((int)uVar10 < (int)uVar3);
    }
    iVar1 = *(int *)(iVar1 + 8);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar1 + 0x84);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
LAB_0050c47c:
  ExceptionList = local_c;
  return uVar4 & 0xffffff00;
}

