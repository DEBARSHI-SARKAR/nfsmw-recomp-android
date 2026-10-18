/* speed.exe 006206a0 FUN_006206a0; analysis pseudocode, not buildable source.
 * calls 004d2830 FUN_004d2830
 * calls 0065faf0 FUN_0065faf0
 * calls 004048c0 FUN_004048c0
 * calls 007854b0 FUN_007854b0
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006206a0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_84;
  undefined1 local_80 [16];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar3 = ExceptionList;
  puStack_8 = &LAB_00876bab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6808;
  local_4 = 0;
  if ((DAT_00925e90 == 6) && (DAT_008f86f8 != 0)) {
    iVar7 = 0;
    if (0 < DAT_008ef998) {
      iVar6 = 0;
      local_94 = param_1;
      do {
        FUN_004048c0();
        local_ac = *(float *)((int)&DAT_00914560 + iVar6);
        local_b4 = -*(float *)((int)&DAT_00914564 + iVar6);
        local_b0 = *(float *)((int)&DAT_00914568 + iVar6);
        local_9c = *(float *)((int)&DAT_00914580 + iVar6);
        local_a4 = -*(float *)((int)&DAT_00914584 + iVar6);
        local_a0 = *(float *)((int)&DAT_00914588 + iVar6);
        fVar1 = ABS((float)(&DAT_009142c8)[iVar7]) * _DAT_00891054;
        fVar2 = _DAT_00894b64;
        if ((_DAT_00894b64 < fVar1) || (fVar2 = fVar1, _DAT_00890e98 <= fVar1)) {
          local_a4 = local_a4 * fVar2 + local_b4;
          local_90 = 0;
          local_8c = 3;
          local_a0 = local_a0 * fVar2 + local_b0;
          local_9c = local_9c * fVar2 + local_ac;
          local_98 = local_98 * fVar2 + local_a8;
          iVar4 = FUN_007854b0(&local_b4,local_80,2);
          if ((iVar4 != 0) &&
             (_DAT_00895074 <=
              ABS(local_70 * -*(float *)((int)&DAT_00914584 + iVar6) +
                  local_68 * *(float *)((int)&DAT_00914580 + iVar6) +
                  local_6c * *(float *)((int)&DAT_00914588 + iVar6) + local_64 * local_84))) {
            uVar5 = FUN_005cc240("FRONT_BARRIER");
            iVar4 = FUN_004d2830(iVar7,local_34,0);
            *(undefined4 *)(iVar4 + 4) = uVar5;
            FUN_0065faf0();
            param_1 = local_94;
          }
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar7 < DAT_008ef998);
      *param_1 = &PTR_LAB_008a66f8;
      ExceptionList = local_c;
      return;
    }
    *param_1 = &PTR_LAB_008a66f8;
    ExceptionList = pvVar3;
    return;
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = pvVar3;
  return;
}

