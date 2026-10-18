/* speed.exe 005fa270 FUN_005fa270; analysis pseudocode, not buildable source.
 * calls 005f5880 FUN_005f5880
 * calls 005f5730 FUN_005f5730
 * calls 005fa0a0 FUN_005fa0a0
 * calls 00602a60 FUN_00602a60
 * calls 005f55d0 FUN_005f55d0
 * calls 005f59d0 FUN_005f59d0
 */

void __fastcall FUN_005fa270(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  iVar1 = FUN_005f55d0(*param_1,iVar2);
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_005f5730(*param_1,iVar2);
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_005fa0a0(*param_1,iVar2);
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_005f5880(*param_1,iVar2);
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_005f59d0(*param_1,iVar2);
  FUN_00602a60(*param_1,iVar2 + iVar1);
  return;
}

