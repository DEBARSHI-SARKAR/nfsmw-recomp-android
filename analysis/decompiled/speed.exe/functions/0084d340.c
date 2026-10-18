/* speed.exe 0084d340 FUN_0084d340; analysis pseudocode, not buildable source.
 * calls 0084af40 FUN_0084af40
 * calls 0084cd70 FUN_0084cd70
 * calls 0078af60 thunk_FUN_004655f0
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0084bd60 FUN_0084bd60
 * calls 0084bcf0 FUN_0084bcf0
 * calls 0084c630 FUN_0084c630
 */

void FUN_0084d340(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    if (1 < DAT_009c3874) {
      DAT_009c3874 = DAT_009c3874 + -1;
      return;
    }
    iVar1 = *(int *)(param_1 + 0x24);
    DAT_009c3878 = 0;
    DAT_009c3874 = 0;
    while (iVar1 != 0) {
      FUN_0084cd70(param_1,*(int *)(param_1 + 0x24) + 8,*(int *)(param_1 + 0x24) + 0x28);
      FUN_0084c630(*(undefined4 *)(param_1 + 0x38),0,param_1);
      iVar1 = *(int *)(param_1 + 0x24);
    }
    FUN_0084bd60(param_1);
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_0084bdf0(param_1);
    FUN_0084af40(uVar2);
    FUN_0084bcf0(param_1);
    thunk_FUN_004655f0(*(undefined4 *)(param_1 + 0x28));
    thunk_FUN_004655f0(param_1);
  }
  return;
}

