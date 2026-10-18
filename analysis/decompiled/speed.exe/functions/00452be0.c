/* speed.exe 00452be0 FUN_00452be0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00452be0(int *param_1,int *param_2)

{
  short *psVar1;
  
  if (*param_1 != 0) {
    psVar1 = (short *)(*param_1 + 0x12);
    *psVar1 = *psVar1 + -1;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  if (*param_1 != 0) {
    psVar1 = (short *)(*param_1 + 0x12);
    *psVar1 = *psVar1 + 1;
  }
  return;
}

