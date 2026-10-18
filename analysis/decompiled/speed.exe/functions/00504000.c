/* speed.exe 00504000 FUN_00504000; analysis pseudocode, not buildable source.
 * calls 006bf530 FUN_006bf530
 * calls 0045f340 FUN_0045f340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00504000(int param_1,float *param_2,float param_3,uint param_4,float param_5)

{
  float fVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  uint uVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  uint local_38;
  
  iVar2 = FUN_006bf530();
  uVar3 = (uint)(iVar2 == 3);
  iVar2 = 0;
  if (param_4 == 0) {
    if (uVar3 != 0xffffffff) {
      param_1 = param_1 + 800;
      do {
        fVar5 = (float10)FUN_0045f340(param_2,param_1);
        fVar6 = (float10)param_3;
        param_4 = CONCAT22(extraout_var,
                           (ushort)(fVar5 < fVar6) << 8 | (ushort)(NAN(fVar5) || NAN(fVar6)) << 10 |
                           (ushort)(fVar5 == fVar6) << 0xe);
        if (fVar5 < fVar6) {
LAB_005040e1:
          return CONCAT31((int3)(param_4 >> 8),1);
        }
        iVar2 = iVar2 + 1;
        param_1 = param_1 + 0x10;
      } while (iVar2 < (int)(uVar3 + 1));
    }
  }
  else {
    local_38 = 0;
    if (uVar3 != 0xffffffff) {
      pfVar4 = (float *)(param_1 + 0x328);
      do {
        fVar6 = (float10)FUN_0045f340(param_2,pfVar4 + -2);
        if (fVar6 < (float10)param_3) {
          fVar1 = (float)((float10)_DAT_0089096c / fVar6);
          fVar1 = (param_2[2] - *pfVar4) * fVar1 * pfVar4[8] +
                  fVar1 * (param_2[1] - pfVar4[-1]) * pfVar4[7] +
                  (*param_2 - pfVar4[-2]) * fVar1 * pfVar4[6];
          param_4 = CONCAT22(extraout_var_00,
                             (ushort)(fVar1 < param_5) << 8 |
                             (ushort)(NAN(fVar1) || NAN(param_5)) << 10 |
                             (ushort)(fVar1 == param_5) << 0xe);
          if (fVar1 < param_5 == 0 && (fVar1 == param_5) == 0) goto LAB_005040e1;
        }
        local_38 = local_38 + 1;
        pfVar4 = pfVar4 + 4;
        if ((int)(uVar3 + 1) <= (int)local_38) {
          return local_38 & 0xffffff00;
        }
      } while( true );
    }
  }
  return param_4 & 0xffffff00;
}

