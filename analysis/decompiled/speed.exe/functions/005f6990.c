/* speed.exe 005f6990 FUN_005f6990; analysis pseudocode, not buildable source.
 * calls 005f2de0 FUN_005f2de0
 * calls 005e6320 FUN_005e6320
 * calls 005f46c0 FUN_005f46c0
 */

undefined4
FUN_005f6990(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = param_5;
  iVar1 = param_3;
  do {
    while( true ) {
      if ((param_2 == iVar1) || (param_4 == iVar2)) {
        FUN_005f46c0(param_1,param_2,iVar1,param_6,param_7,param_2);
        return param_1;
      }
      if (*(short *)(param_4 + 0xc) <= *(short *)(param_2 + 0xc)) break;
      puVar3 = (undefined4 *)FUN_005f2de0(&param_3,param_7,param_2 + 0xc);
      param_7 = *puVar3;
      FUN_005e6320();
LAB_005f69fe:
      FUN_005e6320();
    }
    if (*(short *)(param_2 + 0xc) <= *(short *)(param_4 + 0xc)) {
      FUN_005e6320();
      goto LAB_005f69fe;
    }
    FUN_005e6320();
  } while( true );
}

