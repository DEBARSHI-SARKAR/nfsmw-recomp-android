/* speed.exe 006fcc7b FUN_006fcc7b; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_006fcc7b(int param_1)

{
  int iVar1;
  int unaff_EBX;
  int unaff_ESI;
  undefined4 in_stack_00000010;
  void *in_stack_00000018;
  
  iVar1 = (**(code **)(param_1 + 4))();
  *(int *)(unaff_ESI + 0x7c) = iVar1;
  if (iVar1 != unaff_EBX) {
    FUN_006fc4b0(iVar1);
  }
  in_stack_00000010 = FUN_005cc240("WorldUpdate");
  iVar1 = FUN_006ed0f0(&stack0x00000010,0x3f800000,unaff_ESI + 8,unaff_EBX,1);
  *(int *)(unaff_ESI + 0x78) = iVar1;
  if (iVar1 != unaff_EBX) {
    *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + 1;
  }
  ExceptionList = in_stack_00000018;
  return;
}

