/* speed.exe 00829030 FUN_00829030; analysis pseudocode, not buildable source.
 * calls 00829410 FUN_00829410
 * calls 00829450 FUN_00829450
 * calls 0082e390 FUN_0082e390
 * calls 0082e820 FUN_0082e820
 * calls 0082c020 FUN_0082c020
 * calls 0082c1d0 FUN_0082c1d0
 */

undefined4 FUN_00829030(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  
  iVar1 = FUN_00829410();
  if (iVar1 == 0) {
    return 0xffffffee;
  }
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_10 = 0x4ff;
  local_20 = 0;
  local_1c = 0;
  local_c = param_2 & 0xffff | 0xff0000;
  local_18 = 0;
  local_8 = 0xfffffff8;
  local_14 = param_1;
  FUN_0082e820(&local_34,&local_14);
  iVar1 = 0;
  uVar3 = 0;
  do {
    iVar2 = FUN_0082e390(uVar3 & 0xff,param_1);
    if (iVar2 != 0) {
      if (iVar1 == 0) {
        iVar1 = FUN_0082c1d0(&local_34);
        if (iVar1 == 0) goto LAB_008290e8;
      }
      local_8 = FUN_0082c020(param_1,iVar1);
    }
LAB_008290e8:
    uVar3 = uVar3 + 1;
    if (3 < uVar3) {
      FUN_00829450();
      return local_8;
    }
  } while( true );
}

