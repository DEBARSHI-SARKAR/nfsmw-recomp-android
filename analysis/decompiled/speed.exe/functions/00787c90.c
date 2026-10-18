/* speed.exe 00787c90 FUN_00787c90; analysis pseudocode, not buildable source.
 * calls 0076fde0 FUN_0076fde0
 * calls 004100a0 FUN_004100a0
 * calls 007c4b80 FUN_007c4b80
 * calls 0076e220 FUN_0076e220
 * calls 00772350 FUN_00772350
 * calls 0077b9e0 FUN_0077b9e0
 * calls 007700b0 FUN_007700b0
 * calls 007862d0 FUN_007862d0
 * calls 0076d1e0 FUN_0076d1e0
 * calls 00463c70 FUN_00463c70
 * calls 0076ded0 FUN_0076ded0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00787c90(undefined4 *param_1,int param_2,float *param_3,float *param_4,int param_5)

{
  short sVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  float10 fVar11;
  float *pfVar12;
  float local_30c;
  float local_308;
  undefined4 local_304;
  float local_300;
  float local_2fc;
  undefined4 *local_2f8;
  char local_2a4;
  undefined1 local_2a3;
  undefined1 local_2a2;
  undefined1 local_2a1;
  undefined1 local_2a0;
  undefined4 local_27c;
  undefined4 local_278;
  char local_268;
  short local_266;
  undefined4 local_264;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_008823a3;
  local_c = ExceptionList;
  puVar2 = param_1 + 0x11;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b5c24;
  *puVar2 = puVar2;
  param_1[0x12] = puVar2;
  puVar2 = param_1 + 0x13;
  *puVar2 = puVar2;
  param_1[0x14] = puVar2;
  param_1[4] = 0;
  param_1[0xb] = param_2;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xe] = *param_3;
  param_1[0xf] = param_3[1];
  param_1[0x10] = param_3[2];
  local_4 = 1;
  uStack_3 = 0;
  local_2f8 = param_1;
  FUN_0077b9e0();
  local_278 = *(undefined4 *)(param_2 + 0x7c);
  local_4 = 2;
  local_27c = 2;
  if ((*(char *)(param_2 + 0x51) == '\0') || (local_2a3 = 1, DAT_009b3829 == '\0')) {
    local_2a3 = 0;
  }
  local_2a1 = *(undefined1 *)(param_2 + 0x53);
  local_2a2 = *(undefined1 *)(param_2 + 0x52);
  local_2a0 = *(undefined1 *)(param_2 + 0x54);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_5;
  bVar3 = FUN_0076fde0();
  if (bVar3 == 0xff) {
LAB_00787db2:
    local_30c = 1.0;
    local_308 = 0.0;
    local_304 = 0;
    pfVar12 = param_4;
    if (param_4 == (float *)0x0) {
      pfVar12 = &local_30c;
    }
    FUN_007862d0(param_3,pfVar12,0,0);
    local_30c = DAT_009b38b4;
    iVar6 = *(int *)(param_2 + 0x7c);
    if (local_2a4 != '\0') {
      param_1[0xd] = (int)local_266;
      *(short *)(param_2 + 0x2da) = local_266;
      *(undefined1 *)(param_2 + 0x2d8) = 0;
      *(undefined4 *)(param_2 + 0x2dc) = local_264;
      iVar7 = param_1[0xd];
      cVar4 = FUN_007700b0(iVar7,0);
      if (cVar4 == '\0') {
        if (param_4 == (float *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (uint)*(ushort *)(iVar7 * 0x16 + DAT_009b38c0 + local_268 * 2) * 0x20 +
                  DAT_009b38bc;
        }
        param_1[0xc] = iVar7;
        sVar1 = *(short *)(param_2 + 0x8e);
        iVar7 = (int)sVar1;
        iVar10 = (uint)*(ushort *)(iVar7 * 0x16 + DAT_009b38c0 + *(char *)(param_2 + 0x8c) * 2) *
                 0x20 + DAT_009b38bc;
        fVar11 = (float10)FUN_004100a0(iVar10,param_1 + 0xe);
        local_300 = (float)fVar11;
        piVar8 = (int *)FUN_00463c70(DAT_009b38ec);
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          *(undefined2 *)(piVar8 + 2) = 0xffff;
          *(short *)((int)piVar8 + 10) = sVar1;
          *(undefined2 *)(piVar8 + 3) = *(undefined2 *)(iVar10 + 0xc);
          uVar5 = FUN_007c4b80();
          *(undefined2 *)((int)piVar8 + 0xe) = uVar5;
          uVar5 = FUN_007c4b80();
          *(undefined2 *)(piVar8 + 4) = uVar5;
        }
        puVar2 = (undefined4 *)param_1[0x12];
        *puVar2 = piVar8;
        param_1[0x12] = piVar8;
        piVar8[1] = (int)puVar2;
        *piVar8 = (int)(param_1 + 0x11);
        local_4 = 2;
        if (iVar6 != 6) {
          uVar9 = FUN_0076ded0(iVar7,iVar10);
          fVar11 = (float10)FUN_004100a0(uVar9,param_1 + 0xe);
          local_300 = (float)fVar11;
          local_30c = (float)FUN_00463c70(DAT_009b38ec);
          local_4 = 4;
          if (local_30c == 0.0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_0076d1e0(0,uVar9,iVar7,0,local_300);
          }
          local_4 = 2;
          FUN_00772350(&LAB_00764f80,uVar9);
        }
      }
      else {
        param_1[3] = 1;
      }
      goto LAB_00788003;
    }
    local_30c = param_3[2];
    local_308 = -*param_3;
    if (param_4 != (float *)0x0) {
      local_2fc = -*param_4;
      local_300 = param_4[2];
      param_1[3] = 3;
      goto LAB_00788003;
    }
    local_300 = _DAT_00890968;
    local_2fc = _DAT_00890968;
  }
  else {
    iVar6 = 1 << (bVar3 & 0x1f);
    param_1[8] = iVar6;
    param_1[9] = iVar6;
    if (((*(int *)(param_2 + 0x7c) != 6) || (param_5 == 0)) ||
       (*(char *)((uint)bVar3 + param_5) != '\0')) goto LAB_00787db2;
  }
  param_1[3] = 3;
LAB_00788003:
  _local_4 = CONCAT31(uStack_3,1);
  FUN_0076e220();
  ExceptionList = local_c;
  return param_1;
}

