/* speed.exe 0083e150 FUN_0083e150; analysis pseudocode, not buildable source.
 * calls 0083e020 FUN_0083e020
 * calls 0078af00 FUN_0078af00
 */

undefined4 * FUN_0083e150(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_0078af00(0x44);
  puVar3 = puVar1;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *puVar1 = param_1;
  FUN_0083e020();
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return puVar1;
}

