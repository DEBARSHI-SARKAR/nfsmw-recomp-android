/* speed.exe 006af670 FUN_006af670; analysis pseudocode, not buildable source.
 * calls 006af490 FUN_006af490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006af670(int param_1,float param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x110) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x110) + 0x40))();
    if (cVar2 != '\0') {
      FUN_006af490();
    }
  }
  if (_DAT_00890968 < *(float *)(param_1 + 0x88)) {
    fVar1 = *(float *)(param_1 + 0x88) - param_2;
    *(float *)(param_1 + 0x88) = fVar1;
    if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
  }
  if ((_DAT_00890968 < *(float *)(param_1 + 0x10c)) && (*(int *)(param_1 + 0x188) != 0)) {
    if (*(int **)(param_1 + 0x110) != (int *)0x0) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x110) + 8))();
      fVar1 = *(float *)(param_1 + 0x10c) - (_DAT_008aac9c - *(float *)(iVar3 + 0x14)) * param_2;
      if (fVar1 <= _DAT_00890968) {
        fVar1 = _DAT_00890968;
      }
      *(float *)(param_1 + 0x10c) = fVar1;
      return;
    }
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  return;
}

