/* speed.exe 00824a7a FUN_00824a7a; analysis pseudocode, not buildable source.
 */

int FUN_00824a7a(int param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 8) == 0) ||
      (iVar1 = (*(code *)**(undefined4 **)(param_1 + 8))
                         (*(undefined4 **)(param_1 + 8),param_2,param_4,param_3,
                          *(undefined1 *)(param_1 + 0x1a)), 0 < iVar1)) &&
     (iVar1 = param_2, 0 < param_2)) {
    param_3 = param_3 - (int)param_4;
    do {
      *param_4 = *(float *)(param_3 + (int)param_4) * *(float *)(param_1 + 0x1c);
      param_4 = param_4 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}

