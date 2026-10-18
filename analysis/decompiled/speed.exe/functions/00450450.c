/* speed.exe 00450450 FUN_00450450; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00450450(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x24;
  *(int *)iVar1 = iVar1;
  *(int *)(param_1 + 0x28) = iVar1;
  iVar1 = param_1 + 0x2c;
  *(int *)iVar1 = iVar1;
  *(int *)(param_1 + 0x30) = iVar1;
  iVar1 = param_1 + 0x34;
  *(int *)iVar1 = iVar1;
  *(int *)(param_1 + 0x38) = iVar1;
  iVar1 = param_1 + 0x3c;
  *(int *)iVar1 = iVar1;
  *(int *)(param_1 + 0x40) = iVar1;
  iVar1 = param_1 + 0x44;
  *(int *)iVar1 = iVar1;
  *(int *)(param_1 + 0x48) = iVar1;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

