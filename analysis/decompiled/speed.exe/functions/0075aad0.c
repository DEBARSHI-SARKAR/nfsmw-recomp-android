/* speed.exe 0075aad0 FUN_0075aad0; analysis pseudocode, not buildable source.
 * calls 00755450 FUN_00755450
 * calls 005ebb10 FUN_005ebb10
 * calls 00755590 FUN_00755590
 * calls 007310b0 FUN_007310b0
 * calls 00755340 FUN_00755340
 * calls 00462520 FUN_00462520
 * calls 00747950 FUN_00747950
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075aad0(void)

{
  int *piVar1;
  uint uVar2;
  
  _DAT_00903290 = 0;
  if (DAT_009885c8 != (int *)0x0) {
    (**(code **)(*DAT_009885c8 + 0x44))();
  }
  _DAT_00903290 = 0;
  FUN_00747950();
  FUN_007310b0();
  if (DAT_0091e00c != 0) {
    FUN_005ebb10();
  }
  if (DAT_009b08fd != '\0') {
    if (*(int *)(DAT_009b08f8 + 0x20) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(DAT_009b08f8 + 0x24) - *(int *)(DAT_009b08f8 + 0x20) >> 2;
    }
    uVar2 = (*(uint *)(DAT_009b08f8 + 0x18) + 1) % uVar2;
    piVar1 = (int *)(DAT_009b08f8 + 0x20);
    *(uint *)(DAT_009b08f8 + 0x18) = uVar2;
    FUN_00755340(*(undefined4 *)(*piVar1 + uVar2 * 4));
    DAT_009b08fd = '\0';
    FUN_00462520();
  }
  FUN_00755450();
  FUN_00755590();
  return;
}

