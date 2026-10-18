/* speed.exe 00516be0 FUN_00516be0; analysis pseudocode, not buildable source.
 * calls 005b7780 FUN_005b7780
 * calls 00516af0 FUN_00516af0
 */

void __thiscall
FUN_00516be0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_3 == 0) {
    if (*param_1 != -0xd8) {
      for (iVar1 = *(int *)(*param_1 + 0xe0); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        FUN_005b7780(param_2,0,iVar1,param_4,0);
      }
    }
  }
  else {
    iVar1 = FUN_00516af0(param_3);
    if (iVar1 != 0) {
      FUN_005b7780(param_2,0,iVar1,param_4,param_5);
      return;
    }
  }
  return;
}

