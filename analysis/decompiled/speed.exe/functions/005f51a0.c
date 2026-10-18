/* speed.exe 005f51a0 FUN_005f51a0; analysis pseudocode, not buildable source.
 * calls 005f4390 FUN_005f4390
 * calls 005f3f10 FUN_005f3f10
 * calls 005f3d90 FUN_005f3d90
 * calls 005f4510 FUN_005f4510
 * calls 005f4210 FUN_005f4210
 * calls 005f4090 FUN_005f4090
 */

int FUN_005f51a0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = FUN_005f3d90(param_1,0,&local_4,0);
  iVar2 = FUN_005f3f10(param_1,0,&local_4,0);
  iVar3 = FUN_005f4090(param_1,0,&local_4,0);
  iVar4 = FUN_005f4210(param_1,0,&local_4,0);
  iVar5 = FUN_005f4390(param_1,0,&local_4,0);
  iVar6 = FUN_005f4510(param_1,0,&local_4,0);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_4;
  }
  return iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6;
}

