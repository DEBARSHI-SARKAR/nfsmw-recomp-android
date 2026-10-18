/* speed.exe 006eec90 FUN_006eec90; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006eec90(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x4c);
  if (piVar1 != (int *)0x0) {
    *(int *)(param_1 + -0xc) = *(int *)(param_1 + -0xc) + -1;
    if ((char)piVar1[3] != '\x01') {
      *(undefined1 *)(piVar1 + 3) = 1;
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    (**(code **)(*(int *)(param_1 + -0x34) + 0x18))();
    *(undefined1 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*(int *)(param_1 + -8) + 8))(*(int *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

