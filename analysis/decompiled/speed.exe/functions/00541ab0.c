/* speed.exe 00541ab0 FUN_00541ab0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005252d0 FUN_005252d0
 */

void __thiscall FUN_00541ab0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (((0 < param_2) && (param_3 < 0xb)) && (param_2 <= param_3)) {
    do {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_00573140("RANK_%d",param_2,&DAT_0089dfa0);
      FUN_005252d0(uVar1,uVar2);
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_00573140("GAMERTAG_%d",param_2,&DAT_0089dfa0);
      FUN_005252d0(uVar1,uVar2);
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_00573140("COLUMN3_%d",param_2,&DAT_0089dfa0);
      FUN_005252d0(uVar1,uVar2);
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_00573140("COLUMN4_%d",param_2,&DAT_0089dfa0);
      FUN_005252d0(uVar1,uVar2);
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_00573140("COLUMN5_%d",param_2,&DAT_0089dfa0);
      FUN_005252d0(uVar1,uVar2);
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_00573140("COLUMN6_%d",param_2,&DAT_0089dfa0);
      FUN_005252d0(uVar1,uVar2);
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x502caa6d,&DAT_0089dfa0);
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x68be9ca9,&DAT_0089dfa0);
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xe7adc641,&DAT_0089dfa0);
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xe7ae52a2,&DAT_0089dfa0);
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xe7aedf03,&DAT_0089dfa0);
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xe7af6b64,&DAT_0089dfa0);
  }
  return;
}

