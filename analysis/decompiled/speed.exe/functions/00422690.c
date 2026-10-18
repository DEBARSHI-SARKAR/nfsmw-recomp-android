/* speed.exe 00422690 FUN_00422690; analysis pseudocode, not buildable source.
 * calls 00415080 FUN_00415080
 * calls 00777660 FUN_00777660
 */

undefined1 __thiscall FUN_00422690(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x48))();
  FUN_00777660(param_2,0);
  piVar3 = (int *)(**(code **)(*param_1 + 8))();
  uVar1 = (**(code **)(*piVar3 + 0x68))(iVar2 + 0x98,iVar2 + 0xbc);
  FUN_00415080();
  return uVar1;
}

