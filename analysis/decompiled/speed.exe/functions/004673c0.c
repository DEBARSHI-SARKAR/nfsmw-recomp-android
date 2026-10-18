/* speed.exe 004673c0 FUN_004673c0; analysis pseudocode, not buildable source.
 * calls 0045dd10 FUN_0045dd10
 * calls 0045db30 FUN_0045db30
 */

void __thiscall FUN_004673c0(int param_1,undefined4 param_2)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  
  uVar1 = (uint)(*(ushort *)(param_1 + 0xc4) >> 1);
  fVar2 = (float10)FUN_0045db30(uVar1,param_1);
  fVar4 = (float)fVar2;
  fVar2 = (float10)FUN_0045db30(param_2,uVar1,fVar4);
  fVar3 = (float10)FUN_0045db30(DAT_008edf1c >> 1);
  FUN_0045dd10((float)((float10)(float)(fVar2 * (float10)fVar4) / fVar3));
  return;
}

