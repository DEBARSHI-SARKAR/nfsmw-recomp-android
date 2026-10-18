/* speed.exe 0081da5a FUN_0081da5a; analysis pseudocode, not buildable source.
 * calls 00822424 FUN_00822424
 * calls 0081d93a FUN_0081d93a
 */

undefined4 __thiscall FUN_0081da5a(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_0081d93a();
  }
  iVar1 = FUN_00822424(param_1,param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffff7;
  }
  return uVar2;
}

