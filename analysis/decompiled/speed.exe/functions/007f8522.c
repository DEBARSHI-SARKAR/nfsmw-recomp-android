/* speed.exe 007f8522 FUN_007f8522; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_007f8522(int *param_1,uint param_2)

{
  int iVar1;
  
  if ((uint)param_1[1] < param_2) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_2 * 0x34 + *param_1;
  }
  return iVar1;
}

