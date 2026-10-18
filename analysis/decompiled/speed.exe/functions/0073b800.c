/* speed.exe 0073b800 FUN_0073b800; analysis pseudocode, not buildable source.
 * calls 0073b790 FUN_0073b790
 */

int * __thiscall FUN_0073b800(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    *param_1 = *(int *)(param_2 + 0xc) + 0x20;
    iVar1 = *(int *)(param_2 + 0xc);
    param_1[2] = param_3 + 0x70;
    param_1[1] = iVar1 + 0x30;
    FUN_0073b790(0x3f800000);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}

