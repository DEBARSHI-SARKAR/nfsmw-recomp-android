/* speed.exe 005b44c0 FUN_005b44c0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

void FUN_005b44c0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0xac);
  uVar2 = *(undefined4 *)(param_1 + 0xb0);
  uVar3 = *(undefined4 *)(param_1 + 0xb4);
  uVar4 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  return;
}

