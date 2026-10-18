/* speed.exe 007b00e0 FUN_007b00e0; analysis pseudocode, not buildable source.
 * calls 007b0070 FUN_007b0070
 * calls 00514d10 FUN_00514d10
 */

void __fastcall FUN_007b00e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0x54);
    if (iVar1 != 0) {
      *(bool *)(iVar1 + 0x14) = *(char *)(iVar1 + 0x14) == '\0';
      if ((*(int *)(iVar1 + 0xc) != 0) &&
         ((((iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 0x10), iVar2 == 0x71 || (iVar2 == 0x72)) ||
           (iVar2 == 0x69)) || (iVar2 == 0x6a)))) {
        FUN_007b0070();
        *(bool *)(iVar1 + 0x14) = *(char *)(iVar1 + 0x14) == '\0';
      }
    }
    iVar1 = *(int *)(param_1 + 0x34);
    if (*(char *)(*(int *)(iVar1 + 0x54) + 0x14) == '\0') {
      uVar3 = *(undefined4 *)(iVar1 + 0x4c);
      uVar4 = 0x77cdc4e9;
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 0x4c);
      uVar4 = 0xe6361f46;
    }
    FUN_00514d10(uVar3,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x007b015f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x34) + 0xc))();
    return;
  }
  return;
}

