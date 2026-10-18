/* speed.exe 004b3210 FUN_004b3210; analysis pseudocode, not buildable source.
 */

int FUN_004b3210(int *param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (param_1 = (int *)*param_1, *param_1 == 0x4d525453)) {
    if ((param_1[9] <= (int)(param_2 & 0xff)) ||
       ((iVar1 = (param_2 & 0xff) * 0x128, param_2 != *(uint *)(iVar1 + param_1[8]) ||
        (iVar1 = *(int *)(iVar1 + param_1[8] + 4), iVar1 == 0)))) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}

