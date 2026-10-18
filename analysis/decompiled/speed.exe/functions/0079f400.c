/* speed.exe 0079f400 FUN_0079f400; analysis pseudocode, not buildable source.
 * calls 0078c380 FUN_0078c380
 * calls 00732e00 FUN_00732e00
 * calls 0079f090 FUN_0079f090
 * calls 0078b090 FUN_0078b090
 */

void FUN_0079f400(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0079f090(param_1);
  iVar1 = FUN_0078c380(param_1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x88) == 3)) {
    uVar2 = FUN_00732e00(param_4);
    FUN_0078b090(*(undefined4 *)(iVar1 + 0x9c),param_3,uVar2,param_4);
  }
  return;
}

