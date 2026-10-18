/* speed.exe 00504d00 FUN_00504d00; analysis pseudocode, not buildable source.
 * calls 005030d0 FUN_005030d0
 * calls 00725560 FUN_00725560
 * calls 004fc800 FUN_004fc800
 * calls 00725570 FUN_00725570
 * calls 0072aa70 FUN_0072aa70
 */

void FUN_00504d00(void)

{
  int iVar1;
  
  FUN_005030d0();
  FUN_0072aa70();
  FUN_004fc800();
  iVar1 = FUN_00725570();
  if (iVar1 != 0) {
    FUN_00725560();
    return;
  }
  return;
}

