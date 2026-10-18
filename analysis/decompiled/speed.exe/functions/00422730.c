/* speed.exe 00422730 FUN_00422730; analysis pseudocode, not buildable source.
 * calls 00415080 FUN_00415080
 * calls 007862d0 FUN_007862d0
 */

undefined1 __thiscall FUN_00422730(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = 0x3f800000;
  uVar5 = 0;
  uVar3 = param_2;
  uVar4 = param_3;
  (**(code **)(*param_1 + 0x48))(param_2,param_3,0,0x3f800000);
  FUN_007862d0(uVar3,uVar4,uVar5,uVar6);
  piVar2 = (int *)(**(code **)(*param_1 + 8))();
  uVar1 = (**(code **)(*piVar2 + 0x68))(param_2,param_3);
  FUN_00415080();
  return uVar1;
}

