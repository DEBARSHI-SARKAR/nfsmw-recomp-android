/* speed.exe 004226e0 FUN_004226e0; analysis pseudocode, not buildable source.
 * calls 00415080 FUN_00415080
 * calls 00777ab0 FUN_00777ab0
 */

undefined1 __thiscall
FUN_004226e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x48))();
  FUN_00777ab0(param_2,param_3,param_4);
  piVar3 = (int *)(**(code **)(*param_1 + 8))();
  uVar1 = (**(code **)(*piVar3 + 0x68))(iVar2 + 0x98,iVar2 + 0xbc);
  FUN_00415080();
  return uVar1;
}

