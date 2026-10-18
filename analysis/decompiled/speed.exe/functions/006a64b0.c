/* speed.exe 006a64b0 FUN_006a64b0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006a64b0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  *param_1 = 0;
  uVar2 = 0;
  do {
    if ((&DAT_009384b0)[uVar2] == 0) {
      piVar1 = &DAT_009384b0 + uVar2;
      if (DAT_0093839c == 0) {
        *piVar1 = (int)(&DAT_0093b2d0 + uVar2 * 0x40);
        *param_1 = piVar1;
        return;
      }
      *piVar1 = uVar2 * 0x40 + DAT_0093839c;
      *param_1 = piVar1;
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x60);
  *param_1 = 0;
  return;
}

