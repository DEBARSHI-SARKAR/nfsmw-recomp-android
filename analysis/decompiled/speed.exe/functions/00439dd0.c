/* speed.exe 00439dd0 FUN_00439dd0; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 0041c450 FUN_0041c450
 * calls 00434100 FUN_00434100
 */

void __thiscall
FUN_00439dd0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [32];
  undefined1 local_4;
  undefined1 local_3;
  
  local_3c = *param_2;
  local_38 = param_2[1];
  local_34 = param_2[2];
  local_30 = *param_3;
  local_2c = param_3[1];
  local_28 = param_3[2];
  local_4 = param_5;
  local_3 = param_6;
  FUN_00460c70(local_24,param_4);
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = FUN_0041c450(iVar1,*(undefined4 *)(iVar1 + 4),&local_3c);
  FUN_00434100(1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

