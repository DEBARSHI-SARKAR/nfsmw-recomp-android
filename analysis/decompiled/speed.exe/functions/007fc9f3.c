/* speed.exe 007fc9f3 FUN_007fc9f3; analysis pseudocode, not buildable source.
 * calls 007fc5f5 FUN_007fc5f5
 * calls 007fc943 FUN_007fc943
 */

undefined4 * FUN_007fc9f3(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_007fc5f5(200,0);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
    for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    FUN_007fc943(puVar1,param_1);
    puVar1[0x31] = 1;
    puVar2 = puVar1;
  }
  return puVar2;
}

