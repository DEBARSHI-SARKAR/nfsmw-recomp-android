/* speed.exe 006f7070 FUN_006f7070; analysis pseudocode, not buildable source.
 * calls 006f4020 FUN_006f4020
 */

void __fastcall FUN_006f7070(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 100))();
  piVar1 = (int *)param_1[0x13];
  if (piVar1 != (int *)0x0) {
    param_1[-3] = param_1[-3] + -1;
    if ((char)piVar1[3] != '\x01') {
      *(undefined1 *)(piVar1 + 3) = 1;
      (**(code **)(*piVar1 + 4))();
    }
    param_1[0x13] = 0;
    (**(code **)(param_1[-0xd] + 0x18))();
    *(undefined1 *)(param_1 + 0xd) = 0;
    param_1[0xc] = 0;
  }
  if (param_1[10] != 0) {
    (**(code **)(param_1[-2] + 8))(param_1[10]);
    param_1[10] = 0;
  }
  *(undefined1 *)(param_1 + 5) = 1;
  FUN_006f4020(param_1 + -0xd);
  return;
}

