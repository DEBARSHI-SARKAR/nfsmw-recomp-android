/* speed.exe 006bef90 FUN_006bef90; analysis pseudocode, not buildable source.
 * calls 006beeb0 FUN_006beeb0
 */

void __thiscall FUN_006bef90(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_006beeb0(param_2);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  return;
}

