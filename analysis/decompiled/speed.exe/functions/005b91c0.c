/* speed.exe 005b91c0 FUN_005b91c0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 005b37c0 FUN_005b37c0
 * calls 00652b10 thunk_FUN_007c7250
 */

void __thiscall FUN_005b91c0(undefined4 *param_1,uint param_2)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  void *pvVar4;
  
  psVar2 = (short *)*param_1;
  uVar3 = 0;
  if (psVar2 != (short *)0x0) {
    sVar1 = *psVar2;
    while (sVar1 != 0) {
      uVar3 = uVar3 + 1;
      sVar1 = psVar2[uVar3];
    }
  }
  if (uVar3 < param_2) {
    param_1[1] = param_2;
    pvVar4 = _malloc(param_2 * 2 + 2);
    FUN_005b37c0(pvVar4,*param_1);
    thunk_FUN_007c7250(*param_1);
    *param_1 = pvVar4;
  }
  return;
}

