/* speed.exe 0054f5d0 FUN_0054f5d0; analysis pseudocode, not buildable source.
 * calls 00527940 FUN_00527940
 * calls 00544510 FUN_00544510
 */

void __fastcall FUN_0054f5d0(int param_1)

{
  if ((((byte)DAT_0091cbac & 0xf0) != 0xb0) && (*(int *)(param_1 + 0xcc) == 0)) {
    FUN_00527940(0,0,0xd1,0,0,0,0);
    return;
  }
  FUN_00544510();
  return;
}

