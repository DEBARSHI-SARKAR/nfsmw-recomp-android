/* speed.exe 006fc3a0 FUN_006fc3a0; analysis pseudocode, not buildable source.
 * calls 006ed200 FUN_006ed200
 * calls 006fc330 FUN_006fc330
 * calls 00633e70 FUN_00633e70
 * calls 005d29d0 FUN_005d29d0
 * calls 006f0c80 FUN_006f0c80
 * calls 006274c0 FUN_006274c0
 */

void FUN_006fc3a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f5e1;
  local_c = ExceptionList;
  DAT_00988dec = 0;
  DAT_00988de8 = DAT_00982b78;
  DAT_009885d8 = 0;
  DAT_009885d4 = 0;
  ExceptionList = &local_c;
  iVar3 = FUN_005d29d0(0x20,0);
  local_4 = 0;
  if (iVar3 != 0) {
    FUN_006fc330();
  }
  local_4 = 0xffffffff;
  DAT_00988e04 = param_2;
  FUN_006ed200();
  FUN_00633e70();
  iVar3 = FUN_005d29d0(0x90,0);
  local_4 = 1;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_006f0c80();
  }
  local_4 = 0xffffffff;
  piVar1 = DAT_0092c668;
  do {
    DAT_009885e0 = iVar3;
    if (piVar1 == (int *)0x0) {
      uVar4 = 0;
LAB_006fc471:
      uVar2 = DAT_009885d8;
      *(undefined4 *)(iVar3 + 0x38) = uVar4;
      FUN_006274c0(uVar2);
      ExceptionList = local_c;
      return;
    }
    if (*piVar1 == param_1) {
      uVar4 = (*(code *)piVar1[1])(0,0,0);
      goto LAB_006fc471;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

