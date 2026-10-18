/* speed.exe 0063cad0 FUN_0063cad0; analysis pseudocode, not buildable source.
 * calls 00605ed0 FUN_00605ed0
 * calls 00614e00 FUN_00614e00
 * calls 00614f10 FUN_00614f10
 * calls 006189d0 FUN_006189d0
 * calls 0060e2e0 FUN_0060e2e0
 * calls 0060e370 FUN_0060e370
 * calls 00605eb0 FUN_00605eb0
 * calls 005d51f0 FUN_005d51f0
 */

void FUN_0063cad0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0060e2e0(param_1);
  FUN_00614e00(param_1,"CopHandle");
  if (*(int *)(param_2 + 0x10) != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*(int *)(param_2 + 0x10));
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      puVar2 = (undefined4 *)FUN_00614f10(param_1,4);
      *puVar2 = *(undefined4 *)(param_2 + 0x10);
      FUN_006189d0(param_1,"ISimable");
      goto LAB_0063cb3f;
    }
  }
  FUN_00605eb0(param_1);
LAB_0063cb3f:
  FUN_0060e370(param_1,0xfffffffd);
  FUN_00614e00(param_1,"Param");
  FUN_00605ed0(param_1,(float)*(int *)(param_2 + 0x14));
  FUN_0060e370(param_1,0xfffffffd);
  return;
}

