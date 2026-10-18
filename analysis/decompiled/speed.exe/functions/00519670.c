/* speed.exe 00519670 FUN_00519670; analysis pseudocode, not buildable source.
 * calls 00585b50 FUN_00585b50
 * calls 00516be0 FUN_00516be0
 * calls 00461160 FUN_00461160
 * calls 005722b0 FUN_005722b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00519670(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  FUN_00585b50(0x545570c6);
  iVar2 = FUN_00461160(param_2);
  fVar3 = (float10)FUN_005722b0();
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (fVar3 * (float10)iVar2 < (float10)_DAT_0089b86c) {
    FUN_00516be0(0x79b0c1c7,uVar1,0xfffffffc,0xff);
    return;
  }
  if (fVar3 * (float10)iVar2 < (float10)_DAT_0089b868) {
    FUN_00516be0(0xa13adcaf,uVar1,0xfffffffc,0xff);
    return;
  }
  FUN_00516be0(0x792bc959,uVar1,0xfffffffc,0xff);
  return;
}

