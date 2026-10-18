/* speed.exe 0079abd0 FUN_0079abd0; analysis pseudocode, not buildable source.
 * calls 00837190 FUN_00837190
 * calls 0078ccd0 FUN_0078ccd0
 * calls 00572e80 FUN_00572e80
 * calls 00591e90 FUN_00591e90
 * calls 00516c90 FUN_00516c90
 * calls 0045d3a0 FUN_0045d3a0
 * calls 0078cbf0 FUN_0078cbf0
 * calls 0079a9e0 FUN_0079a9e0
 * calls 00460d20 FUN_00460d20
 */

void FUN_0079abd0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  uVar3 = 0;
  local_4 = 0;
  if (param_3 < 0x400001) {
    if (param_3 == 0x400000) {
      uVar3 = 1;
      local_4 = 1;
      goto LAB_0079ac9c;
    }
    if (param_3 == 0x400) {
      uVar3 = FUN_00837190(param_2);
      FUN_0078cbf0(uVar3);
      return;
    }
    if (param_3 != 0x800) goto LAB_0079ac9c;
  }
  else {
    if (param_3 != 0x4000000) goto LAB_0079ac9c;
    uVar3 = FUN_00837190(param_2);
    FUN_0078ccd0(uVar3);
  }
  uVar3 = 1;
  local_4 = 0;
  uVar1 = FUN_00837190(param_2);
  iVar2 = FUN_00460d20(&DAT_0091c39c,uVar1);
  if ((iVar2 == 0) && (iVar2 = FUN_00591e90("OL_FriendDialogue.fng"), iVar2 != 0)) {
    FUN_00516c90(0x1cad26e2,"OL_FriendDialogue.fng",0);
  }
  FUN_0079a9e0();
  iVar2 = FUN_0045d3a0(0);
  if (iVar2 != 0) {
    DAT_0091ca90 = 1;
    return;
  }
LAB_0079ac9c:
  FUN_00572e80(uVar3,local_4);
  DAT_0091ca90 = 1;
  return;
}

