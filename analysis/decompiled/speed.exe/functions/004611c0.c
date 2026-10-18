/* speed.exe 004611c0 FUN_004611c0; analysis pseudocode, not buildable source.
 */

void FUN_004611c0(short *param_1,char *param_2)

{
  short sVar1;
  
  sVar1 = (short)*param_2;
  *param_1 = sVar1;
  while (sVar1 != 0) {
    sVar1 = (short)param_2[1];
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    *param_1 = sVar1;
  }
  return;
}

