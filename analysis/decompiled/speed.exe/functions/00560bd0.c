/* speed.exe 00560bd0 FUN_00560bd0; analysis pseudocode, not buildable source.
 * calls 00526800 FUN_00526800
 * calls 0064c9a0 FUN_0064c9a0
 * calls 00517dc0 FUN_00517dc0
 * calls 007f3ca0 FUN_007f3ca0
 * calls 00560940 FUN_00560940
 * calls 00516be0 FUN_00516be0
 * calls 00660200 FUN_00660200
 */

void FUN_00560bd0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0064c9a0();
  if (iVar1 != 0) {
    FUN_00660200(0xe,8,9);
  }
  FUN_00517dc0(param_1);
  iVar1 = -0x7798bed3;
  if (*(char *)(DAT_0091cb20 + 0x20) == '\0') {
    FUN_007f3ca0(0,1);
    if (*(int *)(param_1 + 4) == 0) {
      iVar1 = 0x461a18ee;
    }
    *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
    *(undefined2 *)(DAT_0091cb20 + 0x48) = *(undefined2 *)(param_1 + 4);
    if ((iVar1 != 0) && (*(int *)(DAT_0091cb20 + 0xcc) != 0)) {
      FUN_00516be0(iVar1,*(undefined4 *)(*(int *)(DAT_0091cb20 + 0xcc) + 0x10),0xffffffff,0xff);
    }
  }
  else {
    *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
    *(undefined2 *)(DAT_0091cb20 + 0x48) = *(undefined2 *)(param_1 + 4);
    switch(*(undefined4 *)(param_1 + 4)) {
    case 0:
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
      FUN_00526800();
      return;
    case 1:
      FUN_00560940();
      return;
    }
  }
  return;
}

