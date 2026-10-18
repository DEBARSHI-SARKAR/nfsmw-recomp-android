/* speed.exe 006bd620 FUN_006bd620; analysis pseudocode, not buildable source.
 * calls 006c3a40 FUN_006c3a40
 */

void FUN_006bd620(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  FUN_006c3a40();
  iVar2 = 0;
  do {
    (&DAT_0093dab8)[iVar2 * 7] = iVar2;
    if (iVar2 == 0) {
      (**(code **)(*DAT_0093dac4 + 8))(DAT_0093dac4);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xb);
  piVar3 = &DAT_00982a4c;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x982a64);
  if (DAT_00982a30 != (int *)0x0) {
    (**(code **)(*DAT_00982a30 + 8))(DAT_00982a30);
    DAT_00982a30 = (int *)0x0;
  }
  if (DAT_00982a24 != (int *)0x0) {
    (**(code **)(*DAT_00982a24 + 8))(DAT_00982a24);
    DAT_00982a24 = (int *)0x0;
  }
  if (DAT_00982a28 != (int *)0x0) {
    (**(code **)(*DAT_00982a28 + 8))(DAT_00982a28);
    DAT_00982a28 = (int *)0x0;
  }
  if (DAT_00982a2c != (int *)0x0) {
    (**(code **)(*DAT_00982a2c + 8))(DAT_00982a2c);
    DAT_00982a2c = (int *)0x0;
  }
  if (DAT_00982a78 != (int *)0x0) {
    (**(code **)(*DAT_00982a78 + 8))(DAT_00982a78);
    DAT_00982a78 = (int *)0x0;
  }
  if (DAT_00982a68 != (int *)0x0) {
    (**(code **)(*DAT_00982a68 + 8))(DAT_00982a68);
    DAT_00982a68 = (int *)0x0;
  }
  if (DAT_00982a6c != (int *)0x0) {
    (**(code **)(*DAT_00982a6c + 8))(DAT_00982a6c);
    DAT_00982a6c = (int *)0x0;
  }
  if (DAT_00982a70 != (int *)0x0) {
    (**(code **)(*DAT_00982a70 + 8))(DAT_00982a70);
    DAT_00982a70 = (int *)0x0;
  }
  if (DAT_00982a74 != (int *)0x0) {
    (**(code **)(*DAT_00982a74 + 8))(DAT_00982a74);
    DAT_00982a74 = (int *)0x0;
  }
  if (DAT_00982a84 != (int *)0x0) {
    (**(code **)(*DAT_00982a84 + 8))(DAT_00982a84);
    DAT_00982a84 = (int *)0x0;
  }
  if (DAT_00982a80 != (int *)0x0) {
    (**(code **)(*DAT_00982a80 + 8))(DAT_00982a80);
    DAT_00982a80 = (int *)0x0;
  }
  if (DAT_00982a7c != (int *)0x0) {
    (**(code **)(*DAT_00982a7c + 8))(DAT_00982a7c);
    DAT_00982a7c = (int *)0x0;
  }
  if (DAT_00982cf0 != (int *)0x0) {
    (**(code **)(*DAT_00982cf0 + 8))(DAT_00982cf0);
    DAT_00982cf0 = (int *)0x0;
  }
  if (DAT_00982cec != (int *)0x0) {
    (**(code **)(*DAT_00982cec + 8))(DAT_00982cec);
    DAT_00982cec = (int *)0x0;
  }
  if (DAT_00982cf8 != (int *)0x0) {
    (**(code **)(*DAT_00982cf8 + 8))(DAT_00982cf8);
    DAT_00982cf8 = (int *)0x0;
  }
  if (DAT_00982cf4 != (int *)0x0) {
    (**(code **)(*DAT_00982cf4 + 8))(DAT_00982cf4);
    DAT_00982cf4 = (int *)0x0;
  }
  return;
}

