/* speed.exe 0078c500 FUN_0078c500; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 * calls 00460c70 FUN_00460c70
 * calls 0056e340 FUN_0056e340
 * calls 0085ccb0 FUN_0085ccb0
 */

void __thiscall FUN_0078c500(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  local_88 = *(undefined4 *)(param_2 + 0x14);
  local_84 = *(undefined4 *)(param_2 + 0x18);
  FUN_00460c70(local_80,param_2 + 0x1c);
  FUN_00460c70(local_40,param_2 + 4);
  uVar1 = FUN_0056e340();
  iVar2 = FUN_00460d20(local_40,uVar1);
  if (iVar2 != 0) {
    FUN_0085ccb0(*param_1,&local_88);
  }
  return;
}

