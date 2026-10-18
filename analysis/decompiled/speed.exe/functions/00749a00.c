/* speed.exe 00749a00 FUN_00749a00; analysis pseudocode, not buildable source.
 * calls 00739730 FUN_00739730
 * calls 00460bf0 FUN_00460bf0
 * calls 0073b640 FUN_0073b640
 * calls 00503400 FUN_00503400
 * calls 0073b470 FUN_0073b470
 */

undefined4
FUN_00749a00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint local_10;
  
  iVar1 = FUN_00503400(param_2,0,0);
  if (iVar1 == 0) {
    return 1;
  }
  bVar8 = *(char *)(iVar1 + 0x4a) != ' ';
  iVar2 = FUN_00503400(param_3,0,0);
  iVar3 = FUN_00503400(param_4,0,0);
  if ((iVar2 != 0) && (iVar3 != 0)) {
    local_10 = 0xffffffff;
    if (*(int *)(param_1 + 0x48 + param_5 * 4) != 0) {
      uVar4 = FUN_00460bf0(&PTR_DAT_008a15d0);
      uVar6 = 0;
      iVar5 = FUN_00739730(uVar4,0);
      if (iVar5 == 0) {
        local_10 = 0;
      }
      else {
        local_10 = *(uint *)(iVar5 + 4);
      }
      uVar4 = FUN_00460bf0("GREEN");
      iVar5 = FUN_00739730(uVar4,0);
      if (iVar5 != 0) {
        uVar6 = *(uint *)(iVar5 + 4);
      }
      uVar4 = FUN_00460bf0(&DAT_008a15c0);
      iVar5 = FUN_00739730(uVar4,0);
      if (iVar5 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(uint *)(iVar5 + 4);
      }
      uVar4 = FUN_00460bf0("GLOSS");
      iVar5 = FUN_00739730(uVar4,0);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar5 + 4);
      }
      local_10 = ((iVar5 << 8 | uVar7) << 8 | uVar6) << 8 | local_10;
    }
    if (bVar8) {
      if (*(char *)(iVar2 + 0x4a) == ' ') {
        return 0;
      }
      if (*(char *)(iVar3 + 0x4a) == ' ') {
        return 0;
      }
    }
    else {
      if (*(char *)(iVar2 + 0x4a) != ' ') {
        return 0;
      }
      if (*(char *)(iVar3 + 0x4a) != ' ') {
        return 0;
      }
    }
    if ((((*(short *)(iVar1 + 0x44) == *(short *)(iVar2 + 0x44)) &&
         (*(short *)(iVar1 + 0x44) == *(short *)(iVar3 + 0x44))) &&
        (*(short *)(iVar1 + 0x46) == *(short *)(iVar2 + 0x46))) &&
       (*(short *)(iVar1 + 0x46) == *(short *)(iVar3 + 0x46))) {
      if (bVar8) {
        uVar4 = FUN_0073b470(iVar1,iVar2,iVar3,local_10);
        return uVar4;
      }
      uVar4 = FUN_0073b640();
      return uVar4;
    }
  }
  return 0;
}

