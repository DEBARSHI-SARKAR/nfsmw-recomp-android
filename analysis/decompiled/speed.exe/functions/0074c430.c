/* speed.exe 0074c430 FUN_0074c430; analysis pseudocode, not buildable source.
 * calls 0073e620 FUN_0073e620
 * calls 0073e920 FUN_0073e920
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0074c430(int *param_1,undefined4 param_2)

{
  float10 fVar1;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  (**(code **)(*param_1 + 0x10))(param_2);
  if (*(short *)param_1[0x1c] == 1) {
    uStack_24 = 0;
    fVar1 = (float10)FUN_0073e620(param_2,0x3ce38e39,0x4019999a,0x3e4ccccd,0x42a00000);
    fStack_20 = (float)(fVar1 * (float10)_DAT_00890960);
    uStack_1c = 0;
    FUN_0073e920(0xf,&uStack_24,param_2);
  }
  if (*(short *)param_1[0x17] == 1) {
    uStack_24 = 0;
    fVar1 = (float10)FUN_0073e620(param_2,0x3ce38e39,0x4019999a,0x3e4ccccd,0x43020000);
    fStack_20 = (float)-(fVar1 * (float10)_DAT_00890960);
    uStack_1c = 0;
    FUN_0073e920(10,&uStack_24,param_2);
  }
  if (*(short *)param_1[0x1d] == 1) {
    FUN_0073e620(param_2,0x3ce38e39,0x4019999a,0x3e4ccccd,0x42a00000);
  }
  return;
}

