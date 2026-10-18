/* speed.exe 005fa520 FUN_005fa520; analysis pseudocode, not buildable source.
 * calls 005fa270 FUN_005fa270
 */

void __fastcall FUN_005fa520(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1;
    piVar1[1] = (int)(piVar1 + 0x14);
    piVar1[2] = 0;
    piVar1[8] = 0;
    piVar1[0xe] = 0;
    piVar1[3] = 0;
    piVar1[9] = 0;
    piVar1[0xf] = 0;
    piVar1[4] = 0;
    piVar1[10] = 0;
    piVar1[0x10] = 0;
    piVar1[5] = 0;
    piVar1[0xb] = 0;
    piVar1[0x11] = 0;
    piVar1[6] = 0;
    piVar1[0xc] = 0;
    piVar1[0x12] = 0;
    piVar1[7] = 0;
    piVar1[0xd] = 0;
    piVar1[0x13] = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x3c);
  FUN_005fa270(*(undefined4 *)(param_1 + 0x30));
  return;
}

