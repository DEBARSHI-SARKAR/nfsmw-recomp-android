/* speed.exe 00722c40 FUN_00722c40; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

void __thiscall FUN_00722c40(int param_1,int param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_007c4b80();
  *(undefined2 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_007c4b80();
  *(undefined2 *)(param_1 + 0x2e) = uVar1;
  uVar1 = FUN_007c4b80();
  *(undefined2 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_007c4b80();
  *(undefined2 *)(param_1 + 0x32) = uVar1;
  uVar1 = FUN_007c4b80();
  *(undefined2 *)(param_1 + 0x34) = uVar1;
  uVar1 = FUN_007c4b80();
  *(undefined2 *)(param_1 + 0x36) = uVar1;
  uVar1 = FUN_007c4b80();
  *(undefined2 *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_007c4b80();
  *(undefined2 *)(param_1 + 0x3a) = uVar1;
  uVar1 = FUN_007c4b80();
  *(undefined2 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x38);
  return;
}

