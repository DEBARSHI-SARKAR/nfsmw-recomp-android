/* speed.exe 0053d740 FUN_0053d740; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005252d0 FUN_005252d0
 */

void __thiscall FUN_0053d740(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((0 < param_2) && (param_3 < 0x10)) {
    for (; param_2 <= param_3; param_2 = param_2 + 1) {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_00573140("RANK_%d",param_2,&DAT_0089dfa0);
      FUN_005252d0(uVar1,uVar2);
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_00573140("GAMERTAG_%d",param_2,&DAT_0089dfa0);
      FUN_005252d0(uVar1,uVar2);
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_00573140("COLUMN3_%d",param_2,&DAT_0089dfa0);
      FUN_005252d0(uVar1,uVar2);
    }
  }
  return;
}

