/* speed.exe 0070f230 FUN_0070f230; analysis pseudocode, not buildable source.
 * calls 007053d0 FUN_007053d0
 * calls 004ac0e0 FUN_004ac0e0
 * calls 0070e570 FUN_0070e570
 * calls 005d0370 FUN_005d0370
 */

void FUN_0070f230(void)

{
  int iVar1;
  
  if (DAT_00992234 == 1) {
    if (DAT_00992230 != (undefined4 *)0x0) {
      (**(code **)*DAT_00992230)(1);
    }
    DAT_00992230 = (undefined4 *)0x0;
  }
  else if (DAT_00992234 != 3) goto LAB_0070f272;
  if (DAT_0099222c != (undefined4 *)0x0) {
    (**(code **)*DAT_0099222c)(1);
    DAT_0099222c = (undefined4 *)0x0;
  }
LAB_0070f272:
  if (DAT_00992240 != 0) {
    FUN_004ac0e0(DAT_00992240);
    DAT_00992240 = 0;
  }
  FUN_0070e570();
  FUN_007053d0();
  iVar1 = DAT_00992724;
  if (0 < DAT_00992724) {
    do {
      DAT_00992724 = DAT_00992724 + -1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (DAT_0099271c != 0) {
    (**(code **)(DAT_00992718 + 8))(DAT_0099271c,DAT_00992720);
    DAT_0099271c = 0;
    DAT_00992720 = 0;
    DAT_00992724 = 0;
  }
  if (DAT_00993c4c != 0) {
    FUN_005d0370(DAT_00993c4c,((DAT_00993c54 - DAT_00993c4c) / 0x2c) * 0x2c,0);
  }
  DAT_00993c4c = 0;
  DAT_00993c50 = 0;
  DAT_00993c54 = 0;
  return;
}

