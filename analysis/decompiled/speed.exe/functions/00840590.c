/* speed.exe 00840590 FUN_00840590; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00840590(int param_1,uint param_2)

{
  int *piVar1;
  
  param_2 = param_2 & 0xffffefff;
  if (((-1 < (int)param_2) && ((int)param_2 < 0x20)) &&
     (piVar1 = (int *)(param_1 + 0x18a0 + param_2 * 0xc), *piVar1 != -1)) {
    *piVar1 = -1;
    return 1;
  }
  return 0;
}

