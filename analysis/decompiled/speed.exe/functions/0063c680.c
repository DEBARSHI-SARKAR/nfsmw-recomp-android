/* speed.exe 0063c680 FUN_0063c680; analysis pseudocode, not buildable source.
 * calls 00614e00 FUN_00614e00
 * calls 00614f10 FUN_00614f10
 * calls 006189d0 FUN_006189d0
 * calls 0060e2e0 FUN_0060e2e0
 * calls 0060e370 FUN_0060e370
 * calls 00605eb0 FUN_00605eb0
 * calls 005d51f0 FUN_005d51f0
 */

void FUN_0063c680(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0060e2e0(param_1);
  FUN_00614e00(param_1,"Perpetrator");
  if (*(int *)(param_2 + 0x10) != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*(int *)(param_2 + 0x10));
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      puVar2 = (undefined4 *)FUN_00614f10(param_1,4);
      *puVar2 = *(undefined4 *)(param_2 + 0x10);
      FUN_006189d0(param_1,"ISimable");
      FUN_0060e370(param_1,0xfffffffd);
      return;
    }
  }
  FUN_00605eb0(param_1);
  FUN_0060e370(param_1,0xfffffffd);
  return;
}

