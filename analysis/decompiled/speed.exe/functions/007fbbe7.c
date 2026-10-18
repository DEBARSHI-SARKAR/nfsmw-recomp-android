/* speed.exe 007fbbe7 FUN_007fbbe7; analysis pseudocode, not buildable source.
 * calls 007fe2a1 FUN_007fe2a1
 * calls 007fba42 FUN_007fba42
 * calls 007fc9f3 FUN_007fc9f3
 * calls 007fe486 FUN_007fe486
 * calls 007fba80 FUN_007fba80
 * calls 007fd4e5 FUN_007fd4e5
 */

bool FUN_007fbbe7(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_007fba80();
  *param_1 = iVar1;
  *(undefined4 *)(iVar1 + 0x234) = param_2;
  *(undefined4 *)(*param_1 + 0x238) = param_3;
  *(undefined4 *)(*param_1 + 0x23c) = param_2;
  *(undefined4 *)(*param_1 + 0x240) = param_3;
  *(undefined4 *)(*param_1 + 0x1b0) = param_2;
  *(undefined4 *)(*param_1 + 0x1b4) = param_3;
  uVar2 = FUN_007fc9f3(*param_1 + 0x1b0);
  *(undefined4 *)(*param_1 + 0x29c) = uVar2;
  uVar2 = FUN_007fd4e5();
  *(undefined4 *)(*param_1 + 0x13c) = uVar2;
  *(undefined4 *)(*param_1 + 0x1a4) = DAT_009c6e00;
  iVar1 = FUN_007fe2a1(*param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(*(int *)(*param_1 + 0x13c) + 0x38) = 0;
    FUN_007fe486(*param_1);
  }
  else {
    FUN_007fba42(param_1);
  }
  return iVar1 != 0;
}

