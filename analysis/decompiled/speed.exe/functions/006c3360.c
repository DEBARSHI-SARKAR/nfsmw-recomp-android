/* speed.exe 006c3360 FUN_006c3360; analysis pseudocode, not buildable source.
 * calls 006c3a40 FUN_006c3a40
 */

void FUN_006c3360(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = *(int **)((int)&DAT_0093de60 + iVar2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)((int)&DAT_0093def8 + iVar2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)((int)&DAT_0093de60 + iVar2) = 0;
    *(undefined4 *)((int)&DAT_0093def8 + iVar2) = 0;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 8);
  iVar2 = 0;
  do {
    piVar1 = *(int **)((int)&DAT_00982990 + iVar2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)&DAT_00982990 + iVar2) = 0;
    }
    piVar1 = *(int **)((int)&DAT_00982964 + iVar2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)&DAT_00982964 + iVar2) = 0;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x10);
  if (DAT_00982960 != (int *)0x0) {
    (**(code **)(*DAT_00982960 + 8))(DAT_00982960);
    DAT_00982960 = (int *)0x0;
  }
  if (DAT_0093e7bc != (int *)0x0) {
    (**(code **)(*DAT_0093e7bc + 8))(DAT_0093e7bc);
    DAT_0093e7bc = (int *)0x0;
  }
  if (DAT_0093e7b8 != (int *)0x0) {
    (**(code **)(*DAT_0093e7b8 + 8))(DAT_0093e7b8);
    DAT_0093e7b8 = (int *)0x0;
  }
  if (DAT_00982c64 != (int *)0x0) {
    (**(code **)(*DAT_00982c64 + 8))(DAT_00982c64);
    DAT_00982c64 = (int *)0x0;
    (**(code **)(*DAT_00982c68 + 8))(DAT_00982c68);
    DAT_00982c68 = (int *)0x0;
  }
  FUN_006c3a40();
  return;
}

