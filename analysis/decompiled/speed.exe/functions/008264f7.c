/* speed.exe 008264f7 FUN_008264f7; analysis pseudocode, not buildable source.
 * calls 00824349 FUN_00824349
 * calls 008243c5 FUN_008243c5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008264f7(int param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float local_c;
  int local_8;
  
  if (((param_2 == 3) || (param_2 == 4)) && (_DAT_0089119c < *(float *)(param_1 + 0x34))) {
    *(float *)(param_1 + 0x34) = _DAT_0089119c;
  }
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
    local_8 = 1;
    pfVar2 = (float *)(param_1 + 0x2c);
    do {
      fVar1 = (float)local_8 * _DAT_00894214;
      fVar5 = (float10)FUN_008243c5(fVar1 * *(float *)(param_1 + 0x38));
      local_8 = local_8 + 1;
      *pfVar2 = (float)(fVar5 / (float10)fVar1);
      pfVar2 = pfVar2 + -1;
    } while (local_8 < 5);
  }
  else if (param_2 == 3) {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x34);
    local_8 = 1;
    pfVar2 = (float *)(param_1 + 0x2c);
    do {
      fVar1 = (float)local_8 * _DAT_00894214;
      fVar5 = (float10)FUN_008243c5(fVar1 * *(float *)(param_1 + 0x34));
      local_8 = local_8 + 1;
      *pfVar2 = (float)(fVar5 / (float10)fVar1);
      pfVar2 = pfVar2 + -1;
    } while (local_8 < 5);
  }
  else if (param_2 == 4) {
    local_8 = 1;
    pfVar2 = (float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x34);
    do {
      fVar1 = (float)local_8 * _DAT_00894214;
      fVar5 = (float10)FUN_008243c5((*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x34)) *
                                    fVar1 * _DAT_008933d4);
      fVar6 = (float10)FUN_00824349((*(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x34)) *
                                    fVar1 * _DAT_008933d4);
      fVar6 = fVar6 * (float10)(float)(fVar5 / (float10)fVar1);
      local_8 = local_8 + 1;
      *pfVar2 = (float)(fVar6 + fVar6);
      pfVar2 = pfVar2 + -1;
    } while (local_8 < 5);
  }
  local_8 = 0;
  pfVar2 = (float *)(param_1 + 0x20);
  local_c = 0.0;
  pfVar4 = pfVar2;
  do {
    if ((param_2 == 2) || (param_2 == 4)) {
      fVar5 = (float10)FUN_00824349((float)local_8 * _DAT_008c5dcc);
      fVar5 = ((float10)_DAT_008c5dc4 - fVar5 * (float10)_DAT_008c5dc8) * (float10)*pfVar4;
      *pfVar4 = (float)fVar5;
LAB_008266a0:
      fVar5 = fVar5 + (float10)local_c;
LAB_008266a3:
      local_c = (float)fVar5;
    }
    else if (param_2 == 3) {
      fVar5 = (float10)FUN_00824349((float)local_8 * _DAT_008c5dcc);
      fVar5 = -(((float10)_DAT_008c5dc4 - fVar5 * (float10)_DAT_008c5dc8) * (float10)*pfVar4);
      fVar1 = (float)fVar5;
      *pfVar4 = (float)fVar5;
      if (local_8 % 2 == 0) {
        fVar5 = (float10)fVar1;
        goto LAB_008266a0;
      }
      fVar5 = (float10)local_c - (float10)fVar1;
      goto LAB_008266a3;
    }
    fVar1 = _DAT_0089096c;
    local_8 = local_8 + 1;
    pfVar4 = pfVar4 + 1;
    if (4 < local_8) {
      if (param_2 == 3) {
        *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + _DAT_0089096c;
        local_c = local_c + fVar1;
      }
      fVar1 = (local_c + local_c) - *(float *)(param_1 + 0x30);
      if (fVar1 < _DAT_00890968) {
        fVar1 = fVar1 * _DAT_00890da8;
      }
      iVar3 = 5;
      do {
        *pfVar2 = (1.0 / fVar1) * *pfVar2;
        pfVar2 = pfVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return;
    }
  } while( true );
}

