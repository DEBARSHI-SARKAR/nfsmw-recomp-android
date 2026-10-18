/* speed.exe 00563cb0 FUN_00563cb0; analysis pseudocode, not buildable source.
 * calls 00562b80 FUN_00562b80
 * calls 005189f0 FUN_005189f0
 * calls 00518ac0 FUN_00518ac0
 */

void __fastcall FUN_00563cb0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xcc) != 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 5) {
      FUN_005189f0(*(undefined4 *)(param_1 + 0x3c));
    }
    else {
      if (iVar1 == 6) {
        FUN_00518ac0(*(undefined4 *)(param_1 + 0x3c));
        *(undefined4 *)(param_1 + 0x38) = 0;
        return;
      }
      if (iVar1 == 7) {
        FUN_00562b80(0,0);
        *(undefined4 *)(param_1 + 0x38) = 0;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

