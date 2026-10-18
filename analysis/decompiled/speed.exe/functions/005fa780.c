/* speed.exe 005fa780 FUN_005fa780; analysis pseudocode, not buildable source.
 * calls 0064d950 FUN_0064d950
 * calls 0065f830 FUN_0065f830
 * calls 005ee0f0 FUN_005ee0f0
 * calls 0065f680 FUN_0065f680
 * calls 0065aed0 FUN_0065aed0
 * calls 005fa5e0 FUN_005fa5e0
 * calls 005f18a0 FUN_005f18a0
 */

void __thiscall FUN_005fa780(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_2 + 8) >> 1 & 1) == 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_005ee0f0();
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    *(int *)(param_1 + 0x44) = param_2;
  }
  else {
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_005ee0f0();
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_005ee0f0();
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    *(int *)(param_1 + 0x38) = param_2;
  }
  uVar1 = FUN_0065f680(*(undefined4 *)(param_1 + 0x18),1,1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  FUN_0064d950(uVar1,*(undefined4 *)(param_2 + 0x10),0);
  FUN_0065f830(*(undefined4 *)(param_1 + 0x1c),uVar2,*(undefined4 *)(param_2 + 0x14));
  FUN_0064d950(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_2 + 0x18),0);
  FUN_0065f830(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x48),
               *(undefined4 *)(param_2 + 0x1c));
  FUN_0065aed0(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_005fa5e0(uVar2,*(undefined4 *)(param_1 + 0x48));
  if (*(char *)(param_1 + 0x118) != '\0') {
    FUN_005f18a0();
  }
  return;
}

