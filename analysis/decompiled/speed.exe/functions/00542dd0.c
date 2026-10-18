/* speed.exe 00542dd0 FUN_00542dd0; analysis pseudocode, not buildable source.
 * calls 00527e30 FUN_00527e30
 * calls 00515d70 FUN_00515d70
 * calls 0056bc10 FUN_0056bc10
 * calls 00515c00 FUN_00515c00
 * calls 00514fd0 FUN_00514fd0
 * calls 005b1360 FUN_005b1360
 * calls 00460c20 FUN_00460c20
 * calls 0056bc00 FUN_0056bc00
 * calls 00524cc0 FUN_00524cc0
 * calls 005b7780 FUN_005b7780
 * calls 005b8400 FUN_005b8400
 * calls 00460d20 FUN_00460d20
 */

void __fastcall FUN_00542dd0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  if ((char)param_1[7] == '\0') {
    iVar3 = *(int *)(param_1[1] + 4 + *param_1 * 8);
    if (iVar3 != 0x1a20ba) {
      uVar2 = FUN_0056bc10(iVar3);
      iVar3 = FUN_00460d20(&DAT_00890978,uVar2);
      if (iVar3 != 0) {
        FUN_00515c00(param_1[2],*(undefined4 *)(param_1[1] + 4 + *param_1 * 8));
        FUN_00514fd0(param_1[2],local_4,&local_8);
        FUN_00527e30(param_1[4],local_8);
        return;
      }
    }
    iVar3 = param_1[4];
    FUN_00514fd0(iVar3,&local_8,local_4);
    FUN_00524cc0(iVar3,local_8,0x45bb8000);
    FUN_00515d70(param_1[2],&DAT_00890978);
    return;
  }
  if (*(int *)(param_1[1] + 4 + *param_1 * 8) == 0x1a20ba) {
    if (*DAT_0091cadc != -0xd8) {
      for (iVar3 = *(int *)(*DAT_0091cadc + 0xe0); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
        FUN_005b7780(0xdbdf2888,0,iVar3,0xfffffffc,0);
      }
    }
  }
  else {
    if ((param_1[2] != 0) && (iVar3 = FUN_005b1360(0x16a259), iVar3 != 0)) {
      FUN_005b8400(iVar3,0);
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
    if ((param_1[3] != 0) && (iVar3 = FUN_005b1360(0x16a259), iVar3 != 0)) {
      FUN_005b8400(iVar3,0);
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
    uVar2 = FUN_00460c20(&DAT_0089e3ec,*(undefined4 *)(param_1[1] + 4 + *param_1 * 8));
    cVar1 = FUN_0056bc00(uVar2);
    if (((cVar1 != '\0') && (FUN_00515c00(param_1[2],uVar2), param_1[2] != 0)) &&
       (iVar3 = FUN_005b1360(0xbcbf0306), iVar3 != 0)) {
      FUN_005b8400(iVar3,0);
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
    uVar2 = FUN_00460c20(&DAT_0089e3e8,*(undefined4 *)(param_1[1] + 4 + *param_1 * 8));
    cVar1 = FUN_0056bc00(uVar2);
    if (((cVar1 != '\0') && (FUN_00515c00(param_1[3],uVar2), param_1[3] != 0)) &&
       (iVar3 = FUN_005b1360(0xbcbf0306), iVar3 != 0)) {
      FUN_005b8400(iVar3,0);
      *(undefined4 *)(iVar3 + 0x10) = 0;
      return;
    }
  }
  return;
}

