/* speed.exe 00515450 FUN_00515450; analysis pseudocode, not buildable source.
 * calls 00503400 FUN_00503400
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00515450(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    fVar2 = *(float *)(iVar1 + 0x3c);
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 1:
    case 7:
    case 9:
    case 0xc:
      iVar3 = FUN_00503400(*(undefined4 *)(param_1 + 0x24),1,0);
      param_2 = (float)(int)*(short *)(iVar3 + 0x46) * param_2;
      *(float *)(iVar1 + 0x3c) = param_2;
      break;
    case 2:
      *(float *)(iVar1 + 0x3c) = param_2;
      break;
    case 5:
      *(float *)(iVar1 + 0x3c) = param_2;
    }
    if (_DAT_00896abc + param_2 < fVar2) {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400000;
    }
    else if (fVar2 < param_2 - _DAT_00896abc) {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400000;
      return;
    }
  }
  return;
}

