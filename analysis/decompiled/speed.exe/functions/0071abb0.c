/* speed.exe 0071abb0 FUN_0071abb0; analysis pseudocode, not buildable source.
 * calls 0070a600 FUN_0070a600
 * calls 005d59f0 FUN_005d59f0
 * calls 00708390 FUN_00708390
 * calls 00715b90 FUN_00715b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0071abb0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float fStack_10;
  float fStack_c;
  
  iVar2 = DAT_00993cc8;
  if (((0 < *(short *)(DAT_00993cc8 + 0x148)) && (DAT_0092d884 != 0)) &&
     ((int *)*DAT_0092d87c != (int *)0x0)) {
    (**(code **)(*(int *)*DAT_0092d87c + 4))();
    piVar3 = (int *)FUN_005d59f0(&LAB_00403f90);
    if (piVar3 != (int *)0x0) {
      fVar5 = (float10)FUN_0070a600();
      iVar4 = (**(code **)(*piVar3 + 8))();
      fVar1 = *(float *)(iVar4 + 0x18);
      fStack_c = _DAT_0089096c;
      if ((fVar1 < _DAT_0089096c) && (fStack_c = fVar1, fVar1 < _DAT_00890968)) {
        fStack_c = 0.0;
      }
      iVar4 = (**(code **)(*piVar3 + 8))();
      fVar1 = *(float *)(iVar4 + 0x1c);
      fStack_10 = _DAT_0089096c;
      if ((fVar1 < _DAT_0089096c) && (fStack_10 = fVar1, fVar1 < _DAT_00890968)) {
        fStack_10 = 0.0;
      }
      if ((DAT_00993f4c & 1) == 0) {
        _DAT_00993f48 = *(float *)(iVar2 + 0x108);
        DAT_00993f4c = DAT_00993f4c | 1;
      }
      if ((DAT_00993f4c & 2) == 0) {
        DAT_00993f4c = DAT_00993f4c | 2;
        _DAT_00993f44 = DAT_00925ae8;
      }
      fVar1 = (float)(DAT_00925ae8 - *(int *)(iVar2 + 0x220)) * _DAT_00890984;
      fVar6 = (float10)FUN_00715b90();
      if ((float10)fVar1 < fVar6) {
        fVar6 = (float10)fVar1;
      }
      if (((((*(uint *)(param_1 + 0x4c) & 2) == 0) && (_DAT_0089107c <= (float)fVar5)) &&
          ((_DAT_0089096c <= fStack_c || (_DAT_0089096c <= fStack_10)))) &&
         ((_DAT_00894ed8 < *(float *)(iVar2 + 0x108) && ((float10)_DAT_008b0e5c < fVar6)))) {
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 2;
        _DAT_00993f48 = *(float *)(iVar2 + 0x108);
        _DAT_00993f44 = DAT_00925ae8;
      }
      if ((*(uint *)(param_1 + 0x4c) & 2) != 0) {
        if (((float)fVar5 < _DAT_0089107c) ||
           (((fStack_c < _DAT_008b0e70 && (fStack_10 < _DAT_008b0e70)) ||
            (fVar6 < (float10)_DAT_008b0e5c)))) {
          *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffd;
          return;
        }
        if ((*(float *)(iVar2 + 0x108) / _DAT_00993f48 <
             _DAT_0089096c - *(float *)(*(int *)(iVar2 + 0x184) + 0x98)) &&
           (piVar3 = (int *)FUN_00708390(1,1), piVar3 != (int *)0x0)) {
          (**(code **)(*piVar3 + 0x194))();
          *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffd;
          return;
        }
      }
    }
  }
  return;
}

