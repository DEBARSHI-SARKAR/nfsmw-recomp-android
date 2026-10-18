/* speed.exe 00778e50 FUN_00778e50; analysis pseudocode, not buildable source.
 * calls 00402060 FUN_00402060
 * calls 007698a0 FUN_007698a0
 * calls 0045f9f0 FUN_0045f9f0
 * calls 0076eed0 FUN_0076eed0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00778e50(int param_1,float *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined2 extraout_var;
  float10 fVar4;
  float10 fVar5;
  float local_10;
  float local_c;
  float local_8;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    local_10 = *param_2;
    local_c = param_2[2];
    iVar2 = FUN_0045f9f0(param_1 + 0x68,param_1 + 0x70,&local_10,param_3);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_0076eed0(param_2,0,**(undefined4 **)(param_1 + 8),0);
      if (*(int *)(param_1 + 4) <= (int)uVar3) {
        iVar2 = FUN_007698a0(uVar3);
        fVar4 = (float10)FUN_00402060(param_2[1],*(float *)(iVar2 + 0x34) - _DAT_00890da4,
                                      *(float *)(iVar2 + 0x34) + _DAT_00890da4);
        fVar5 = (float10)param_2[1];
        uVar3 = CONCAT22(extraout_var,
                         (ushort)(fVar5 < fVar4) << 8 | (ushort)(NAN(fVar5) || NAN(fVar4)) << 10 |
                         (ushort)(fVar5 == fVar4) << 0xe);
        if (fVar5 == fVar4) {
          local_8 = local_10 - *(float *)(iVar2 + 0x30);
          fVar1 = local_8 * *(float *)(iVar2 + 0x14) -
                  (local_c - *(float *)(iVar2 + 0x38)) * *(float *)(iVar2 + 0x10);
          fVar4 = (float10)FUN_00402060(fVar1,*(float *)(iVar2 + 0x20) - param_3,
                                        param_3 + *(float *)(iVar2 + 0x24));
          if ((float10)fVar1 == fVar4) {
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}

