/* speed.exe 00542530 FUN_00542530; analysis pseudocode, not buildable source.
 * calls 00585920 FUN_00585920
 * calls 005c4df0 FUN_005c4df0
 * calls 004b9080 FUN_004b9080
 * calls 00572070 FUN_00572070
 * calls 004af1e0 FUN_004af1e0
 */

void __thiscall FUN_00542530(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = param_2;
  FUN_00572070(param_2,param_3);
  FUN_00585920(uVar3,param_3);
  iVar2 = FUN_005c4df0(param_2,0x69,param_4);
  *(undefined1 *)(iVar2 + 0x18) = 1;
  *(undefined1 *)(*param_1 + 0x524c) = 1;
  if ((0 < DAT_0091cae4) && ((char)param_1[1] == '\0')) {
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  piVar1 = DAT_009885c8;
  *(undefined4 *)(&DAT_0091cae8 + DAT_0091cae4 * 4) = param_2;
  DAT_0091cae4 = DAT_0091cae4 + 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x30))();
  }
  FUN_004af1e0(1,0xffffffff);
  FUN_004b9080(1,0x10,"PauseAllSystems");
  return;
}

