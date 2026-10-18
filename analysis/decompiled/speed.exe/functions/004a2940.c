/* speed.exe 004a2940 FUN_004a2940; analysis pseudocode, not buildable source.
 * calls 00493b00 FUN_00493b00
 */

void __fastcall FUN_004a2940(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_50 [19];
  
  puVar2 = param_1;
  puVar3 = local_50;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00493b00(local_50,param_1);
  return;
}

