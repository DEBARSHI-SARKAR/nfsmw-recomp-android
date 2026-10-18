/* speed.exe 004dde10 FUN_004dde10; analysis pseudocode, not buildable source.
 */

uint FUN_004dde10(float param_1,uint param_2)

{
  int *piVar1;
  
  if (((int)param_2 < DAT_008ef998) && (piVar1 = &DAT_009142d0 + param_2, param_2 = 0, *piVar1 != 0)
     ) {
    if (param_1 < *(float *)(*(int *)(*piVar1 + 0x34) + 0xa4)) {
      return 1;
    }
    return 0;
  }
  return param_2 & 0xffffff00;
}

