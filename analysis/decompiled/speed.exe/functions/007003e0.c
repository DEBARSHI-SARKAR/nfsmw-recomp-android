/* speed.exe 007003e0 FUN_007003e0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007003e0(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 unaff_EBP;
  
  uVar1 = (**(code **)(*param_2 + 0x34))();
  uVar2 = (**(code **)(*param_2 + 0x38))();
  (**(code **)(*param_2 + 0x30))();
  (**(code **)(*param_2 + 0x44))(*(undefined4 *)(param_1 + 0xc));
  (**(code **)(*param_2 + 0x3c))(*(undefined4 *)(param_1 + 0x14));
  (**(code **)(*param_2 + 0x40))(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = unaff_EBP;
  return;
}

