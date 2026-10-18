/* speed.exe 006eeb10 FUN_006eeb10; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006eeb10(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    if ((char)piVar1[3] != '\x01') {
      *(undefined1 *)(piVar1 + 3) = 1;
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}

