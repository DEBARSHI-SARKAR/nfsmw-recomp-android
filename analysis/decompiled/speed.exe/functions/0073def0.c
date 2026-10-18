/* speed.exe 0073def0 FUN_0073def0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0073def0(int param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  
  piVar1 = *(int **)(param_1 + 0x1cc);
  if ((param_2 == _DAT_00890968) &&
     (param_2 = *(float *)(*(int *)(*piVar1 + 8) + 0x44), param_2 == _DAT_00890968)) {
    return;
  }
  fVar2 = (float)DAT_00925b14;
  *(undefined1 *)(piVar1 + 3) = 0;
  *(undefined1 *)((int)piVar1 + 0xd) = 0;
  fVar2 = fVar2 * _DAT_00890984;
  *(undefined1 *)((int)piVar1 + 0xe) = 1;
  piVar1[1] = (int)fVar2;
  piVar1[2] = (int)param_2;
  return;
}

