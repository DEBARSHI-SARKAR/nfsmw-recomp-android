/* speed.exe 007029c0 FUN_007029c0; analysis pseudocode, not buildable source.
 * calls 004ac040 FUN_004ac040
 * calls 00708d80 FUN_00708d80
 */

void __thiscall FUN_007029c0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    uVar3 = param_1[3];
    param_2 = param_2 + -1;
    do {
      uVar1 = param_1[1];
      uVar2 = *param_1;
      param_2 = param_2 + 1;
      param_1[3] = uVar3 & 1;
      param_1[1] = param_2;
      param_1[2] = 0;
      uVar4 = FUN_004ac040(param_2 * 0x10,"SpeechSampleMap node",0);
      *param_1 = uVar4;
      FUN_00708d80(uVar2,uVar1,1);
      uVar3 = param_1[3];
    } while (200 < (uVar3 & 0xfffffffe));
  }
  return;
}

