/* speed.exe 006863b0 FUN_006863b0; analysis pseudocode, not buildable source.
 * calls 00685240 FUN_00685240
 */

void __fastcall FUN_006863b0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 0x2c) + 0x54))();
  iVar2 = (**(code **)(*piVar1 + 0x20))();
  uStack_44 = *(undefined4 *)(iVar2 + 8);
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 0x2c) + 0x54))();
  (**(code **)(*piVar1 + 0x40))(auStack_40);
  FUN_00685240(&stack0xffffffb0,&uStack_44);
  return;
}

