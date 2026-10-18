/* speed.exe 005aebf0 FUN_005aebf0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

void FUN_005aebf0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = FUN_007c4b80();
  *param_5 = iVar1 + *param_4 + iVar2;
  iVar2 = FUN_007c4b80();
  param_5[1] = iVar2 + param_4[1] + param_1[1];
  iVar2 = FUN_007c4b80();
  param_5[2] = iVar2 + param_4[2] + param_1[2];
  iVar2 = param_1[3];
  iVar1 = FUN_007c4b80();
  param_5[3] = iVar1 + param_4[3] + iVar2;
  return;
}

