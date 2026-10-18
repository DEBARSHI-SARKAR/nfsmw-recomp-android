/* speed.exe 00560940 FUN_00560940; analysis pseudocode, not buildable source.
 * calls 00527940 FUN_00527940
 * calls 00559e90 FUN_00559e90
 */

void __fastcall FUN_00560940(int param_1)

{
  if ((((byte)DAT_0091cbac & 0xf0) != 0xb0) && (*(int *)(param_1 + 0xcc) == 0)) {
    FUN_00527940(0,0,0x91,0,0,0,0);
    return;
  }
  FUN_00559e90();
  return;
}

