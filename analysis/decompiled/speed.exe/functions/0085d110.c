/* speed.exe 0085d110 FUN_0085d110; analysis pseudocode, not buildable source.
 * calls 0085c950 FUN_0085c950
 * calls 0085bc10 FUN_0085bc10
 * calls 0085ca00 FUN_0085ca00
 */

void FUN_0085d110(int param_1)

{
  if (*(int *)(param_1 + 0x180) == 1) {
    FUN_0085bc10();
    FUN_0085ca00();
    FUN_0085c950();
  }
  return;
}

