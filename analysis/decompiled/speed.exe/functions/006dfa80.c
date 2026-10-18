/* speed.exe 006dfa80 FUN_006dfa80; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000d5 DestroyWindow
 * calls 006c5d20 FUN_006c5d20
 * calls 006de040 FUN_006de040
 * calls 006bd620 FUN_006bd620
 * calls 00661210 FUN_00661210
 * calls 006c3360 FUN_006c3360
 * calls 006ddca0 FUN_006ddca0
 */

void FUN_006dfa80(void)

{
  int *piVar1;
  int *piVar2;
  
  DestroyWindow(DAT_00982bf4);
  FUN_006c5d20();
  FUN_006de040();
  FUN_006ddca0();
  FUN_006bd620();
  FUN_006c3360();
  piVar2 = &DAT_0093e03c;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
  } while ((int)piVar2 < 0x93e04c);
  (**(code **)(*DAT_00982bdc + 8))(DAT_00982bdc);
  (**(code **)(*DAT_00982bd8 + 8))(DAT_00982bd8);
  FUN_00661210();
  return;
}

