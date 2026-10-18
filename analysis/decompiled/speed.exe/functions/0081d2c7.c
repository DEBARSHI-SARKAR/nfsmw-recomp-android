/* speed.exe 0081d2c7 FUN_0081d2c7; analysis pseudocode, not buildable source.
 * calls 0081ab36 FUN_0081ab36
 * calls 00822352 FUN_00822352
 * calls 0081eae9 FUN_0081eae9
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081ba76 FUN_0081ba76
 * calls 0081bccb FUN_0081bccb
 * calls 008221d3 FUN_008221d3
 * calls 0082234d thunk_FUN_008222a1
 * calls 0082221f FUN_0082221f
 */

void FUN_0081d2c7(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_009c1c24 == '\0') {
    if (DAT_009c1c38 < 0) {
      if (*(int *)(DAT_009c1c30 + 0x20) == 0) {
        DAT_009c1c24 = '\x01';
      }
      else {
        thunk_FUN_008222a1(&DAT_009c1c38,*(int *)(DAT_009c1c30 + 0x20) + DAT_009c1c20);
      }
      goto LAB_0081d304;
    }
LAB_0081d314:
    iVar1 = FUN_00822352();
    if (iVar1 < 1) {
      return;
    }
    uVar2 = FUN_0082221f(DAT_009c1c38);
    uVar2 = (*DAT_009c1c1c)(uVar2);
    FUN_008221d3(uVar2,DAT_009c1c38);
    DAT_009c1c24 = '\x01';
  }
  else {
LAB_0081d304:
    if ((-1 < DAT_009c1c38) && (DAT_009c1c24 == '\0')) goto LAB_0081d314;
  }
  if (DAT_009c1c2c == '\0') {
    if (DAT_009c1c28 < 0) {
      if (*(int *)(DAT_009c1c30 + 0x28) == 0) {
        DAT_009c1c2c = '\x01';
      }
      else {
        thunk_FUN_008222a1(&DAT_009c1c28,*(int *)(DAT_009c1c30 + 0x28) + DAT_009c1c20);
      }
      goto LAB_0081d383;
    }
  }
  else {
LAB_0081d383:
    if (DAT_009c1c28 < 0) {
      if (DAT_009c1c2c == '\0') {
        return;
      }
      goto LAB_0081d3d2;
    }
    if (DAT_009c1c2c != '\0') goto LAB_0081d3d2;
  }
  iVar1 = FUN_00822352();
  if (iVar1 < 1) {
    return;
  }
  uVar2 = FUN_0082221f(DAT_009c1c28);
  uVar2 = (*DAT_009c1c1c)(uVar2);
  FUN_008221d3(uVar2,DAT_009c1c28);
  DAT_009c1c2c = '\x01';
LAB_0081d3d2:
  FUN_0081ba76(FUN_0081d2c7);
  FUN_0081bccb();
  FUN_0081ab36(DAT_009c1c30,*(int *)(DAT_009c1c30 + 0x30) + DAT_009c1c20,DAT_009c1c34,DAT_009c1c18);
  *(int *)(DAT_009c1c30 + 0x40) = DAT_009c1c38;
  *(int *)(DAT_009c1c30 + 0x44) = DAT_009c1c28;
  if (DAT_009c1c34 != 0) {
    FUN_0081eae9(DAT_009c1c34);
  }
  DAT_009c1bf3 = 0;
  FUN_0081bcd9();
  return;
}

