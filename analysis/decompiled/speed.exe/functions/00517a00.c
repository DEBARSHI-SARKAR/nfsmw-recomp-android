/* speed.exe 00517a00 FUN_00517a00; analysis pseudocode, not buildable source.
 * calls 00503400 FUN_00503400
 */

undefined * __fastcall FUN_00517a00(int param_1)

{
  undefined *puVar1;
  
  if (*(int *)(param_1 + 0x11c) == 5) {
    return &DAT_0091cb28;
  }
  puVar1 = (undefined *)FUN_00503400(0,1,0);
  return puVar1;
}

