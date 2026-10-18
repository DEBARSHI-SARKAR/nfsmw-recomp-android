/* speed.exe 006eec20 FUN_006eec20; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006eec20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x20];
  if (piVar1 != (int *)0x0) {
    param_1[10] = param_1[10] + -1;
    if ((char)piVar1[3] != '\x01') {
      *(undefined1 *)(piVar1 + 3) = 1;
      (**(code **)(*piVar1 + 4))();
    }
    param_1[0x20] = 0;
    (**(code **)(*param_1 + 0x18))();
    *(undefined1 *)(param_1 + 0x1a) = 0;
    param_1[0x19] = 0;
  }
  return;
}

