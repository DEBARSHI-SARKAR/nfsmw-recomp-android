/* speed.exe 00517dc0 FUN_00517dc0; analysis pseudocode, not buildable source.
 * calls 00660270 FUN_00660270
 */

void FUN_00517dc0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00660270(*param_1,0x20,9);
  *param_1 = uVar1;
  uVar1 = FUN_00660270(param_1[1],0x10,9);
  param_1[1] = uVar1;
  uVar1 = FUN_00660270(param_1[2],0x20,9);
  param_1[2] = uVar1;
  uVar1 = FUN_00660270(param_1[3],0x20,9);
  param_1[3] = uVar1;
  uVar1 = FUN_00660270(param_1[4],0x20,9);
  param_1[4] = uVar1;
  iVar2 = FUN_00660270(*(undefined1 *)(param_1 + 5),1,9);
  *(bool *)(param_1 + 5) = iVar2 != 0;
  iVar2 = FUN_00660270(*(undefined1 *)((int)param_1 + 0x15),1,9);
  *(bool *)((int)param_1 + 0x15) = iVar2 != 0;
  return;
}

