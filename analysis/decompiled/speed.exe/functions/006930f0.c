/* speed.exe 006930f0 FUN_006930f0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006930f0(int param_1,float param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  cVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 0x20))();
  if (((cVar2 == '\0') && (iVar3 = (**(code **)(**(int **)(param_1 + 0x48) + 0x58))(), iVar3 == 0))
     && ((piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x20))(), piVar4 == (int *)0x0
         || (cVar2 = (**(code **)(*piVar4 + 0x40))(), cVar2 == '\0')))) {
    cVar2 = (**(code **)(*(int *)(param_1 + 0x78) + 4))();
    if ((cVar2 == '\0') &&
       ((iVar3 = (**(code **)(*(int *)(param_1 + 0x4c) + 4))(), iVar3 != 2 ||
        (*(float *)(param_1 + 0x1c4) <= _DAT_00890968)))) {
      fVar1 = _DAT_008aae40;
      if (_DAT_00890968 < *(float *)(param_1 + 0x1c8)) {
        fVar1 = _DAT_00899d6c;
      }
      fVar1 = fVar1 * param_2 + *(float *)(param_1 + 0x1cc);
      if (fVar1 < _DAT_00890968) {
        fVar1 = _DAT_00890968;
      }
      *(float *)(param_1 + 0x1cc) = fVar1;
      if ((_DAT_0089096c <= fVar1) &&
         (cVar2 = (**(code **)(*(int *)(param_1 + 0x78) + 8))(), cVar2 != '\0')) {
        *(undefined4 *)(param_1 + 0x1cc) = 0x3f800000;
      }
    }
  }
  return;
}

