/* speed.exe 00819c07 FUN_00819c07; analysis pseudocode, not buildable source.
 * calls 00819be2 FUN_00819be2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00819c07(ushort *param_1)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  ushort *extraout_EDX;
  ushort *extraout_EDX_00;
  int *piVar4;
  
  piVar4 = (int *)((uint)*param_1 + (int)param_1);
  iVar2 = *piVar4;
  if ((iVar2 == 1) && ((char)param_1[1] == '\0')) {
    *(undefined1 *)((int)param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + 10);
  }
  else {
    if ((iVar2 != 3) ||
       (((char)param_1[1] == '\x03' ||
        ((short)param_1[9] <= (short)(ushort)*(byte *)((int)param_1 + 3))))) {
      if ((iVar2 == 1) || (iVar2 == 3)) {
        bVar1 = *(byte *)((int)param_1 + 3);
        if ((byte)param_1[8] <= bVar1) goto LAB_00819ca4;
        fVar3 = *(float *)(param_1 + 2) - _DAT_009c1b54;
        *(float *)(param_1 + 2) = fVar3;
        if (fVar3 < _DAT_00890968 != (fVar3 == _DAT_00890968)) {
          *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + (uint)bVar1 * 4 + 0xe);
          *(byte *)((int)param_1 + 3) = bVar1 + 1;
          if ((byte)(bVar1 + 1) < (byte)param_1[8]) {
            FUN_00819be2(param_1);
            param_1 = extraout_EDX_00;
            goto LAB_00819caf;
          }
          goto LAB_00819ca9;
        }
        fVar3 = *(float *)(param_1 + 4) + *(float *)(param_1 + 6);
      }
      else {
LAB_00819ca4:
        if (iVar2 == 2) goto LAB_00819caf;
LAB_00819ca9:
        fVar3 = 0.0;
      }
      *(float *)(param_1 + 6) = fVar3;
      goto LAB_00819caf;
    }
    *(char *)((int)param_1 + 3) = (char)param_1[9];
  }
  FUN_00819be2(param_1);
  param_1 = extraout_EDX;
LAB_00819caf:
  *(char *)(param_1 + 1) = (char)*piVar4;
  return (int)ROUND(*(float *)(param_1 + 6));
}

