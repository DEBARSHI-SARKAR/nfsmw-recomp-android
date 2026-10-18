/* speed.exe 00466200 FUN_00466200; analysis pseudocode, not buildable source.
 * calls 004653d0 FUN_004653d0
 * calls 00460a10 FUN_00460a10
 * calls 00464d80 FUN_00464d80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466200(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_008ed3c0 = FUN_00460a10();
  uVar3 = FUN_004653d0(param_1,0,0,0);
  iVar2 = DAT_008ed3c0;
  iVar1 = DAT_008ed3c0 * 0xc;
  (&DAT_0090de49)[iVar1] = 0;
  *(undefined4 *)(&DAT_0090de4c + iVar1) = 0xffffffff;
  (&DAT_0090df10)[iVar2] = &DAT_0090dff0 + iVar2 * 100;
  FUN_00464d80(uVar3,param_1,"Persistent Pool");
  _DAT_00910edc = DAT_008ed3c0;
  return;
}

