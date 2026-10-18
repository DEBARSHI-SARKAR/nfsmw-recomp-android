/* speed.exe 00662b80 FUN_00662b80; analysis pseudocode, not buildable source.
 * calls 0065fd30 FUN_0065fd30
 * calls 00460c70 FUN_00460c70
 * calls 00516e10 FUN_00516e10
 * calls 006616f0 FUN_006616f0
 * calls 00516e40 FUN_00516e40
 * calls 00461970 FUN_00461970
 */

void FUN_00662b80(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_80 [128];
  
  FUN_00516e10();
  uVar1 = FUN_00516e40();
  FUN_00460c70(local_80,uVar1);
  uVar1 = FUN_0065fd30(local_80,2,0,0,0);
  iVar2 = FUN_00516e10();
  *(undefined4 *)(iVar2 + 0x20) = uVar1;
  iVar2 = FUN_00516e10();
  iVar2 = *(int *)(iVar2 + 0x20);
  *(undefined4 *)(iVar2 + 0x28) = 0x2007;
  uVar1 = FUN_00461970(local_80);
  *(undefined4 *)(iVar2 + 0x24) = uVar1;
  FUN_00516e10();
  FUN_006616f0(param_1,param_2);
  return;
}

