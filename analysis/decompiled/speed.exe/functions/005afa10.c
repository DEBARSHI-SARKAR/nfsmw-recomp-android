/* speed.exe 005afa10 FUN_005afa10; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005afa10(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x98);
  uVar1 = *(uint *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x5c) = uVar1 & 0xffffff9d;
  if (*(int *)(param_1 + 0x88) == 0) {
    *(uint *)(param_1 + 0x5c) = uVar1 & 0xffffff95;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(int *)(param_1 + 0x8c) == 0) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xffffffef;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}

