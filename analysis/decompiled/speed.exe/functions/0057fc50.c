/* speed.exe 0057fc50 FUN_0057fc50; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 */

void __fastcall FUN_0057fc50(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x124) == 0) {
    puVar1 = (undefined4 *)FUN_00465a70(0x8cc8,0);
    *(undefined4 **)(param_1 + 0x124) = puVar1;
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x10) + 0x414);
    for (iVar2 = 0x2332; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  return;
}

