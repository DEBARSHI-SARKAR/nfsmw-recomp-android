/* speed.exe 00543180 FUN_00543180; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 005b8390 FUN_005b8390
 * calls 005af1c0 FUN_005af1c0
 * calls 00516af0 FUN_00516af0
 * calls 0056db00 FUN_0056db00
 * calls 00514cc0 FUN_00514cc0
 * calls 00514c70 FUN_00514c70
 * calls 005252d0 FUN_005252d0
 * calls 005b2d50 FUN_005b2d50
 */

void __fastcall FUN_00543180(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)(DAT_0091cf90 + 3) == '\0') {
    *(undefined1 *)(param_1[0x52] + 0x20) = 1;
  }
  else {
    *(undefined1 *)(param_1[0x52] + 0x20) = 0;
  }
  iVar2 = param_1[4];
  if (*(char *)(DAT_0091cf90 + 3) == '\0') {
    uVar1 = FUN_005af1c0("NAME_GROUP");
    if (iVar2 == 0) {
LAB_0054323f:
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00516af0(iVar2);
      if (iVar2 == 0) goto LAB_0054323f;
      iVar2 = FUN_005b8550(uVar1);
      if (iVar2 == 0) goto LAB_0054323f;
    }
    FUN_00514c70(iVar2);
    goto LAB_0054324a;
  }
  uVar1 = FUN_005af1c0("NAME_GROUP");
  if (iVar2 == 0) {
LAB_005431e8:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(iVar2);
    if (iVar2 == 0) goto LAB_005431e8;
    iVar2 = FUN_005b8550(uVar1);
    if (iVar2 == 0) goto LAB_005431e8;
  }
  FUN_00514cc0(iVar2);
  iVar2 = param_1[4];
  uVar1 = FUN_0056db00();
  FUN_005252d0(iVar2,0xeb406fec,uVar1);
LAB_0054324a:
  if (*(int *)(param_1[0x52] + 0x10) != 0) {
    uVar3 = 0;
    uVar1 = FUN_005b2d50(*(undefined4 *)(param_1[0x52] + 0x1c));
    FUN_005b8390(uVar1,uVar3);
  }
  (**(code **)(*param_1 + 0xc))();
  return;
}

