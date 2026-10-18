/* speed.exe 0048cdd0 FUN_0048cdd0; analysis pseudocode, not buildable source.
 * calls 0048cd20 FUN_0048cd20
 * calls 0048cb90 FUN_0048cb90
 * calls 005d29d0 FUN_005d29d0
 */

undefined4
FUN_0048cdd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086adcf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0048cd20(param_1);
  FUN_0048cd20(param_3);
  iVar2 = FUN_005d29d0(0x4c,0);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0048cb90(param_1,param_2,param_3,param_4,param_5);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)(iVar2 + 4);
      goto LAB_0048ce42;
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_0048ce42:
  *DAT_00911330 = puVar3;
  puVar1 = puVar3;
  puVar3[1] = DAT_00911330;
  DAT_00911330 = puVar1;
  *puVar3 = &DAT_0091132c;
  ExceptionList = local_c;
  return *(undefined4 *)(iVar2 + 0x3c);
}

