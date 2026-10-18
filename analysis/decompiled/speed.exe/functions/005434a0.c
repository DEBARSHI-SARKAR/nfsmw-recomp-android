/* speed.exe 005434a0 FUN_005434a0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 005af1c0 FUN_005af1c0
 * calls 00516af0 FUN_00516af0
 * calls 0056db00 FUN_0056db00
 * calls 00514cc0 FUN_00514cc0
 * calls 00514c70 FUN_00514c70
 * calls 005252d0 FUN_005252d0
 * calls 005a3b60 FUN_005a3b60
 */

void __fastcall FUN_005434a0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[4];
  if (*(char *)(DAT_0091cf90 + 3) == '\0') {
    uVar1 = FUN_005af1c0("NAME_GROUP");
    if (iVar2 == 0) {
LAB_0054353a:
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00516af0(iVar2);
      if (iVar2 == 0) goto LAB_0054353a;
      iVar2 = FUN_005b8550(uVar1);
      if (iVar2 == 0) goto LAB_0054353a;
    }
    FUN_00514c70(iVar2);
    goto LAB_00543545;
  }
  uVar1 = FUN_005af1c0("NAME_GROUP");
  if (iVar2 == 0) {
LAB_005434e3:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(iVar2);
    if (iVar2 == 0) goto LAB_005434e3;
    iVar2 = FUN_005b8550(uVar1);
    if (iVar2 == 0) goto LAB_005434e3;
  }
  FUN_00514cc0(iVar2);
  iVar2 = param_1[4];
  uVar1 = FUN_0056db00();
  FUN_005252d0(iVar2,0xeb406fec,uVar1);
LAB_00543545:
  (**(code **)(*param_1 + 0xc))();
  FUN_005a3b60();
  return;
}

