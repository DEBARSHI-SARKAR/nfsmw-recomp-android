/* speed.exe 007ed14a FUN_007ed14a; analysis pseudocode, not buildable source.
 */

void FUN_007ed14a(int param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x80) + 0x24))
                    (*(undefined4 *)(param_1 + 8));
  *param_2 = uVar1;
  *param_3 = *(undefined4 *)(param_1 + 0x10);
  param_3[1] = *(undefined4 *)(param_1 + 0x14);
  return;
}

