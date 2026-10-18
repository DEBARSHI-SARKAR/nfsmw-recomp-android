/* speed.exe 004b8c80 FUN_004b8c80; analysis pseudocode, not buildable source.
 * calls 004e7d30 FUN_004e7d30
 * calls 004aeaa0 FUN_004aeaa0
 * calls 006ff2d0 FUN_006ff2d0
 * calls 004e07e0 FUN_004e07e0
 * calls 0070e570 FUN_0070e570
 */

void FUN_004b8c80(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  if ((DAT_008f86f8 != 0) && (DAT_008f86fc != 0)) {
    FUN_004aeaa0(0x40000050);
    if (param_2 == -1) {
      if ((DAT_00914344 != 0xd0e5a9d) && (DAT_00914344 != -0x34009a6c)) {
        FUN_004e7d30(DAT_00914344,0xffffffff,1,0);
      }
    }
    else if (DAT_008efd80 == '\0') {
      FUN_004e07e0();
    }
    else {
      FUN_004e7d30(param_1,param_2,1,0);
    }
    FUN_0070e570();
    piVar1 = (int *)FUN_006ff2d0(1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x48))();
    }
  }
  return;
}

