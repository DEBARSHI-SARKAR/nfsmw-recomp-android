/* speed.exe 0057dfa0 FUN_0057dfa0; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 * calls 00525220 FUN_00525220
 * calls 00573140 FUN_00573140
 * calls 00515b90 FUN_00515b90
 * calls 005251a0 FUN_005251a0
 */

void __fastcall FUN_0057dfa0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    *(undefined ***)(param_1 + 0x34) = &PTR_s_TIP_HIDING_SPOTS_008f3e78;
  }
  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    uVar1 = FUN_00573140("%s_DESC",**(undefined4 **)(param_1 + 0x34));
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xc5fbc710,uVar1);
    uVar1 = FUN_00573140("%s_HEADER",**(undefined4 **)(param_1 + 0x34));
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xd555245,uVar1);
    uVar1 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0xc9d77cb6,*(undefined4 *)(param_1 + 0x2c))
    ;
    FUN_00515b90(uVar1);
    FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x3248e720,0x5079c8f8,1);
    *(undefined4 *)(param_1 + 0x30) = DAT_00925b14;
  }
  return;
}

