/* speed.exe 006547a0 FUN_006547a0; analysis pseudocode, not buildable source.
 * calls 00654710 FUN_00654710
 * calls 006541b0 FUN_006541b0
 */

void __thiscall FUN_006547a0(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (iVar1 != 0x7fffffff)) {
    if (iVar1 < 0) {
      *param_1 = -iVar1;
      FUN_00654710(&local_4,&local_8,&local_c,&local_10);
      *param_1 = iVar1;
    }
    else {
      FUN_00654710(&local_4,&local_8,&local_c,&local_10);
    }
    if (*param_1 < 0) {
      param_3 = param_3 | 1;
    }
    FUN_006541b0(param_2,param_3,local_4,local_8,local_c,local_10 / 10);
    return;
  }
  FUN_006541b0(param_2,param_3,0,0,0,0);
  return;
}

