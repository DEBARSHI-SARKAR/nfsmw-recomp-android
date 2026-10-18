/* speed.exe 007bfa20 FUN_007bfa20; analysis pseudocode, not buildable source.
 * calls 00515960 FUN_00515960
 * calls 00524850 FUN_00524850
 * calls 007bf970 FUN_007bf970
 * calls 007ada50 FUN_007ada50
 * calls 007ae350 FUN_007ae350
 * calls 0054e760 FUN_0054e760
 * calls 00516c90 FUN_00516c90
 * calls 00515990 FUN_00515990
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_007bfa20(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00515960(&local_4,&local_8);
  uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x46cb7764);
  cVar1 = FUN_0054e760(local_4,local_8,uVar2);
  if (cVar1 == '\0') {
    uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xd276ba2f);
    cVar1 = FUN_0054e760(local_4,local_8,uVar2);
    if (cVar1 == '\0') {
      return 0;
    }
    FUN_00515990(&local_c);
    if (_DAT_00890968 <= local_c) {
      if (_DAT_00890968 < local_c) {
        FUN_00516c90(0x704,*(undefined4 *)(param_1 + 0x10),0);
        FUN_007bf970(1);
      }
      return 1;
    }
    FUN_00516c90(0x148cd7,*(undefined4 *)(param_1 + 0x10),0);
    FUN_007bf970(0xffffffff);
    return 1;
  }
  FUN_00515990(&local_c);
  if (_DAT_00890968 <= local_c) {
    if (local_c <= _DAT_00890968) {
      return 1;
    }
    FUN_00516c90(0x18c32a,*(undefined4 *)(param_1 + 0x10),0);
    piVar4 = *(int **)(param_1 + 0x34);
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    piVar3 = (int *)piVar4[1];
    if (piVar3 == (int *)(param_1 + 0x2c)) {
      piVar3 = *(int **)(param_1 + 0x30);
    }
  }
  else {
    FUN_00516c90(0x39feffd,*(undefined4 *)(param_1 + 0x10),0);
    piVar4 = *(int **)(param_1 + 0x34);
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    piVar3 = (int *)*piVar4;
    if (piVar3 == (undefined4 *)(param_1 + 0x2c)) {
      piVar3 = *(int **)(param_1 + 0x2c);
    }
  }
  if (piVar3 != piVar4) {
    FUN_007ae350(piVar3,*(undefined4 *)(param_1 + 0x1a8));
    FUN_007ada50();
  }
  return 1;
}

