/* speed.exe 007011e0 FUN_007011e0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_007011e0(int param_1,char param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if ((_DAT_00993f04 & 1) == 0) {
    _DAT_00993f04 = _DAT_00993f04 | 1;
    _DAT_00993f00 = 0;
  }
  fVar1 = *(float *)(param_1 + 300);
  if (fVar1 < _DAT_00890968) {
    fVar1 = -fVar1;
  }
  fVar2 = *(float *)(param_1 + 0x124);
  if (fVar2 < _DAT_00890968) {
    fVar2 = -fVar2;
  }
  if (fVar2 <= fVar1) {
    iVar3 = 2;
    if (*(float *)(param_1 + 300) <= _DAT_00890968) {
      iVar3 = 1;
    }
  }
  else if (*(float *)(param_1 + 0x124) <= _DAT_00890968) {
    iVar3 = 8;
  }
  else {
    iVar3 = 4;
  }
  if (iVar3 != DAT_00993efc) {
    _DAT_00993f00 = DAT_00925ae8;
    DAT_00993efc = iVar3;
  }
  if (((float)(DAT_00925ae8 - _DAT_00993f00) * _DAT_00890984 <= _DAT_008959e4) && (param_2 == '\0'))
  {
    return 0;
  }
  return iVar3;
}

