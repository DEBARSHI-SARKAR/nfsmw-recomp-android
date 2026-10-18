/* speed.exe 006903c0 FUN_006903c0; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006903c0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fVar1 = *(float *)(param_1 + 0x118);
  if ((((fVar1 != _DAT_00890968) &&
       (iVar2 = (**(code **)(*(int *)(param_1 + 0x4c) + 0x4c))(), 2 < iVar2)) &&
      (_DAT_00890968 < *(float *)(param_2 + 0x4c))) &&
     (fStack_8 = *(float *)(param_2 + 0x8c) * *(float *)(param_2 + 0x4c) * _DAT_00890f14,
     _DAT_00890968 <= fVar1 * fStack_8)) {
    if (fVar1 < _DAT_00890968) {
      fVar1 = -fVar1;
    }
    fStack_8 = fVar1 * fStack_8;
    fStack_c = 0.0;
    fStack_4 = 0.0;
    FUN_00401670(&fStack_c,param_2,&fStack_c);
    fStack_c = fStack_c + *(float *)(param_2 + 0x60);
    fStack_8 = fStack_8 + *(float *)(param_2 + 100);
    fStack_4 = fStack_4 + *(float *)(param_2 + 0x68);
    (**(code **)(**(int **)(param_1 + 0xe8) + 100))(&fStack_c);
    return;
  }
  return;
}

