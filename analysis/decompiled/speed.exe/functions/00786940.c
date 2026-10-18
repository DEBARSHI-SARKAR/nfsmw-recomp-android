/* speed.exe 00786940 FUN_00786940; analysis pseudocode, not buildable source.
 * calls 00784ec0 FUN_00784ec0
 */

int * __thiscall FUN_00786940(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    iVar1 = FUN_00784ec0(param_2);
    param_1[1] = iVar1;
    param_1[2] = iVar1 + 0x40;
    param_1[3] = iVar1 + 0x50;
  }
  DAT_009b391c = DAT_009b391c + 1;
  return param_1;
}

