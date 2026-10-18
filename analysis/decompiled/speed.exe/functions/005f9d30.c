/* speed.exe 005f9d30 FUN_005f9d30; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 0060e370 FUN_0060e370
 * calls 00614f10 FUN_00614f10
 * calls 00618e90 FUN_00618e90
 * calls 006189d0 FUN_006189d0
 * calls 00614e00 FUN_00614e00
 * calls 00605f20 FUN_00605f20
 * calls 005f9cc0 FUN_005f9cc0
 */

undefined4 __thiscall FUN_005f9d30(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00605a50(param_2);
  puVar2 = (undefined4 *)FUN_00614f10(param_2,4);
  *puVar2 = param_1;
  FUN_006189d0(param_2,"GRuntimeInstance");
  FUN_005f9cc0(param_2);
  FUN_00614e00(param_2,"ChangeState");
  FUN_00605f20(param_2,param_1);
  FUN_00618e90(param_2,FUN_005ed7d0,1);
  FUN_0060e370(param_2,0xffffd8ef);
  return uVar1;
}

