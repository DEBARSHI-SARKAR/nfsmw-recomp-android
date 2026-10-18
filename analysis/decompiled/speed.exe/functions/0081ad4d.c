/* speed.exe 0081ad4d FUN_0081ad4d; analysis pseudocode, not buildable source.
 * calls 00862ab1 FUN_00862ab1
 * calls 00862ae7 FUN_00862ae7
 * calls 0081ab36 FUN_0081ab36
 * calls 00862af0 FUN_00862af0
 * calls 0081eae9 FUN_0081eae9
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081ba76 FUN_0081ba76
 * calls 0081f9be FUN_0081f9be
 * calls 0081f9b6 FUN_0081f9b6
 * calls 00862ad5 FUN_00862ad5
 */

void FUN_0081ad4d(void)

{
  int iVar1;
  
  if (DAT_009c1ac8 == '\0') {
    iVar1 = FUN_00862ab1(DAT_009c1ad8);
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        return;
      }
      FUN_00862ad5(DAT_009c1ad8);
      DAT_009c1ac0 = 0xed;
      FUN_0081bccb();
      FUN_0081eae9(DAT_009c1af0);
      if (DAT_009c1aec != 0) {
        FUN_0081eae9(DAT_009c1aec);
      }
      FUN_0081bcd9();
      FUN_0081ba76(FUN_0081ad4d);
      DAT_009c1bf3 = 0;
      return;
    }
    DAT_009c1ae4 = FUN_00862ad5(DAT_009c1ad8);
    DAT_009c1ad8 = FUN_00862af0(DAT_009c1ae4,DAT_009c1adc,DAT_009c1af4,0x5c,DAT_009c1ad0,0);
    DAT_009c1ac8 = '\x01';
LAB_0081adcb:
    iVar1 = FUN_00862ab1(DAT_009c1ad8);
    if (iVar1 != 1) {
      return;
    }
    FUN_00862ad5(DAT_009c1ad8);
    DAT_009c1ab8 = DAT_009c1af4;
    iVar1 = (*DAT_009c1ae0)(*(undefined4 *)(DAT_009c1af4 + 0x18));
    DAT_009c1ad8 = FUN_00862af0(DAT_009c1ae4,DAT_009c1adc,iVar1,*(undefined4 *)(DAT_009c1ab8 + 0x18)
                                ,DAT_009c1ad0,0);
    DAT_009c1ac8 = '\x02';
    DAT_009c1ab8 = iVar1;
LAB_0081ae3e:
    iVar1 = FUN_00862ab1(DAT_009c1ad8);
    if (iVar1 != 1) {
      return;
    }
    FUN_00862ad5(DAT_009c1ad8);
    DAT_009c1ac8 = '\x03';
LAB_0081ae6c:
    if (*(int *)(DAT_009c1ab8 + 0x20) == 0) {
      DAT_009c1ac8 = '\x05';
      goto LAB_0081aeb6;
    }
    DAT_009c1abc = FUN_0081f9b6(DAT_009c1af0,*(int *)(DAT_009c1ab8 + 0x20) + DAT_009c1adc,
                                DAT_009c1af4,DAT_009c1ac4,DAT_009c1ae0);
    DAT_009c1ac8 = '\x04';
LAB_0081aeba:
    iVar1 = FUN_0081f9be();
    if (iVar1 < 1) {
      return;
    }
    DAT_009c1ac8 = '\x05';
LAB_0081aed4:
    if (*(int *)(DAT_009c1ab8 + 0x28) == 0) {
      DAT_009c1ac8 = '\a';
      goto LAB_0081af1e;
    }
    DAT_009c1acc = FUN_0081f9b6(DAT_009c1af0,*(int *)(DAT_009c1ab8 + 0x28) + DAT_009c1adc,
                                DAT_009c1af4,DAT_009c1ac4,DAT_009c1ae0);
    DAT_009c1ac8 = '\x06';
LAB_0081af22:
    iVar1 = FUN_0081f9be();
    if (iVar1 < 1) {
      return;
    }
    DAT_009c1ac8 = '\a';
  }
  else {
    if (DAT_009c1ac8 == '\x01') goto LAB_0081adcb;
    if (DAT_009c1ac8 == '\x02') goto LAB_0081ae3e;
    if (DAT_009c1ac8 == '\x03') goto LAB_0081ae6c;
LAB_0081aeb6:
    if (DAT_009c1ac8 == '\x04') goto LAB_0081aeba;
    if (DAT_009c1ac8 == '\x05') goto LAB_0081aed4;
LAB_0081af1e:
    if (DAT_009c1ac8 == '\x06') goto LAB_0081af22;
    if (DAT_009c1ac8 != '\a') goto LAB_0081af79;
  }
  DAT_009c1ad8 = FUN_00862af0(DAT_009c1ae4,*(int *)(DAT_009c1ab8 + 0x30) + DAT_009c1adc,DAT_009c1af4
                              ,*(int *)(DAT_009c1ab8 + 0x14) - *(int *)(DAT_009c1ab8 + 0x30),
                              DAT_009c1ad0,0);
  DAT_009c1ac8 = '\b';
LAB_0081af79:
  if (DAT_009c1ac8 == '\b') {
    iVar1 = FUN_00862ab1(DAT_009c1ad8);
    if (iVar1 != 1) {
      return;
    }
    FUN_00862ad5(DAT_009c1ad8);
    DAT_009c1ad8 = FUN_00862ae7(DAT_009c1ae4,DAT_009c1ad0,0);
    FUN_0081bccb();
    FUN_0081ab36(DAT_009c1ab8,DAT_009c1af4,DAT_009c1aec,DAT_009c1ad4);
    *(undefined4 *)(DAT_009c1ab8 + 0x40) = DAT_009c1abc;
    *(undefined4 *)(DAT_009c1ab8 + 0x44) = DAT_009c1acc;
    *(undefined4 *)(DAT_009c1ab8 + 0x3c) = DAT_009c1ae8;
    FUN_0081eae9(DAT_009c1af0);
    if (DAT_009c1aec != 0) {
      FUN_0081eae9(DAT_009c1aec);
    }
    FUN_0081bcd9();
    DAT_009c1ac8 = '\t';
  }
  else if (DAT_009c1ac8 != '\t') {
    return;
  }
  iVar1 = FUN_00862ab1(DAT_009c1ad8);
  if (iVar1 == 1) {
    FUN_00862ad5(DAT_009c1ad8);
    FUN_0081ba76(FUN_0081ad4d);
    DAT_009c1bf3 = 0;
  }
  return;
}

