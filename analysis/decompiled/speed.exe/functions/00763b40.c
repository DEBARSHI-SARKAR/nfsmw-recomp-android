/* speed.exe 00763b40 FUN_00763b40; analysis pseudocode, not buildable source.
 * calls 005c8cc0 FUN_005c8cc0
 * calls 00486610 FUN_00486610
 */

void FUN_00763b40(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_40 [16];
  
  puVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_005c8cc0(local_40);
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  FUN_00486610(param_2,local_40,param_1);
  FUN_00486610(param_2 + 0x10,local_40,param_1 + 0x10);
  FUN_00486610(param_2 + 0x20,local_40,param_1 + 0x20);
  return;
}

