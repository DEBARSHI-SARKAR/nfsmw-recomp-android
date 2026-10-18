/* speed.exe 008284c6 FUN_008284c6; analysis pseudocode, not buildable source.
 * calls 00827d27 FUN_00827d27
 * calls 00827acf FUN_00827acf
 * calls 00827b3a FUN_00827b3a
 * calls 007d6d30 FID_conflict:_memcpy
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008284c6(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fStack_214;
  float local_210 [108];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float afStack_50 [13];
  int local_1c;
  int local_18;
  float local_14;
  float *local_10;
  uint local_c;
  float local_8;
  
  iVar2 = param_1;
  iVar3 = FUN_00827acf();
  pfVar7 = (float *)(param_1 + 0x118);
  local_c = (uint)(iVar3 < *(int *)(param_1 + 0x10));
  afStack_50[1] =
       (*(float *)(&DAT_0090c958 + iVar3 * 4) - *(float *)(param_1 + 0x114)) * _DAT_008910f0;
  iVar3 = 1;
  do {
    iVar4 = FUN_00827acf();
    fVar1 = *pfVar7;
    iVar3 = iVar3 + 1;
    pfVar7 = pfVar7 + 1;
    afStack_50[iVar3] =
         (float)(((float10)*(float *)(&DAT_0090c958 + iVar4 * 4) - (float10)fVar1) * extraout_ST0);
  } while (iVar3 < 4);
  iVar3 = 4;
  pfVar7 = (float *)(param_1 + 0x124);
  do {
    iVar4 = FUN_00827acf();
    fVar1 = *pfVar7;
    iVar3 = iVar3 + 1;
    pfVar7 = pfVar7 + 1;
    afStack_50[iVar3] =
         (float)(((float10)*(float *)(&DAT_0090c998 + iVar4 * 4) - (float10)fVar1) * extraout_ST0_00
                );
  } while (iVar3 < 0xc);
  local_10 = (float *)(param_1 + 0x684);
  param_1 = 0xd8;
  do {
    iVar3 = FUN_00827acf();
    iVar3 = param_1 - iVar3;
    local_1c = iVar3;
    iVar4 = FUN_00827acf();
    local_14 = (float)iVar4;
    if (iVar4 < 0) {
      local_14 = local_14 + _DAT_00891214;
    }
    local_14 = local_14 * _DAT_008a7ddc;
    iVar4 = FUN_00827acf();
    local_8 = *(float *)(iVar2 + 0x14 + iVar4 * 4);
    if (*(int *)(iVar2 + 0xc) == 0) {
      FUN_00827b3a(iVar2,local_c,local_210,1);
    }
    else {
      iVar5 = FUN_00827acf();
      local_18 = FUN_00827acf();
      FUN_00827b3a(iVar2,local_c,(int)local_210 + iVar5 * 4,2);
      iVar4 = 0x36;
      if (local_18 == 0) {
        fStack_214 = 0.0;
        local_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        afStack_50[0] = 0.0;
        pfVar7 = (float *)((int)local_210 + (6 - iVar5) * 4);
        do {
          iVar4 = iVar4 + -1;
          pfVar7[-5] = (pfVar7[-6] + pfVar7[-4]) * _DAT_008c5dd4 +
                       ((pfVar7[-10] + *pfVar7) * _DAT_008c5ddc -
                       (pfVar7[-8] + pfVar7[-2]) * _DAT_008c5dd8);
          pfVar7 = pfVar7 + 2;
        } while (iVar4 != 0);
        local_8 = local_8 * _DAT_008933d4;
        iVar3 = local_1c;
      }
      else {
        puVar6 = (undefined4 *)((int)local_210 + (1 - iVar5) * 4);
        do {
          *puVar6 = 0;
          puVar6 = puVar6 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    iVar4 = 0;
    pfVar7 = (float *)(iVar2 + 0x174 + iVar3 * 4);
    do {
      iVar4 = iVar4 + 1;
      fVar1 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      *local_10 = local_14 * fVar1 + local_8 * (&fStack_214)[iVar4];
      local_10 = local_10 + 1;
    } while (iVar4 < 0x6c);
    param_1 = param_1 + 0x6c;
  } while (param_1 < 0x288);
  (*(code *)PTR_FID_conflict__memcpy_0090c700)(iVar2 + 0x174,iVar2 + 0x834,0x510);
  iVar3 = 0;
  pfVar7 = (float *)(iVar2 + 0x114);
  do {
    iVar4 = iVar3 + 1;
    iVar3 = iVar3 + 1;
    *pfVar7 = afStack_50[iVar4] + *pfVar7;
    pfVar7 = pfVar7 + 1;
  } while (iVar3 < 0xc);
  FUN_00827d27(1);
  iVar3 = 0;
  pfVar7 = (float *)(iVar2 + 0x114);
  do {
    iVar4 = iVar3 + 1;
    iVar3 = iVar3 + 1;
    *pfVar7 = afStack_50[iVar4] + *pfVar7;
    pfVar7 = pfVar7 + 1;
  } while (iVar3 < 0xc);
  FUN_00827d27(1);
  iVar3 = 0;
  pfVar7 = (float *)(iVar2 + 0x114);
  do {
    iVar4 = iVar3 + 1;
    iVar3 = iVar3 + 1;
    *pfVar7 = afStack_50[iVar4] + *pfVar7;
    pfVar7 = pfVar7 + 1;
  } while (iVar3 < 0xc);
  FUN_00827d27(1);
  iVar3 = 0;
  pfVar7 = (float *)(iVar2 + 0x114);
  do {
    iVar2 = iVar3 + 1;
    iVar3 = iVar3 + 1;
    *pfVar7 = afStack_50[iVar2] + *pfVar7;
    pfVar7 = pfVar7 + 1;
  } while (iVar3 < 0xc);
  FUN_00827d27(0x21);
  return;
}

