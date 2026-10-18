/* speed.exe 00777f50 FUN_00777f50; analysis pseudocode, not buildable source.
 * calls 005d51e0 FUN_005d51e0
 * calls 00774150 FUN_00774150
 * calls 007646f0 FUN_007646f0
 * calls 005d2d30 FUN_005d2d30
 * calls 00765770 FUN_00765770
 * calls 005d5ed0 FUN_005d5ed0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00777f50(int param_1,float *param_2,float *param_3,float *param_4,ushort *param_5,float *param_6
            )

{
  ushort uVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  float10 fVar11;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 local_7c [112];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00881b98;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x2e4) != 0) && (0 < *(int *)(param_1 + 0x2e0))) {
    iVar6 = -1;
    iVar9 = 0;
    local_b0 = -1.0;
    local_ac = 0.0;
    local_9c = DAT_009b38b4;
    ExceptionList = &local_c;
    if (0 < *(int *)(param_1 + 0x2e0)) {
      do {
        fVar11 = (float10)FUN_00774150((uint)*(ushort *)(*(int *)(param_1 + 0x2e4) + iVar9 * 2) *
                                       0x16 + DAT_009b38c0,param_2,&local_a8,1);
        fVar2 = (local_a0 - param_2[2]) * (local_a0 - param_2[2]) +
                (local_a4 - param_2[1]) * (local_a4 - param_2[1]) +
                (local_a8 - *param_2) * (local_a8 - *param_2);
        if ((local_b0 < _DAT_00890968) || (fVar2 < local_b0)) {
          local_ac = (float)fVar11;
          local_98 = local_a8;
          local_94 = local_a4;
          local_90 = local_a0;
          iVar6 = iVar9;
          local_b0 = fVar2;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x2e0));
      if (-1 < iVar6) {
        puVar10 = (ushort *)(*(int *)(param_1 + 0x2e4) + iVar6 * 2);
        uVar1 = *puVar10;
        iVar9 = (uint)uVar1 * 0x16;
        iVar8 = iVar9 + DAT_009b38c0;
        local_a4 = (float)((uint)*(ushort *)(iVar8 + 2) * 0x20 + DAT_009b38bc);
        iVar9 = (uint)*(ushort *)(iVar9 + DAT_009b38c0) * 0x20 + DAT_009b38bc;
        if (iVar6 < *(int *)(param_1 + 0x2e0) + -1) {
          uVar5 = puVar10[1];
        }
        else {
          uVar5 = 0xffff;
        }
        if (iVar6 < 1) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = CONCAT22((short)((uint)iVar6 >> 0x10),puVar10[-1]);
        }
        FUN_005d5ed0();
        local_4 = 0;
        FUN_00765770(iVar8,local_7c);
        FUN_005d2d30(local_ac,&local_8c);
        if (param_4 != (float *)0x0) {
          *param_4 = local_8c;
          param_4[1] = local_88;
          param_4[2] = local_84;
          uVar4 = (uint)*(byte *)(iVar9 + 0x10);
          iVar6 = 0;
          if (uVar4 != 0) {
            puVar10 = (ushort *)(iVar9 + 0x12);
            do {
              if (*puVar10 == uVar5) goto LAB_0077814c;
              iVar6 = iVar6 + 1;
              puVar10 = puVar10 + 1;
            } while (iVar6 < (int)uVar4);
          }
          cVar3 = FUN_007646f0(uVar7);
          if (cVar3 != '\0') {
LAB_0077814c:
            *param_4 = -*param_4;
            param_4[1] = -param_4[1];
            param_4[2] = -param_4[2];
          }
        }
        if (param_5 != (ushort *)0x0) {
          *param_5 = uVar1;
        }
        if (param_3 != (float *)0x0) {
          *param_3 = local_98;
          param_3[1] = local_94;
          param_3[2] = local_90;
        }
        if (param_6 != (float *)0x0) {
          *param_6 = local_ac;
        }
        local_4 = 0xffffffff;
        FUN_005d51e0();
        ExceptionList = local_c;
        return 1;
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}

