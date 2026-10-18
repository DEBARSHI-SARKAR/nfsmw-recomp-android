/* speed.exe 00773650 FUN_00773650; analysis pseudocode, not buildable source.
 * calls 00773170 FUN_00773170
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00773650(undefined4 param_1,float *param_2,float *param_3)

{
  char cVar1;
  
  *(undefined1 *)((int)param_3 + 0x51) = 0;
  cVar1 = FUN_00773170(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    param_3[5] = 0.0;
    param_3[4] = (param_3[0xe] - param_3[10]) * param_3[0xf];
    param_3[6] = -((param_3[0xc] - param_3[8]) * param_3[0xf]);
    param_3[7] = 0.0;
    param_3[0x15] = 0.0;
    *(undefined1 *)(param_3 + 0x14) = 0;
    if ((param_2[2] - param_3[2]) * param_3[6] + (*param_2 - *param_3) * param_3[4] < _DAT_00890968)
    {
      param_3[4] = -param_3[4];
      param_3[6] = -param_3[6];
    }
    *(undefined1 *)((int)param_3 + 0x51) = 2;
  }
  return *(char *)((int)param_3 + 0x51) != '\0';
}

