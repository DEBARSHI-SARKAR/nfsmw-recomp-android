/* speed.exe 004481a0 FUN_004481a0; analysis pseudocode, not buildable source.
 * calls 0049fcf0 FUN_0049fcf0
 */

void __fastcall FUN_004481a0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 100);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x18))(uVar2,uVar3,0);
  }
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x18))(uVar2,uVar3,0);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x18))(uVar2,uVar3,0);
  }
  FUN_0049fcf0(uVar3,uVar1,0);
  return;
}

