/* speed.exe 00829230 FUN_00829230; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00829230(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 300) == 0) {
    return 0xffffffd9;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 300) + 0x18))(param_2);
  return uVar1;
}

