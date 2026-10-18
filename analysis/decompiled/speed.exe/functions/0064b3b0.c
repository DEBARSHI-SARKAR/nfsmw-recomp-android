/* speed.exe 0064b3b0 FUN_0064b3b0; analysis pseudocode, not buildable source.
 * calls 00461300 FUN_00461300
 * calls 00460c70 FUN_00460c70
 * calls 00768c40 FUN_00768c40
 * calls 004647c0 FUN_004647c0
 * calls 00768c60 FUN_00768c60
 */

void FUN_0064b3b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00460c70(param_3,param_2);
  cVar1 = FUN_00768c60(&DAT_008a87a4);
  if (cVar1 != '\0') {
    uVar2 = FUN_00461300(param_2,&DAT_00893ce4);
    uVar3 = FUN_00461300(param_3,&DAT_00893ce4);
    uVar2 = FUN_00768c40(param_1,uVar2);
    FUN_004647c0(uVar3,&DAT_00893b40,uVar2);
  }
  return;
}

