/* speed.exe 00591460 FUN_00591460; analysis pseudocode, not buildable source.
 * calls 00582660 FUN_00582660
 * calls 0045ed20 thunk_FUN_006bd940
 * calls 00584800 FUN_00584800
 * calls 00465f70 FUN_00465f70
 * calls 004662e0 FUN_004662e0
 * calls 00582d20 FUN_00582d20
 * calls 007c4b80 FUN_007c4b80
 * calls 006c0a30 FUN_006c0a30
 * calls 0045f2c0 FUN_0045f2c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00591460(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            int param_7,int param_8,int param_9,undefined4 param_10,byte *param_11,int param_12,
            undefined4 param_13)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined4 local_2a0;
  int local_29c;
  float local_298 [14];
  int local_260;
  int local_25c;
  int local_258 [14];
  int local_220;
  int local_21c;
  int local_218;
  int local_210 [10];
  int local_1e8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  undefined1 local_120 [128];
  undefined1 local_a0 [132];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0087299e;
  local_1c = ExceptionList;
  if (param_12 != 0) {
    local_220 = param_2;
    local_210[0] = param_4;
    local_210[4] = param_4;
    local_210[8] = param_2;
    local_21c = param_3;
    local_210[1] = param_3;
    local_218 = param_6;
    local_210[2] = param_6;
    local_210[6] = param_6;
    local_1e8 = param_6;
    local_260 = param_7;
    local_210[5] = param_5;
    local_210[9] = param_5;
    local_258[0] = param_9;
    local_25c = param_8;
    local_258[2] = param_9;
    local_258[3] = param_10;
    local_258[1] = param_8;
    local_258[5] = param_10;
    local_258[4] = param_7;
    local_1a0 = (float)*param_11 * _DAT_00899dd0;
    local_19c = (float)param_11[1] * _DAT_00899dd0;
    local_198 = (float)param_11[2] * _DAT_00899dd0;
    local_194 = (float)param_11[3] * _DAT_00899dd0;
    local_190 = (float)param_11[4] * _DAT_00899dd0;
    local_18c = (float)param_11[5] * _DAT_00899dd0;
    local_188 = (float)param_11[6] * _DAT_00899dd0;
    local_184 = (float)param_11[7] * _DAT_00899dd0;
    local_180 = (float)param_11[8] * _DAT_00899dd0;
    local_17c = (float)param_11[9] * _DAT_00899dd0;
    iVar5 = param_1 + 0x30;
    local_298[0] = (float)param_11[10] * _DAT_00899dd0;
    local_298[1] = (float)param_11[0xb] * _DAT_00899dd0;
    local_164 = (float)param_11[0xf] * _DAT_00899dd0;
    local_168 = (float)param_11[0xe] * _DAT_00899dd0;
    local_16c = (float)param_11[0xd] * _DAT_00899dd0;
    local_170 = (float)param_11[0xc] * _DAT_00899dd0;
    ExceptionList = &local_1c;
    local_178 = local_298[0];
    local_174 = local_298[1];
    thunk_FUN_006bd940(&local_220,iVar5,&local_220);
    thunk_FUN_006bd940(local_210,iVar5,local_210);
    thunk_FUN_006bd940(local_210 + 4,iVar5,local_210 + 4);
    thunk_FUN_006bd940(local_210 + 8,iVar5,local_210 + 8);
    if ((*(byte *)(param_12 + 0x50) & 1) == 0) {
      iVar5 = FUN_00582d20(param_12,&local_220,&local_260,&local_1a0,local_a0,&local_2a0,local_120);
    }
    else {
      iVar5 = FUN_00584800(param_12,&local_220,&local_260,&local_1a0,local_a0,&local_2a0,local_120);
    }
    if (iVar5 != 0) {
      puVar9 = (undefined1 *)((int)&local_2a0 + 2);
      iVar7 = iVar5;
      do {
        uVar4 = FUN_007c4b80();
        puVar9[-2] = uVar4;
        uVar4 = FUN_007c4b80();
        puVar9[-1] = uVar4;
        uVar4 = FUN_007c4b80();
        *puVar9 = uVar4;
        uVar4 = FUN_007c4b80();
        puVar9[1] = uVar4;
        puVar9 = puVar9 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      uVar8 = 0;
      if (iVar5 != 2) {
        piVar10 = local_210 + 2;
        do {
          if (*(int *)(DAT_0091cfa0 + 0x18) == *(int *)(DAT_0091cfa0 + 0x2c)) {
            if (DAT_0091cfa4 == 0) {
              DAT_0091cfa4 = FUN_004662e0(0xc0,0x200,"FERenderEPolySlotPoolOverflow",0);
              *(uint *)(DAT_0091cfa4 + 0x14) = *(uint *)(DAT_0091cfa4 + 0x14) & 0xfffffffb;
            }
            piVar6 = (int *)FUN_00465f70();
          }
          else {
            piVar6 = (int *)FUN_0045f2c0();
          }
          local_14 = 0;
          if (piVar6 == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            FUN_006c0a30();
            piVar6[0x2d] = 0;
          }
          piVar6[0x2c] = 0;
          piVar2 = *(int **)(param_1 + 0x1c);
          *piVar2 = (int)piVar6;
          *(int **)(param_1 + 0x1c) = piVar6;
          piVar6[1] = (int)piVar2;
          *piVar6 = param_1 + 0x18;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          piVar6[5] = local_21c;
          piVar6[0x14] = local_260;
          piVar6[6] = local_218;
          piVar6[4] = local_220;
          piVar6[0x24] = local_2a0;
          iVar3 = local_258[uVar8 * 2];
          piVar6[0x15] = local_25c;
          iVar7 = piVar10[-1];
          iVar1 = *piVar10;
          piVar6[8] = piVar10[-2];
          piVar6[9] = iVar7;
          iVar7 = local_258[uVar8 * 2 + 1];
          uVar8 = uVar8 + 1;
          piVar6[10] = iVar1;
          piVar6[0x16] = iVar3;
          iVar1 = (&local_2a0)[uVar8];
          piVar6[0x17] = iVar7;
          piVar6[0x25] = iVar1;
          iVar7 = piVar10[4];
          iVar1 = piVar10[2];
          iVar3 = local_258[uVar8 * 2];
          piVar6[0xd] = piVar10[3];
          piVar6[0xc] = iVar1;
          iVar1 = local_258[uVar8 * 2 + 1];
          piVar6[0xe] = iVar7;
          piVar6[0x19] = iVar1;
          iVar7 = (&local_29c)[uVar8];
          piVar6[0x18] = iVar3;
          piVar6[0x26] = iVar7;
          piVar6[0x10] = piVar6[0xc];
          piVar6[0x11] = piVar6[0xd];
          piVar10 = piVar10 + 4;
          local_14 = 0xffffffff;
          piVar6[0x12] = piVar6[0xe];
          piVar6[0x1b] = piVar6[0x19];
          piVar6[0x1a] = piVar6[0x18];
          piVar6[0x27] = iVar7;
          piVar6[0x1c] = piVar6[0x18];
          *(undefined1 *)((int)piVar6 + 0xa1) = 1;
          *(undefined1 *)(piVar6 + 0x28) = 1;
        } while (uVar8 < iVar5 - 2U);
      }
    }
    ExceptionList = local_1c;
    return;
  }
  ExceptionList = &local_1c;
  FUN_00582660(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
               param_13);
  ExceptionList = local_1c;
  return;
}

