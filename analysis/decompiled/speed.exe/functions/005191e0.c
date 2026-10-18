/* speed.exe 005191e0 FUN_005191e0; analysis pseudocode, not buildable source.
 * calls 00660270 FUN_00660270
 * calls 005b5b70 FUN_005b5b70
 * calls 005b7780 FUN_005b7780
 * calls 00660200 FUN_00660200
 * calls 00591d90 FUN_00591d90
 * calls 00572070 FUN_00572070
 * calls 0064c9a0 FUN_0064c9a0
 */

void FUN_005191e0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  char *pcVar4;
  
  iVar1 = FUN_0064c9a0();
  if (iVar1 != 0) {
    FUN_00660200(0x12,8,9);
  }
  iVar1 = FUN_00660270(param_1,0x10,9);
  iVar2 = FUN_00660270(param_2,0x10,9);
  *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
  if ((iVar2 == 1) || (iVar2 == 2)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)(DAT_0091cb20 + 0x2c) = uVar3;
  if (iVar2 == 1) {
    iVar1 = (-(uint)(iVar1 != 0) & 0x33b394c1) + 0x54b3ac6c;
  }
  else {
    pcVar4 = "MC_List.fng";
    if (DAT_0091d218 < 1) {
      iVar1 = FUN_005b5b70("MC_List.fng");
    }
    else {
      FUN_00572070();
      iVar1 = FUN_00591d90(pcVar4);
    }
    if (iVar1 == 0) {
      iVar1 = -0x7798bed3;
      if (*(char *)(DAT_0091cb20 + 0x23) == '\0') {
        iVar1 = param_1;
      }
    }
    else {
      iVar1 = -0x14d6c6d6;
    }
  }
  if (*DAT_0091cadc != -0xd8) {
    for (iVar2 = *(int *)(*DAT_0091cadc + 0xe0); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      FUN_005b7780(iVar1,0,iVar2,0xffffffff,0);
    }
  }
  return;
}

