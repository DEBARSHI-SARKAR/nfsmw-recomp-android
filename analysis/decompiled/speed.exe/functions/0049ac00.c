/* speed.exe 0049ac00 FUN_0049ac00; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0049ac00(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float unaff_ESI;
  undefined4 unaff_retaddr;
  undefined1 local_10 [12];
  float *pfStack_4;
  
  cVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
  if (cVar3 != '\0') {
    if (*(float *)(param_1 + 0x28) == _DAT_00890968) {
      *(undefined1 **)param_2 = local_10;
      *(float *)((int)param_2 + 4) = unaff_ESI;
      return 1;
    }
    cVar3 = (**(code **)(**(int **)(param_1 + 0x24) + 0x20))(unaff_retaddr);
    if (cVar3 != '\0') {
      fVar1 = _DAT_0089096c - *(float *)(param_1 + 0x28);
      *pfStack_4 = (float)local_10 * fVar1 + (float)local_10 * *(float *)(param_1 + 0x28);
      fVar2 = param_2 * fVar1 + unaff_ESI * *(float *)(param_1 + 0x28);
      pfStack_4[1] = fVar2;
      fVar2 = SQRT(fVar2 * fVar2 + *pfStack_4 * *pfStack_4);
      if (fVar2 != _DAT_00890968) {
        fVar2 = (SQRT((float)local_10 * (float)local_10 + unaff_ESI * unaff_ESI) *
                 *(float *)(param_1 + 0x28) +
                SQRT((float)local_10 * (float)local_10 + param_2 * param_2) * fVar1) / fVar2;
        *pfStack_4 = fVar2 * *pfStack_4;
        pfStack_4[1] = fVar2 * pfStack_4[1];
        return 1;
      }
      return 1;
    }
  }
  return 0;
}

